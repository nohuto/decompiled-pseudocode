/*
 * XREFs of RaidpLinkUp @ 0x14007A7D8
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140078BD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     StorPortResume @ 0x14007C4D0 (StorPortResume.c)
 */

char __fastcall RaidpLinkUp(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  char v5; // di
  int v7; // [rsp+20h] [rbp-18h]

  v3 = (_QWORD *)(a1 + 616);
  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    McTemplateK0pq_EtwWriteTransfer(a1, &EventLinkUp, a3, *v3 + 16LL, v7);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 2140), 1);
  v5 = StorPortResume(*v3 + 16LL);
  if ( v5 )
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
  return v5;
}
