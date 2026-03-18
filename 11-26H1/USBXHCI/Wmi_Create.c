/*
 * XREFs of Wmi_Create @ 0x14007E598
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Wmi_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  int v7; // edx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+38h] [rbp-71h] BYREF
  int v12; // [rsp+3Ch] [rbp-6Dh]
  void (__fastcall *v13)(__int64); // [rsp+40h] [rbp-69h]
  __int64 v14; // [rsp+48h] [rbp-61h]
  int v15; // [rsp+50h] [rbp-59h]
  int v16; // [rsp+54h] [rbp-55h]
  __int128 v17; // [rsp+58h] [rbp-51h]
  void *v18; // [rsp+68h] [rbp-41h]
  _QWORD v19[8]; // [rsp+70h] [rbp-39h] BYREF
  int v20; // [rsp+B0h] [rbp+7h] BYREF
  GUID v21; // [rsp+B4h] [rbp+Bh]
  __int128 v22; // [rsp+C4h] [rbp+1Bh]
  int v23; // [rsp+D4h] [rbp+2Bh]

  v12 = 0;
  HIDWORD(v19[0]) = 0;
  v10 = 0LL;
  v23 = 0;
  v22 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x42 )
      v20 = -1;
    else
      v20 = *(_DWORD *)(WdfStructures + 528);
  }
  else
  {
    v20 = 40;
  }
  v21 = GUID_USBXHCI_GET_CONTROLLER_CAPABILITIES;
  memset(v19, 0, sizeof(v19));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x41 )
      LODWORD(v19[0]) = -1;
    else
      LODWORD(v19[0]) = *(_DWORD *)(WdfStructures + 520);
  }
  else
  {
    LODWORD(v19[0]) = 64;
  }
  v12 = 0;
  v19[2] = &v20;
  v14 = 0LL;
  v17 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v11 = -1;
    else
      v11 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v11 = 56;
  }
  v18 = off_14006B150;
  v13 = Wmi_WdfEvtCleanupCallback;
  v15 = 1;
  v16 = 1;
  BYTE1(v19[3]) = 1;
  v19[4] = &Wmi_WdfEvtWmi_GetControllerCapabilities;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, int *, __int64 *))(WdfFunctions_01033 + 2984))(
         WdfDriverGlobals,
         a1,
         v19,
         &v11,
         &v10);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v7, 15, 10, (__int64)&WPP_ad99758670fa36758206abbbc9141c99_Traceguids, v6);
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   v10,
                   off_14006B150);
  *v8 = a2;
  *a3 = v8;
  return 0LL;
}
