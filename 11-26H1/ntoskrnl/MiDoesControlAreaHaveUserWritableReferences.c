/*
 * XREFs of MiDoesControlAreaHaveUserWritableReferences @ 0x14048CB48
 * Callers:
 *     MmDoesFileHaveUserWritableReferences @ 0x1404581F0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x14045DF50 (MiComputeFlushRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiDoesControlAreaHaveUserWritableReferences(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v4; // r14
  bool v5; // zf
  unsigned __int64 v6; // rsi
  _DWORD *v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  _QWORD *v11; // rcx

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 92);
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  v5 = v2 == 0;
  if ( !v2 )
  {
    v6 = *(_QWORD *)(a1 + 112);
    if ( v6 > 1 )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 2112));
      v8 = *(_DWORD **)(v4 + 2432);
      if ( v8 )
      {
        v9 = *v8;
        v10 = 0;
        v11 = v8 + 24;
        while ( v10 < v9 )
        {
          if ( *v11 == a1 )
          {
            --v6;
            break;
          }
          v11 += 189;
          ++v10;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 2112));
      if ( v6 > 1 )
        v2 = 1;
    }
    v5 = v2 == 0;
  }
  LOBYTE(v1) = !v5;
  return v1;
}
