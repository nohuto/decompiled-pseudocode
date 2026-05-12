/*
 * XREFs of RaidAdapterCancelRemoveDeviceIrp @ 0x140183FA8
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaidAdapterCancelRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  bool v3; // zf
  __int64 v5; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 1);
  v3 = StorEtwLoggingEnabled == 0;
  a2->IoStatus.Status = 0;
  if ( !v3 )
  {
    v8 = 0LL;
    IoGetActivityIdIrp(a2, &v8);
    if ( (byte_140173442 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v5, &EventPnpRequestComplete, &v8, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
