/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x140032FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140057924 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // edx
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // eax
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v3 = 40;
LABEL_3:
    LOWORD(v11[0]) = v3;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v3 = -1;
    goto LABEL_3;
  }
  LOWORD(v11[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v11[0] + 1) + 16LL),
         off_14006B128);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 144LL);
  if ( *(_BYTE *)(v4 + 142) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Slot already enabled");
  if ( *(_BYTE *)(v4 + 143) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Slot ID was expected to be 0");
  v7 = Endpoint_Enable(*(_QWORD *)(v4 + 184));
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v6,
        12,
        14,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v7);
    }
  }
  else
  {
    if ( Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
    {
      *(_QWORD *)(v4 + 432) = a2;
      *(_BYTE *)(v4 + 440) = 0;
      memset((void *)(v4 + 464), 0, 0x60uLL);
      *(_QWORD *)(v4 + 512) = v4;
      *(_QWORD *)(v4 + 504) = UsbDevice_EnableCompletion;
      v9 = *(_DWORD *)(v4 + 500) & 0xFFFF27FF;
      *(_QWORD *)(v4 + 536) = 0LL;
      *(_QWORD *)(v4 + 544) = 0LL;
      *(_DWORD *)(v4 + 500) = v9 | 0x2400;
      *(_QWORD *)(v4 + 552) = 0LL;
      return Command_SendCommand(v5, v4 + 464);
    }
    LOBYTE(v8) = 1;
    v7 = -1073741810;
    Endpoint_Disable(*(_QWORD *)(v4 + 184), v8);
  }
  *(_QWORD *)(v4 + 432) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v7);
}
