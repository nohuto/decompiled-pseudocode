/*
 * XREFs of RootHub_UcxEvtClearHubFeature @ 0x14004A4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004B7F4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtClearHubFeature(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int16 v5; // ax
  int v6; // edx
  __int64 v7; // rbp
  int v8; // r9d
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  _OWORD v13[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v14; // [rsp+90h] [rbp-38h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 1001LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      977);
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v5 = 40;
    goto LABEL_9;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v5 = -1;
LABEL_9:
    LOWORD(v13[0]) = v5;
    goto LABEL_10;
  }
  LOWORD(v13[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_10:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v13);
  v7 = *((_QWORD *)&v13[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 128LL) != 288 || *(_DWORD *)(*((_QWORD *)&v13[0] + 1) + 132LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(*((_QWORD *)&v13[0] + 1) + 134LL);
      v8 = 35;
      v10 = *(unsigned __int8 *)(*((_QWORD *)&v13[0] + 1) + 133LL);
      goto LABEL_24;
    }
LABEL_25:
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  if ( *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 130LL) )
  {
    if ( *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 130LL) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 38;
        v9 = *(unsigned __int8 *)(*((_QWORD *)&v13[0] + 1) + 134LL);
        v10 = *(unsigned __int8 *)(*((_QWORD *)&v13[0] + 1) + 133LL);
LABEL_24:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v9, v10, v8);
        goto LABEL_25;
      }
      goto LABEL_25;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 37;
LABEL_20:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v6,
        11,
        v11,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 36;
    goto LABEL_20;
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
