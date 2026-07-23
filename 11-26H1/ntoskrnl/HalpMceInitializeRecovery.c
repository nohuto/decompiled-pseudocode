/*
 * XREFs of HalpMceInitializeRecovery @ 0x140590C68
 * Callers:
 *     HalpInitializeMce @ 0x140BEFEA4 (HalpInitializeMce.c)
 * Callees:
 *     <none>
 */

__int64 HalpMceInitializeRecovery()
{
  __int64 result; // rax

  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)result >= 0x80000008 )
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    result = (1LL << _RAX) - 1;
    HalpMcaPhysicalAddressMask = result;
  }
  return result;
}
