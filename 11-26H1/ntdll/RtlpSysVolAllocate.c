/*
 * XREFs of RtlpSysVolAllocate @ 0x1800C554C
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C5290 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C556C (RtlpSysVolCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpSysVolAllocate(SIZE_T Size)
{
  return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
}
