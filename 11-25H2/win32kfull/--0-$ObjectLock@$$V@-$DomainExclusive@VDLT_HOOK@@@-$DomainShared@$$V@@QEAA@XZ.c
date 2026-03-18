/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C951C
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1400C9430 (NtUserUnhookWindowsHookEx.c)
 *     FreeDelayedHooks @ 0x14012D3F0 (FreeDelayedHooks.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x140286AA0 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdi
  int v7; // esi
  tagDomLock *v8; // rcx
  __int64 result; // rax

  DLT = DLT_HOOK::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(a1 + 24) = 0;
  v6 = a1;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42360;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v8 = *(tagDomLock **)v6;
    if ( *(_QWORD *)v6 )
    {
      if ( *(_BYTE *)(v6 + 8) )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v6 += 16LL;
  }
  while ( !v7 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
