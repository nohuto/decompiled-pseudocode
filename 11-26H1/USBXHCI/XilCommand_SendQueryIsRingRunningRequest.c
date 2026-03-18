/*
 * XREFs of XilCommand_SendQueryIsRingRunningRequest @ 0x14003FCE0
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall XilCommand_SendQueryIsRingRunningRequest(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  _UNKNOWN **v9; // rdx
  _UNKNOWN **v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+58h] [rbp-30h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(v5 + 112);
  v12 = 0LL;
  v13 = 0LL;
  v15 = 18LL;
  v14 = v6;
  v11 = 0LL;
  v8 = SecureChannel_SendRequestSynchronously(v7, (GUID *)&v12, 40, (__int64)&v11, 8);
  if ( v8 >= 0 )
  {
    if ( (int)v11 >= 0 )
    {
      *a2 = BYTE4(v11);
      *a3 = BYTE5(v11);
    }
    else
    {
      v10 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          (_DWORD)v10,
          7,
          28,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v11);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but CommandQueryIsRingRunning failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        892);
    }
  }
  else
  {
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 72),
        (_DWORD)v9,
        7,
        27,
        (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
        v8);
    }
  }
}
