/*
 * XREFs of UsbhFdoReturnHubName @ 0x140040E44
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhGetHubPdoName @ 0x140025048 (UsbhGetHubPdoName.c)
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
