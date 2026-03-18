/*
 * XREFs of RemoveHmodDependency @ 0x1400C8E18
 * Callers:
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     DestroyEventHook @ 0x1400C9C20 (DestroyEventHook.c)
 *     _RegisterUserApiHook @ 0x140286DBC (_RegisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1402872E0 (_UnregisterDManipHook.c)
 *     _UnregisterUserApiHook @ 0x140287370 (_UnregisterUserApiHook.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8F20 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall RemoveHmodDependency(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  tagDomLock *v16; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+28h] [rbp-40h]
  char v18; // [rsp+48h] [rbp-20h]

  v1 = a1;
  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(&v16);
  if ( (int)v1 < *(_DWORD *)(W32GetUserSessionState(v3, v2) + 41392) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    if ( (*(_DWORD *)(UserSessionState + 4 * v1 + 41588))-- == 1 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 4 * v1 + 41460) )
      {
        v12 = W32GetUserSessionState(v11, v10);
        ++*(_DWORD *)(v12 + 41316);
        v15 = W32GetUserSessionState(v14, v13);
        *(_DWORD *)(v15 + 41312) |= 1 << v1;
      }
      else
      {
        *(_WORD *)(W32GetUserSessionState(v11, v10) + 2 * v1 + 41396) = 0;
      }
    }
  }
  if ( v18 && v16 )
  {
    if ( v17 )
      tagDomLock::UnLockExclusive(v16);
    else
      tagDomLock::UnLockShared(v16);
  }
}
