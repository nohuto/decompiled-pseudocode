/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1400C9430
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C951C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x1400C95C8 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  struct tagHOOK *v3; // rax
  tagDomLock *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v9; // [rsp+28h] [rbp-40h] BYREF
  char v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+50h] [rbp-18h]

  EnterLeaveCritShared::EnterLeaveCritShared(v8, 1LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(&v9);
  LOBYTE(v2) = 5;
  v3 = (struct tagHOOK *)HMValidateHandleWithDescriptor(a1, v2);
  v5 = 0LL;
  if ( v3 )
  {
    v6 = (int)zzzUnhookWindowsHookEx(v3);
    if ( v11 )
    {
      v4 = v9;
      if ( v9 )
      {
        if ( v10 )
          tagDomLock::UnLockExclusive(v9);
        else
          tagDomLock::UnLockShared(v9);
      }
      v11 = 0;
    }
    v5 = v6;
  }
  else if ( v11 )
  {
    v4 = v9;
    if ( v9 )
    {
      if ( v10 )
        tagDomLock::UnLockExclusive(v9);
      else
        tagDomLock::UnLockShared(v9);
    }
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
