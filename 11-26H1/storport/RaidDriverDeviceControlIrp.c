/*
 * XREFs of RaidDriverDeviceControlIrp @ 0x140073D34
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     LoadExtensionDriver @ 0x1400758B4 (LoadExtensionDriver.c)
 *     UnloadExtensionDriver @ 0x1400782AC (UnloadExtensionDriver.c)
 */

__int64 __fastcall RaidDriverDeviceControlIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v4; // ebx
  unsigned int ExtensionDriver; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122436 )
  {
    ExtensionDriver = LoadExtensionDriver();
    goto LABEL_6;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122440 )
  {
    ExtensionDriver = UnloadExtensionDriver();
LABEL_6:
    v4 = ExtensionDriver;
    goto LABEL_7;
  }
  v4 = -1073741808;
LABEL_7:
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
