/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x140130FC0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(volatile void *a1, volatile void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  unsigned int v5; // r10d
  __int64 v6; // rcx
  char v10; // [rsp+60h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  UserSessionState = W32GetUserSessionState(v3, v2);
  RtlStringCchCopyW((unsigned __int16 *)a1, 0x104uLL, (const unsigned __int16 *)(UserSessionState + 65268));
  RtlStringCchCopyW((unsigned __int16 *)a2, v5, L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6);
  return 1LL;
}
