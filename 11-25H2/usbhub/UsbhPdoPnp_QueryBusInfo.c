/*
 * XREFs of UsbhPdoPnp_QueryBusInfo @ 0x140038B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryBusInfo(__int64 a1, IRP *a2)
{
  __int64 Pool2; // rax
  unsigned int v4; // ebx

  Pool2 = ExAllocatePool2(256LL, 24LL, 1112885333LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 15LL;
    v4 = 0;
    *(GUID *)Pool2 = GUID_BUS_TYPE_USB;
    a2->IoStatus.Information = Pool2;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      v4);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
