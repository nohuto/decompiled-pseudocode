/*
 * XREFs of UsbdHubArmBusForWake @ 0x14003AA30
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall UsbdHubArmBusForWake(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rbx

  result = FdoExt(a1);
  v2 = result;
  if ( *((_QWORD *)result + 552) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          10,
          (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
    }
    result = (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64))v2 + 552))(*((_QWORD *)v2 + 529), 1LL);
    v2[640] |= 0x40000u;
  }
  return result;
}
