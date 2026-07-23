/*
 * XREFs of HalpMcParallelLoadSupported @ 0x140595F94
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
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
