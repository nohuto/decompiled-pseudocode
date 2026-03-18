/*
 * XREFs of RIMConfigurePointerDevice @ 0x1400B2DEC
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1818 (RIMApplyPTPConfigRemedyWorker.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400B4D10 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     RIMFindConfigDeviceForInput @ 0x1401E0400 (RIMFindConfigDeviceForInput.c)
 */

__int16 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  int v8; // r15d
  bool v9; // bl
  bool v10; // bp
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r9
  const char *v15; // rax
  bool v16; // bl
  bool v17; // bp
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct RIMDEV *v21; // rcx
  struct RIMDEV *v23; // [rsp+90h] [rbp+18h] BYREF

  v23 = 0LL;
  LOWORD(v4) = *(_WORD *)(a3 + 40) - 4;
  if ( (unsigned __int16)v4 <= 1u )
  {
    if ( (*(_DWORD *)(a2 + 168) & 0x80u) == 0 )
    {
      v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 19336),
          3,
          1,
          72,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
      }
    }
    v8 = RIMFindConfigDeviceForInput(a1, a3, a2, &v23);
    v9 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v7 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v9 = 1;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(v7, WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      v14 = *(_QWORD *)(v11 + 19336);
      v15 = "found config device";
      if ( !v8 )
        v15 = "NO config device found";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        v14,
        4,
        1,
        73,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        (__int64)v15);
    }
    if ( !v8
      || ((v21 = v23, *(_WORD *)(a3 + 40) == 4) ? (*((_DWORD *)v23 + 42) |= 0x800u) : (*((_DWORD *)v23 + 42) |= 0x1000u),
          LODWORD(v4) = RIMDeliverConfigRequest(v21),
          *(_DWORD *)(*(_QWORD *)(a2 + 456) + 368LL) &= ~0x1000u,
          (int)v4 < 0) )
    {
      v4 = *(_QWORD *)(a2 + 456);
      *(_DWORD *)(v4 + 368) |= 0x1000u;
    }
  }
  return v4;
}
