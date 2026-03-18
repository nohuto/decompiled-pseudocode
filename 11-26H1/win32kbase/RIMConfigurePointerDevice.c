/*
 * XREFs of RIMConfigurePointerDevice @ 0x1400F0E9C
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x14013846C (RIMApplyPTPConfigRemedyWorker.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400777D0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMFindConfigDeviceForInput @ 0x1400F10F0 (RIMFindConfigDeviceForInput.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r15d
  bool v10; // bl
  bool v11; // bp
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r9
  const char *v16; // rax
  __int64 *v17; // rdx
  struct RIMDEV *v18; // rcx
  bool v19; // bl
  bool v20; // bp
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  struct RIMDEV *v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = 0LL;
  result = *(unsigned __int16 *)(a3 + 40);
  if ( (_WORD)result == 4 || (_WORD)result == 5 )
  {
    if ( (*(_DWORD *)(a2 + 168) & 0x80u) == 0 )
    {
      v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          72,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
      }
    }
    v9 = RIMFindConfigDeviceForInput(a1, a3, a2, &v24);
    v10 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v7 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v10 = 1;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(v7, (_DWORD)WPP_GLOBAL_Control, v8);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      v15 = *(_QWORD *)(v12 + 19368);
      v16 = "found config device";
      if ( !v9 )
        v16 = "NO config device found";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        v15,
        4,
        1,
        73,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        (__int64)v16);
    }
    if ( !v9 )
    {
      v17 = (__int64 *)(a2 + 456);
LABEL_12:
      result = *v17;
      *(_DWORD *)(*v17 + 368) |= 0x1000u;
      return result;
    }
    v18 = v24;
    if ( *(_WORD *)(a3 + 40) == 4 )
      *((_DWORD *)v24 + 42) |= 0x800u;
    else
      *((_DWORD *)v24 + 42) |= 0x1000u;
    result = RIMDeliverConfigRequest(v18);
    v17 = (__int64 *)(a2 + 456);
    *(_DWORD *)(*(_QWORD *)(a2 + 456) + 368LL) &= ~0x1000u;
    if ( (int)result < 0 )
      goto LABEL_12;
  }
  return result;
}
