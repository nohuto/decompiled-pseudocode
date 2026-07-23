/*
 * XREFs of KiTraceCpuPartitionRundown @ 0x1407BE260
 * Callers:
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 * Callees:
 *     ExSaFree @ 0x14045C8AC (ExSaFree.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     KiInitializeCpuPartitionLogPerProcessorBuffer @ 0x1405F6E08 (KiInitializeCpuPartitionLogPerProcessorBuffer.c)
 *     KiSizeOfCpuPartitionLogPerProcessorBuffer @ 0x1405F71B8 (KiSizeOfCpuPartitionLogPerProcessorBuffer.c)
 */

int __fastcall KiTraceCpuPartitionRundown(char a1)
{
  USHORT MaximumGroupCount; // bp
  __int64 v3; // rax
  size_t v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx

  MaximumGroupCount = KeQueryMaximumGroupCount();
  v3 = KiSizeOfCpuPartitionLogPerProcessorBuffer(MaximumGroupCount);
  v4 = v3;
  if ( a1 )
  {
    v5 = ExSaAllocate(v3, 0);
    v6 = v5;
    if ( v5 != -1LL )
    {
      LODWORD(v5) = KiInitializeCpuPartitionLogPerProcessorBuffer(v5, v4, MaximumGroupCount);
      KiCpuPartitionLogPerProcessorBuffer = v6;
      _InterlockedExchange64((volatile __int64 *)&KiCpuPartitionLogPerProcessorBufferRundown, 0LL);
    }
  }
  else
  {
    ExWaitForRundownProtectionRelease(&KiCpuPartitionLogPerProcessorBufferRundown);
    if ( KiCpuPartitionLogPerProcessorBuffer != -1 )
    {
      ExSaFree(KiCpuPartitionLogPerProcessorBuffer, v4);
      KiCpuPartitionLogPerProcessorBuffer = -1LL;
    }
    LODWORD(v5) = _InterlockedExchange64((volatile __int64 *)&KiCpuPartitionLogPerProcessorBufferRundown, 1LL);
  }
  return v5;
}
