/*
 * XREFs of UsbhFdoReturnHubName @ 0x140041318
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhGetHubPdoName @ 0x14001F4A4 (UsbhGetHubPdoName.c)
 */

__int64 __fastcall UsbhFdoReturnHubName(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  int HubPdoName; // eax

  v5 = a1;
  FdoExt(a1);
  PdoExt(a2);
  Log(v5, 8, 1919446590, a3, 0LL);
  HubPdoName = UsbhGetHubPdoName(
                 v5,
                 a2,
                 *(_WORD **)(a3 + 24),
                 *(_DWORD *)(*(_QWORD *)(a3 + 184) + 8LL),
                 (unsigned int *)(a3 + 56));
  *(_DWORD *)(a3 + 48) = HubPdoName;
  LODWORD(v5) = HubPdoName;
  IofCompleteRequest((PIRP)a3, 0);
  UsbhDecPdoIoCount(a2, a3);
  return (unsigned int)v5;
}
