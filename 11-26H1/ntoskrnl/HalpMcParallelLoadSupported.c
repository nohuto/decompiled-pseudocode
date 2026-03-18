/*
 * XREFs of HalpMcParallelLoadSupported @ 0x140593814
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

bool HalpMcParallelLoadSupported()
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CpuVendor; // cl

  CurrentPrcb = KeGetCurrentPrcb();
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 1 )
    return CurrentPrcb->CpuType >= 0x17u;
  else
    return CpuVendor == 2;
}
