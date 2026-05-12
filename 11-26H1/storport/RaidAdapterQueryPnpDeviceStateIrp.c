/*
 * XREFs of RaidAdapterQueryPnpDeviceStateIrp @ 0x1401B998C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (*(_BYTE *)(a1 + 109) & 8) != 0 )
    *(_DWORD *)(a2 + 56) |= 4u;
  if ( StorEtwLoggingEnabled )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_140173442 & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v5, &EventPnpRequestComplete, &v7, a2, v6);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
