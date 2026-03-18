/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x140051220
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14004F25C (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // rsi
  int PointerFrameTimesInternal; // ebx
  __int64 CurrentProcessWow64Process; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v17);
  PointerFrameTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (unsigned int)(v3 - 1) > 0x63 || !a3 || a1 == 1 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  *(CTouchProcessor **)(UserSessionState + 3256),
                                  v17,
                                  a1,
                                  v3,
                                  (struct TELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  return PointerFrameTimesInternal;
}
