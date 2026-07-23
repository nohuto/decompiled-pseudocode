/*
 * XREFs of PfpRpShutdown @ 0x1407C9D30
 * Callers:
 *     PfpParametersWatcher @ 0x1407CAD40 (PfpParametersWatcher.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     PfpRpControlRequestReset @ 0x1409BDEE4 (PfpRpControlRequestReset.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rdi
  _DWORD *v8; // rsi
  _QWORD *i; // rdi
  void *v10; // r10
  __int64 v11; // r8
  _QWORD *j; // rdx
  void *v13; // rcx

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 48), v2, v3, v4);
  v5 = *(_QWORD **)(a1 + 8);
  v6 = v5;
  if ( !v5 )
    goto LABEL_6;
  if ( (*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v6 = *(_QWORD **)(a1 + 8);
  v7 = (_QWORD *)*v5;
  if ( (*v5 & 1) != 0 )
  {
LABEL_6:
    v8 = (_DWORD *)(a1 + 4);
    for ( i = v5 + 1; i < &v6[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5]; ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
        _mm_lfence();
        v7 = (_QWORD *)*i;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v8 = (_DWORD *)(a1 + 4);
LABEL_11:
    if ( v7 )
    {
      do
      {
        v10 = v7;
        v11 = v7[1] & (-1LL << (*v8 & 0x1F));
        v7 = (_QWORD *)*v7;
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                             + 8LL
                             + 8LL
                             * (((*v8 >> 5) - 1) & (HIBYTE(v11)
                                                  - 877075889
                                                  + 442596621 * (unsigned __int8)v11
                                                  + 37
                                                  * (BYTE6(v11)
                                                   + 37
                                                   * (BYTE5(v11)
                                                    + 37
                                                    * (BYTE4(v11)
                                                     + 37
                                                     * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (unsigned int)BYTE1(v11)))))))));
                (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)(unsigned int)*v8 >> 5);
                ++j )
          {
            v7 = (_QWORD *)*j;
            if ( (*j & 1) == 0 )
              goto LABEL_18;
          }
          v7 = 0LL;
        }
LABEL_18:
        ExFreePoolWithTag(v10, 0);
      }
      while ( v7 );
      v8 = (_DWORD *)(a1 + 4);
    }
  }
  v13 = *(void **)(a1 + 8);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *v8 = 0;
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 48));
  return PfpRpControlRequestReset(a1);
}
