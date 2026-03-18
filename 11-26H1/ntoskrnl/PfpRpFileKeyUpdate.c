/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1408D4BF0
 * Callers:
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PfLockExclusiveAcquire @ 0x1404C3BA0 (PfLockExclusiveAcquire.c)
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x140ABB5F0 (PfpRpRehashIfNeeded.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r13d
  int v5; // ebx
  int v6; // eax
  __int64 v8; // r15
  PVOID v9; // rbp
  _QWORD *v10; // rdi
  struct _EX_RUNDOWN_REF *v11; // r14
  unsigned __int64 v12; // rtt
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  _QWORD *v15; // r12
  __int64 v16; // rdx
  int v17; // ebx
  WCHAR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  WCHAR *j; // rbp
  int v22; // r10d
  __int64 v23; // r9
  __int64 v24; // r8
  _DWORD *v25; // r14
  _QWORD *v26; // rcx
  unsigned int v27; // edx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  void *v33; // rcx
  unsigned __int64 v34; // r9
  _QWORD *i; // r8
  _QWORD *v36; // rcx
  unsigned __int8 v37; // al
  __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 Pool2; // [rsp+28h] [rbp-70h]
  _DWORD *v40; // [rsp+38h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v41; // [rsp+48h] [rbp-50h]
  int v43; // [rsp+A8h] [rbp+10h]
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v38 = *(_QWORD *)(a2 + 16);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  v8 = a1;
  v43 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v6 & 1) == 0 )
    return 3221225600LL;
  v11 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  v41 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  _m_prefetchw((const void *)(a1 + 136));
  v12 = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v12 + 2, v12)
    && !ExfAcquireRundownProtection(v11) )
  {
    return 3221225600LL;
  }
  if ( !v5 )
  {
    PfLockExclusiveAcquire((unsigned __int64 *)(v8 + 48), a2, a3, a4);
    v15 = 0LL;
LABEL_33:
    if ( *(_DWORD *)v8 )
    {
      v34 = v38 & (-1LL << (*(_DWORD *)(v8 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(v8 + 8)
                         + 8
                         * (((*(_DWORD *)(v8 + 4) >> 5) - 1) & (442596621 * (unsigned __int8)v34
                                                              - 877075889
                                                              + HIBYTE(v34)
                                                              + 37
                                                              * (BYTE6(v34)
                                                               + 37
                                                               * (BYTE5(v34)
                                                                + 37
                                                                * (BYTE4(v34)
                                                                 + 37
                                                                 * ((((unsigned int)v38 & (-1 << (*(_DWORD *)(v8 + 4) & 0x1F))) >> 24)
                                                                  + 37
                                                                  * ((unsigned __int8)(((unsigned int)v38 & (-1 << (*(_DWORD *)(v8 + 4) & 0x1F))) >> 16)
                                                                   + 37
                                                                   * (unsigned __int8)((unsigned __int16)(v38 & (-1 << (*(_DWORD *)(v8 + 4) & 0x1F))) >> 8)))))))));
            ;
            i = (_QWORD *)*i )
      {
        v36 = (_QWORD *)*i;
        if ( (*i & 1) != 0 )
          break;
        if ( ((-1LL << (*(_DWORD *)(v8 + 4) & 0x1F)) & v36[1]) == v34 )
        {
          *i = *v36;
          --*(_DWORD *)v8;
          *v36 |= 0x8000000000000002uLL;
          if ( !v36 )
            goto LABEL_22;
          if ( *(_QWORD **)(v8 + 16) == v36 )
            *(_QWORD *)(v8 + 16) = v8 + 24;
          *v36 = v10;
          v10 = v36;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_22;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v15 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v16 = (unsigned int)(2 * (*(_DWORD *)(v8 + 4) >> 5));
    v40 = (_DWORD *)(v8 + 4);
    if ( *(_DWORD *)v8 >= (unsigned int)v16 )
    {
      v17 = 2 * (*(_DWORD *)(v8 + 4) >> 5);
      if ( !(_DWORD)v16 )
        v17 = 64;
      P = (PVOID)ExAllocatePool2(0x100uLL);
      if ( !P )
        v17 = 0;
      v43 = v17;
    }
    v18 = *(WCHAR **)(a2 + 24);
    v19 = *(unsigned __int16 *)(a2 + 34);
    v20 = 314159LL;
    for ( j = &v18[v19]; v18 < j; v20 = 37 * (v37 + 37 * v20) )
    {
      v37 = RtlUpcaseUnicodeChar(*v18++);
      v16 = 0LL;
    }
    if ( !v20 )
    {
      v4 = -1073741747;
      ExReleaseRundownProtection_0(v11);
      v9 = P;
LABEL_25:
      ExFreePoolWithTag(v15, 0);
LABEL_26:
      while ( v10 )
      {
        v33 = v10;
        v10 = (_QWORD *)*v10;
        ExFreePoolWithTag(v33, 0);
      }
      goto LABEL_27;
    }
    PfLockExclusiveAcquire((unsigned __int64 *)(v8 + 48), v16, v13, v14);
    v22 = *(_DWORD *)(v8 + 4) >> 5;
    v23 = -1LL << (*(_DWORD *)(v8 + 4) & 0x1F);
    v24 = v38 & v23;
    if ( v22 )
    {
      v15 = (_QWORD *)Pool2;
      v8 = a1;
      v25 = (_DWORD *)(a1 + 4);
      v26 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                     + 8
                     * ((v22 - 1) & (442596621 * (unsigned __int8)v24
                                   - 877075889
                                   + ((v38 & (unsigned __int64)v23) >> 56)
                                   + 37
                                   * ((unsigned __int8)((v38 & (unsigned __int64)v23) >> 48)
                                    + 37
                                    * ((unsigned __int8)((unsigned __int16)((v38 & (unsigned __int64)v23) >> 32) >> 8)
                                     + 37
                                     * ((unsigned __int8)((v38 & (unsigned __int64)v23) >> 32)
                                      + 37
                                      * ((((unsigned int)v38 & (unsigned int)v23) >> 24)
                                       + 37
                                       * ((unsigned __int8)(((unsigned int)v38 & (unsigned int)v23) >> 16)
                                        + 37 * (unsigned __int8)((unsigned __int16)(v38 & v23) >> 8)))))))));
      v27 = v43;
      while ( 1 )
      {
        v28 = (_QWORD *)*v26;
        v26 = v28;
        if ( ((unsigned __int8)v28 & 1) != 0 )
          break;
        if ( v24 == (v23 & v28[1]) )
        {
          if ( !v28 )
            break;
          v28[2] = v20;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v8 = a1;
      v15 = (_QWORD *)Pool2;
      v27 = v43;
      v25 = v40;
    }
    *v15 = 0LL;
    v15[1] = v38;
    v15[2] = v20;
    if ( (unsigned int)PfpRpRehashIfNeeded(v8, &P, v27) )
    {
      v29 = (_QWORD *)(*(_QWORD *)(v8 + 8)
                     + 8
                     * (((*v25 >> 5) - 1) & (442596621 * (unsigned __int8)(v15[1] & (-1 << (*v25 & 0x1F)))
                                           + ((v15[1] & (unsigned __int64)(-1LL << (*v25 & 0x1F))) >> 56)
                                           + 37
                                           * ((unsigned __int8)((v15[1] & (unsigned __int64)(-1LL << (*v25 & 0x1F))) >> 48)
                                            + 37
                                            * ((unsigned __int8)((unsigned __int16)((v15[1] & (unsigned __int64)(-1LL << (*v25 & 0x1F))) >> 32) >> 8)
                                             + 37
                                             * ((unsigned __int8)((v15[1] & (unsigned __int64)(-1LL << (*v25 & 0x1F))) >> 32)
                                              + 37
                                              * ((((_DWORD)v15[1] & (unsigned int)(-1 << (*v25 & 0x1F))) >> 24)
                                               + 37
                                               * ((unsigned __int8)(((_DWORD)v15[1] & (unsigned int)(-1 << (*v25 & 0x1F))) >> 16)
                                                + 37
                                                * (unsigned __int8)((unsigned __int16)(v15[1] & (-1 << (*v25 & 0x1F))) >> 8))))))
                                           - 877075889)));
      *v15 = *v29;
      *v29 = v15;
      v15 = 0LL;
      ++*(_DWORD *)v8;
LABEL_21:
      v11 = (struct _EX_RUNDOWN_REF *)(v8 + 136);
    }
    else
    {
      v11 = v41;
      v4 = -1073741670;
    }
LABEL_22:
    v9 = P;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 48));
    KeAbPostRelease(v8 + 48);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31);
    ExReleaseRundownProtection_0(v11);
    if ( !v15 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v4 = -1073741670;
  ExReleaseRundownProtection_0(v11);
LABEL_27:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
