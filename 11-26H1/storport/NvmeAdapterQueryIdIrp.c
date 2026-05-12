/*
 * XREFs of NvmeAdapterQueryIdIrp @ 0x140064BB4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeAdapterQueryIdIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_140173442 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
