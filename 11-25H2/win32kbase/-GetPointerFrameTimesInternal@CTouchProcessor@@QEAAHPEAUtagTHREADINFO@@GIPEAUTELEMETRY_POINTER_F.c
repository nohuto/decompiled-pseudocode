/*
 * XREFs of ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D30E0
 * Callers:
 *     NtUserGetPointerFrameTimes @ 0x1401709F0 (NtUserGetPointerFrameTimes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D3718 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D4070 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FF790 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct TELEMETRY_POINTER_FRAME_TIMES *a5)
{
  struct _LIST_ENTRY *v5; // rdi
  unsigned __int64 v9; // rdx
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  __int64 v11; // rdx
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  v5 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( (ThreadPointerHookData || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v5, a3)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0
    && (v9 = *((_QWORD *)ThreadPointerHookData + 3)) != 0 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataTimes(this, v9, a4, a5) )
      return 1LL;
    v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        327,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69144),
        2,
        4,
        326,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
        a3);
    }
  }
  UserSetLastError(87);
  return 0LL;
}
