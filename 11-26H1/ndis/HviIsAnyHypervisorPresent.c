/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1400E886C
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DF8D4 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1400E882C (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1400E88AC (HviIsHypervisorMicrosoftCompatible.c)
 * Callees:
 *     <none>
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
