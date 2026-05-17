/*
 * XREFs of RtlpSysVolAllocate @ 0x1800C7D8C
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C7DAC (RtlpSysVolCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 RtlpSysVolAllocate()
{
  return RtlAllocateHeap_0();
}
