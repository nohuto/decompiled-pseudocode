/*
 * XREFs of KiRcuRebalance @ 0x1405F014C
 * Callers:
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D9AC0 (KiSrcuCompareGraceSequence.c)
 */

__int64 KiRcuRebalance()
{
  __int64 v0; // r15
  __int64 v1; // rbp
  unsigned int v2; // r14d
  unsigned int v3; // eax
  _QWORD *v4; // rbx
  KIRQL v5; // dl
  __int64 v6; // rsi
  BOOL v7; // edi
  _QWORD *i; // rdi
  KIRQL v9; // r8
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  signed __int64 v14; // r8
  unsigned int v16; // [rsp+50h] [rbp+8h]

  if ( (dword_140F24FA4 & 1) == 0 )
    return 0LL;
  _m_prefetchw(&dword_140F24FA4);
  if ( (_InterlockedAnd(&dword_140F24FA4, 0xFFFFFFFE) & 1) == 0 )
    return 0LL;
  v0 = qword_140F24F28;
  if ( qword_140F24F20 != qword_140F24F28 )
  {
    LODWORD(v1) = 2;
    while ( (_DWORD)v1 )
    {
      v1 = (unsigned int)(v1 - 1);
      v2 = 0;
      v3 = *((unsigned __int8 *)&KiRcuState + v1 + 2);
      v16 = v3;
      while ( v2 < v3 )
      {
        v4 = (_QWORD *)(*((_QWORD *)&KiRcuState + v1 + 1) + ((unsigned __int64)v2 << 6));
        if ( v4[2] )
        {
          v5 = KeAcquireSpinLockRaiseToDpc(v4 + 3);
          v6 = v4[4];
          v7 = v4[2] && !v4[6] && v6 == v0 && v4[5] != v0;
          KeReleaseSpinLock(v4 + 3, v5);
          if ( v7 )
          {
            for ( i = (_QWORD *)v4[1]; i; i = (_QWORD *)i[1] )
            {
              KeAcquireSpinLockRaiseToDpc(i + 3);
              if ( (int)KiSrcuCompareGraceSequence(v4[5], v6) >= 0 )
                goto LABEL_26;
              v10 = KiSrcuCompareGraceSequence(v6, i[4]);
              if ( v10 < 0 )
                goto LABEL_26;
              v12 = i[6];
              if ( v12 )
              {
                if ( v10 > 0 )
                {
                  v6 = v11;
                  i[7] |= *v4 | v12;
                }
              }
              else
              {
                i[4] = v6;
              }
              v13 = *v4;
              v4[5] = v6;
              i[6] |= v13;
              if ( i[6] != i[2] )
              {
LABEL_26:
                KeReleaseSpinLock(i + 3, v9);
                goto LABEL_27;
              }
              i[6] = 0LL;
              i[7] = 0LL;
              KeReleaseSpinLock(i + 3, v9);
              v4 = i;
            }
            while ( (int)KiSrcuCompareGraceSequence(v6, qword_140F24F20) > 0
                 && v14 != _InterlockedCompareExchange64(&qword_140F24F20, v6, v14) )
              ;
            _InterlockedOr(&dword_140F24FA4, 1u);
            return 1LL;
          }
LABEL_27:
          v3 = v16;
        }
        ++v2;
      }
    }
  }
  return dword_140F24FA4 & 1;
}
