/*
 * XREFs of KiSrcuRebalance @ 0x1405F84D8
 * Callers:
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D31A0 (KiSrcuCompareGraceSequence.c)
 */

__int64 __fastcall KiSrcuRebalance(__int64 *a1, int a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // eax
  __int64 v11; // rsi
  KIRQL v12; // al
  __int64 v13; // rbp
  BOOL v14; // edi
  __int64 i; // rdi
  KIRQL v16; // r8
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r8
  unsigned int v22; // [rsp+50h] [rbp+8h]

  if ( (a1[8] & 1) == 0 )
    return 0LL;
  _m_prefetchw(a1 + 8);
  v3 = *((_DWORD *)a1 + 16);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 16, v3 & 0xFFFFFFFE, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 1) == 0 )
    return 0LL;
  v5 = a1[7];
  if ( a1[6] != v5 )
  {
    if ( !a2 )
      return 1LL;
    LODWORD(v7) = (unsigned __int8)byte_140F14FC1[0];
    while ( (_DWORD)v7 )
    {
      v7 = (unsigned int)(v7 - 1);
      v8 = (unsigned int)v7;
      v9 = 0;
      v10 = (unsigned __int8)byte_140F14FC4[v7];
      v22 = v10;
      while ( v9 < v10 )
      {
        v11 = a1[v8 + 2] + 56LL * v9;
        if ( **(_QWORD **)(v11 + 8) )
        {
          v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 16));
          v13 = *(_QWORD *)(v11 + 24);
          v14 = **(_QWORD **)(v11 + 8) && !*(_QWORD *)(v11 + 40) && v13 == v5 && *(_QWORD *)(v11 + 32) != v5;
          KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 16), v12);
          if ( v14 )
          {
            for ( i = *(_QWORD *)v11; i; i = *(_QWORD *)i )
            {
              KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 16));
              if ( (int)KiSrcuCompareGraceSequence(*(_QWORD *)(v11 + 32), v13) >= 0 )
                goto LABEL_30;
              v17 = KiSrcuCompareGraceSequence(v13, *(_QWORD *)(i + 24));
              if ( v17 < 0 )
                goto LABEL_30;
              v19 = *(_QWORD *)(i + 40);
              if ( v19 )
              {
                if ( v17 > 0 )
                {
                  v13 = v18;
                  *(_QWORD *)(i + 48) |= *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) | v19;
                }
              }
              else
              {
                *(_QWORD *)(i + 24) = v13;
              }
              v20 = *(_QWORD *)(v11 + 8);
              *(_QWORD *)(v11 + 32) = v13;
              *(_QWORD *)(i + 40) |= *(_QWORD *)(v20 + 8);
              if ( *(_QWORD *)(i + 40) != **(_QWORD **)(i + 8) )
              {
LABEL_30:
                KeReleaseSpinLock((PKSPIN_LOCK)(i + 16), v16);
                goto LABEL_31;
              }
              *(_QWORD *)(i + 40) = 0LL;
              *(_QWORD *)(i + 48) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(i + 16), v16);
              v11 = i;
            }
            while ( (int)KiSrcuCompareGraceSequence(v13, a1[6]) > 0
                 && v21 != _InterlockedCompareExchange64(a1 + 6, v13, v21) )
              ;
            _InterlockedOr((volatile signed __int32 *)a1 + 16, 1u);
            return 1LL;
          }
LABEL_31:
          v8 = (unsigned int)v7;
        }
        v10 = v22;
        ++v9;
      }
    }
  }
  return a1[8] & 1;
}
