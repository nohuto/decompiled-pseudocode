/*
 * XREFs of ?WnfPacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x140084D00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall WnfPacketCompletionRoutine(struct VMBPACKET__ *a1, __int64 a2, void *a3)
{
  _InterlockedDecrement((volatile signed __int32 *)(((__int64 (__fastcall *)(struct VMBPACKET__ *, __int64, void *))qword_140168510)(
                                                      a1,
                                                      a2,
                                                      a3)
                                                  + 76));
  ((void (__fastcall *)(struct VMBPACKET__ *))qword_140168500)(a1);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventVmBusCompletePacketAsync);
  }
}
