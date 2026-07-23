/*
 * XREFs of WheapCheckForClzeroSupport @ 0x1406D88A4
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *WheapCheckForClzeroSupport()
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( result->CpuVendor == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)result >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      if ( (_RBX & 1) != 0 )
        WheapClearPoisonSupported = 1;
    }
  }
  return result;
}
