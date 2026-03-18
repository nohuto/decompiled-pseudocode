/*
 * XREFs of UsbhPdoPower_QueryPower @ 0x14004BD30
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x140031570 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhStartThisPowerIrp_Pdo @ 0x14003850C (UsbhStartThisPowerIrp_Pdo.c)
 *     WPP_RECORDER_SF_dD @ 0x14003EA34 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhPdoPower_QueryPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _DWORD *v5; // rbp
  __int64 v6; // r8
  unsigned int Options; // r9d
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // r9
  _DWORD *v10; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt(a1);
  UsbhStartThisPowerIrp_Pdo(*((_QWORD *)v5 + 148), a1, (__int64)a2, 703);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options )
  {
    if ( Options == 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = 11;
LABEL_9:
        WPP_RECORDER_SF_dD(
          (__int64)v8->DeviceExtension,
          *((unsigned __int16 *)v5 + 714),
          v6,
          v9,
          (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
          *((unsigned __int16 *)v5 + 714),
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v9 = 10;
      goto LABEL_9;
    }
  }
  v10 = PdoExt(a1);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v10 + 148), a1, a2, 716);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
