/*
 * XREFs of UserGetWindowThreadProcessId @ 0x14019B1B0
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x14009C144 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     NtUserGetWindowThreadProcessId @ 0x1401BDD20 (NtUserGetWindowThreadProcessId.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateCatHandleNoRip @ 0x14019B25C (HMValidateCatHandleNoRip.c)
 */

__int64 __fastcall UserGetWindowThreadProcessId(__int64 a1, _DWORD *a2)
{
  unsigned int ThreadId; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  ThreadId = 0;
  v5 = HMValidateCatHandleNoRip(a1);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
    if ( a2 )
      *a2 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v7 + 464));
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
  return ThreadId;
}
