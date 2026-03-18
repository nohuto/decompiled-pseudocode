/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1401BB550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B120 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     PtiFromThreadId @ 0x1400D8EE0 (PtiFromThreadId.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1u);
  v4 = 0LL;
  if ( IsInputThread(v3, v2) )
  {
    v7 = PtiFromThreadId(a1);
    if ( v7 )
    {
      LastWokenThread::Set(v7, 1u, 0, v8);
      v4 = 1LL;
      goto LABEL_7;
    }
    v5 = 87;
  }
  else
  {
    v5 = 5;
  }
  UserSetLastError(v5);
LABEL_7:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
  return v4;
}
