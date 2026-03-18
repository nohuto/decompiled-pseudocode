/*
 * XREFs of ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400C97E0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400C9AC4 (-FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1400C9B8C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall FreeSavedMessageInfoHandles(struct tagTHREADINFO *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rdi
  _BYTE v32[48]; // [rsp+20h] [rbp-58h] BYREF
  char v33; // [rsp+50h] [rbp-28h]

  FreePreviouslyReturnedHidData(a1);
  v2 = *((_QWORD *)a1 + 149);
  if ( v2 )
  {
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(v32);
    v33 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v33 = 1;
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v32);
    }
    W32GetCurrentThreadNonPaged(v19, v18);
    v23 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19872);
    if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(v23 + 8) )
    {
      UserSessionState = W32GetUserSessionState(v23, v22);
      v27 = *(_QWORD *)(UserSessionState + 19888)
          + *(_DWORD *)(W32GetUserSessionState(v26, v25) + 19896) * (unsigned int)(unsigned __int16)v2;
      v30 = (__int64 *)HMPkheFromPhe(v27);
      LOWORD(v2) = WORD1(v2) & 0x7FFF;
      if ( ((WORD1(v2) & 0x7FFF) == *(_WORD *)(v27 + 26)
         || (_WORD)v2 == 0x7FFF
         || !(_WORD)v2 && PsGetCurrentProcessWow64Process(v29, v28))
        && (*(_BYTE *)(v27 + 25) & 1) == 0
        && *(_BYTE *)(v27 + 24) == 20 )
      {
        v31 = *v30;
        if ( v31 )
        {
          if ( *(_BYTE *)(_HMPheFromObject(v31) + 24) == 20 )
            HMDestroyObject(v31);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v32);
    *((_QWORD *)a1 + 149) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 150);
  if ( v3 )
  {
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(v32);
    v33 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v33 = 1;
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v32);
    }
    W32GetCurrentThreadNonPaged(v5, v4);
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
    if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(v9 + 8) )
    {
      v10 = W32GetUserSessionState(v9, v8);
      v13 = *(_QWORD *)(v10 + 19888)
          + *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19896) * (unsigned int)(unsigned __int16)v3;
      v16 = (__int64 *)HMPkheFromPhe(v13);
      LOWORD(v3) = WORD1(v3) & 0x7FFF;
      if ( ((WORD1(v3) & 0x7FFF) == *(_WORD *)(v13 + 26)
         || (_WORD)v3 == 0x7FFF
         || !(_WORD)v3 && PsGetCurrentProcessWow64Process(v15, v14))
        && (*(_BYTE *)(v13 + 25) & 1) == 0
        && *(_BYTE *)(v13 + 24) == 21 )
      {
        v17 = *v16;
        if ( v17 )
        {
          if ( *(_BYTE *)(_HMPheFromObject(v17) + 24) == 21 )
            HMDestroyObject(v17);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v32);
    *((_QWORD *)a1 + 150) = 0LL;
  }
}
