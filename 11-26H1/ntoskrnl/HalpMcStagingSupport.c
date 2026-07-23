/*
 * XREFs of HalpMcStagingSupport @ 0x1405963C8
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 HalpMcStagingSupport()
{
  unsigned int v0; // r8d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  v0 = -1073741637;
  if ( KeGetCurrentPrcb()->CpuVendor == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RDX & 0x20000000) != 0 )
      {
        v11 = __readmsr(0x10Au);
        if ( (v11 & 0x10000) != 0 )
        {
          v12 = __readmsr(0x7Bu);
          if ( (v12 & 0x10) != 0 )
            return 0;
        }
      }
    }
  }
  return v0;
}
