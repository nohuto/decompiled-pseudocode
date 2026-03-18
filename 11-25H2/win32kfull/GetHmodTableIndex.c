/*
 * XREFs of GetHmodTableIndex @ 0x1400C8B54
 * Callers:
 *     _SetWinEventHook @ 0x1400C9E4C (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x140222070 (_RegisterDManipHook.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     _RegisterUserApiHook @ 0x140286DBC (_RegisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8F20 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetHmodTableIndex(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 v7; // si
  __int64 v8; // r8
  signed int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  _BYTE v29[48]; // [rsp+30h] [rbp-48h] BYREF

  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(v29);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v7 = UserAddAtomToAtomTableEx(*(_QWORD *)(UserSessionState + 41384), a1, 0LL, 2LL);
  if ( v7 )
  {
    v9 = 0;
    if ( *(int *)(W32GetUserSessionState(v6, v5) + 41392) > 0 )
    {
      v12 = 0LL;
      do
      {
        if ( *(_WORD *)(W32GetUserSessionState(v11, v10) + v12 + 41396) == v7 )
          break;
        ++v9;
        v12 += 2LL;
      }
      while ( v9 < *(_DWORD *)(W32GetUserSessionState(v11, v10) + 41392) );
    }
    if ( v9 != *(_DWORD *)(W32GetUserSessionState(v11, v10) + 41392) )
    {
      v15 = W32GetUserSessionState(v14, v13);
      UserDeleteAtomFromAtomTable(*(_QWORD *)(v15 + 41384), v7);
LABEL_8:
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v29, v16, v17);
      return (unsigned int)v9;
    }
    v9 = 0;
    if ( *(int *)(W32GetUserSessionState(v14, v13) + 41392) > 0 )
    {
      v21 = 0LL;
      do
      {
        if ( !*(_WORD *)(W32GetUserSessionState(v20, v19) + v21 + 41396) )
          break;
        ++v9;
        v21 += 2LL;
      }
      while ( v9 < *(_DWORD *)(W32GetUserSessionState(v20, v19) + 41392) );
    }
    if ( v9 != *(_DWORD *)(W32GetUserSessionState(v20, v19) + 41392) )
    {
LABEL_14:
      *(_WORD *)(W32GetUserSessionState(v23, v22) + 2LL * v9 + 41396) = v7;
      *(_DWORD *)(W32GetUserSessionState(v25, v24) + 4LL * v9 + 41460) = 0;
      *(_DWORD *)(W32GetUserSessionState(v27, v26) + 4LL * v9 + 41588) = 0;
      goto LABEL_8;
    }
    v28 = W32GetUserSessionState(v23, v22);
    if ( v9 != 32 )
    {
      ++*(_DWORD *)(v28 + 41392);
      goto LABEL_14;
    }
    UserDeleteAtomFromAtomTable(*(_QWORD *)(v28 + 41384), v7);
    UserSetLastError(8);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v29, v5, v8);
  return 0xFFFFFFFFLL;
}
