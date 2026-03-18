/*
 * XREFs of KiTraceCpuPartitionRundown @ 0x1407BB200
 * Callers:
 *     KeEtwRundown @ 0x1405E48E8 (KeEtwRundown.c)
 * Callees:
 *     ExSaFree @ 0x1404638EC (ExSaFree.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExSaAllocate @ 0x1404993B0 (ExSaAllocate.c)
 *     KeQueryMaximumGroupCount @ 0x1404BB300 (KeQueryMaximumGroupCount.c)
 *     KiInitializeCpuPartitionLogPerProcessorBuffer @ 0x1405F4448 (KiInitializeCpuPartitionLogPerProcessorBuffer.c)
 *     KiSizeOfCpuPartitionLogPerProcessorBuffer @ 0x1405F47F8 (KiSizeOfCpuPartitionLogPerProcessorBuffer.c)
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
