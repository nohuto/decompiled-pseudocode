/*
 * XREFs of xxxDoSysExpunge @ 0x14017B8FC
 * Callers:
 *     xxxDoSysExpungeIfNeeded @ 0x14001F490 (xxxDoSysExpungeIfNeeded.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400C79AC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14017BB28 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14017BB84 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ClientFreeLibrary @ 0x14017BC30 (ClientFreeLibrary.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDoSysExpunge(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int16 v26; // bx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-78h] BYREF
  PERESOURCE v36; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v37[48]; // [rsp+30h] [rbp-68h] BYREF

  v35 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42344);
  LockRefactorStagingAssertOwned((PERESOURCE *)&v35, v35);
  v5 = 0;
  v6 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 41316);
  *(_DWORD *)(*(_QWORD *)(a1 + 464) + 384LL) = v6;
  result = W32GetUserSessionState(v7, v6);
  if ( *(int *)(result + 41392) > 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 392LL;
    do
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + v12 + 41588) )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v15, v14) + v11 + 41396) )
        {
          v36 = *(PERESOURCE *)(W32GetUserSessionState(v15, v14) + 42344);
          LockRefactorStagingAssertOwned(&v36, v16);
          v14 = *(_QWORD *)(a1 + 464);
          v15 = v5;
          if ( ((1 << v5) & *(_DWORD *)(v14 + 388)) != 0 )
          {
            v17 = *(_QWORD *)(v13 + v14);
            v35 = *(_QWORD *)(W32GetUserSessionState(v5, v14) + 42344);
            LockRefactorStagingAssertOwned((PERESOURCE *)&v35, v18);
            v19 = ~(1 << v5);
            *(_QWORD *)(v13 + *(_QWORD *)(a1 + 464)) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 464) + 388LL) &= v19;
            UserSessionState = W32GetUserSessionState(v21, v20);
            if ( (*(_DWORD *)(UserSessionState + v12 + 41460))-- == 1 )
            {
              v26 = *(_WORD *)(W32GetUserSessionState(v24, v23) + v11 + 41396);
              v29 = W32GetUserSessionState(v28, v27);
              UserDeleteAtomFromAtomTable(*(_QWORD *)(v29 + 41384), v26);
              *(_WORD *)(W32GetUserSessionState(v31, v30) + v11 + 41396) = 0;
              v34 = W32GetUserSessionState(v33, v32);
              *(_DWORD *)(v34 + 41312) &= v19;
            }
            UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(v37);
            ClientFreeLibrary(v17);
            UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(v37);
          }
        }
      }
      ++v5;
      v13 += 8LL;
      v12 += 4LL;
      v11 += 2LL;
      result = W32GetUserSessionState(v15, v14);
    }
    while ( (signed int)v5 < *(_DWORD *)(result + 41392) );
  }
  return result;
}
