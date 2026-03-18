/*
 * XREFs of ACPIDockIrpQueryPnpDeviceState @ 0x1400AC2F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 */

__int64 __fastcall ACPIDockIrpQueryPnpDeviceState(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // si
  __int64 v4; // rcx
  char *IrpText; // rax
  const char *v6; // r8
  const char *v7; // r10
  char v8; // r11

  ACPIInternalGetDeviceExtension(a1);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Information |= 2uLL;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v4, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x18u,
      (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
      (char)a2,
      IrpText,
      0,
      v8,
      v6,
      v7);
  }
  return 0LL;
}
