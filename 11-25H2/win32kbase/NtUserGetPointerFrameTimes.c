/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x1401709F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D30E0 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // rsi
  int PointerFrameTimesInternal; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  struct tagTHREADINFO *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  PointerFrameTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (unsigned int)(v3 - 1) > 0x63 || !a3 || a1 == 1 )
  {
    UserSetLastError(87);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    UserSessionState = W32GetUserSessionState(v8, v7);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  *(CTouchProcessor **)(UserSessionState + 3256),
                                  v13,
                                  a1,
                                  v3,
                                  (struct TELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
  return PointerFrameTimesInternal;
}
