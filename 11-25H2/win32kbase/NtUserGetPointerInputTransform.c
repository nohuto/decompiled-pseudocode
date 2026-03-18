/*
 * XREFs of NtUserGetPointerInputTransform @ 0x140170EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x140197178 (ApiSetGetMiPInputTransform.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  int v6; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int MiPInputTransform; // eax
  __int64 v11; // rdx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v6 = 0;
  if ( a1 && !HIWORD(a1) && (unsigned int)(v4 - 1) <= 0x63 && a3 && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
    {
      MiPInputTransform = ApiSetGetMiPInputTransform(v14, a3);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v9, v8);
      MiPInputTransform = CTouchProcessor::GetPointerTransform(
                            *(CTouchProcessor **)(UserSessionState + 3256),
                            v14,
                            a1,
                            v4,
                            (struct tagINPUT_TRANSFORM *)a3);
    }
    v6 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return v6;
}
