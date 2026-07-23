/*
 * XREFs of MiInitializeEngineWorkAffinity @ 0x1402F63C4
 * Callers:
 *     MiFindBestZeroingProcessor @ 0x1402F6038 (MiFindBestZeroingProcessor.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUpdateZeroingAvailableAffinity @ 0x1402F6500 (MiUpdateZeroingAvailableAffinity.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MiInitializeEngineWorkAffinity(__int64 a1, unsigned int a2, int a3)
{
  _WORD *v3; // rdi
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  __int16 v15; // r10
  __int64 v16; // rcx
  bool v17; // zf
  _QWORD *i; // rbx
  _QWORD *v20; // rcx

  v3 = *(_WORD **)(a1 + 112);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 88) + 48LL * a2;
  memmove(v3, *(const void **)(v8 + 8), 16LL * *(unsigned int *)(a1 + 16));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 48LL);
  if ( a3 )
  {
    for ( i = *(_QWORD **)(a1 + 168); i != (_QWORD *)(a1 + 168); i = (_QWORD *)*i )
    {
      v20 = i - 20;
      if ( (*(_DWORD *)(i - 4) & 6) == 2 && v20[12] && *((_DWORD *)v20 + 22) == a2 )
      {
        v3 = *(_WORD **)(a1 + 112);
        MiUpdateZeroingAvailableAffinity(v20, v8, v3);
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v9 + 17376));
  v10 = *(_DWORD *)(a1 + 16);
  v11 = 0;
  if ( v10 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 120);
      v13 = 0;
      v14 = v10;
      if ( v10 )
      {
        v15 = v3[4];
        do
        {
          if ( *(_WORD *)(v12 + 8) == v15 )
          {
            v16 = *(_QWORD *)v12 & *(_QWORD *)v3;
            v17 = v16 == *(_QWORD *)v3;
            *(_QWORD *)v3 = v16;
            if ( !v17 )
              v7 = 1;
          }
          v14 = *(_DWORD *)(a1 + 16);
          v12 += 16LL;
          ++v13;
        }
        while ( v13 < v14 );
      }
      v3 += 8;
      ++v11;
      v10 = v14;
    }
    while ( v11 < v14 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 17376));
  return v7;
}
