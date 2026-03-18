/*
 * XREFs of NtUserGetPointerInputTransform @ 0x140053640
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x140053744 (ApiSetGetMiPInputTransform.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  int v6; // ebx
  __int64 CurrentProcessWow64Process; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int MiPInputTransform; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v18);
  v6 = 0;
  if ( a1 && !HIWORD(a1) && (unsigned int)(v4 - 1) <= 0x63 && a3 && ((_DWORD)v4 == 1 || a1 != 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
    {
      MiPInputTransform = ApiSetGetMiPInputTransform(v18, a3);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v9, v8, v10);
      MiPInputTransform = CTouchProcessor::GetPointerTransform(
                            *(CTouchProcessor **)(UserSessionState + 3256),
                            v18,
                            a1,
                            v4,
                            (struct tagINPUT_TRANSFORM *)a3);
    }
    v6 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  return v6;
}
