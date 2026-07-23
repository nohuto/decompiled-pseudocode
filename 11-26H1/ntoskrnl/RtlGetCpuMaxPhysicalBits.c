/*
 * XREFs of RtlGetCpuMaxPhysicalBits @ 0x140C04F34
 * Callers:
 *     SpcDetectKvaLeakage @ 0x140C0808C (SpcDetectKvaLeakage.c)
 * Callees:
 *     HviGetImplementedPhysicalBits @ 0x1406E0AF0 (HviGetImplementedPhysicalBits.c)
 *     RtlGetProcessorSignature @ 0x140C050BC (RtlGetProcessorSignature.c)
 */

__int64 RtlGetCpuMaxPhysicalBits()
{
  int ProcessorSignature; // ebx
  unsigned int v1; // ecx
  __int64 i; // rdx
  unsigned __int8 v14; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+48h] [rbp+18h] BYREF

  v14 = 0;
  v15 = 0;
  ProcessorSignature = RtlGetProcessorSignature(&v14, 0LL, 0LL, 0LL);
  if ( HviGetImplementedPhysicalBits((int *)&v15) )
  {
    return v15;
  }
  else
  {
    v1 = 46;
    for ( i = 0LL; *((_DWORD *)&KiCpuTable[1] + 5 * i) != 19; i = (unsigned int)(i + 1) )
    {
      if ( *((_DWORD *)KiCpuTable + 5 * i) == v14 && *((_DWORD *)KiCpuTable + 5 * i + 1) == ProcessorSignature )
      {
        v1 = *((_DWORD *)&KiCpuTable[1] + 5 * i + 1);
        if ( !v1 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000008 )
          {
            LOBYTE(_RAX) = 36;
          }
          else
          {
            _RAX = 2147483656LL;
            __asm { cpuid }
          }
          return (unsigned __int8)_RAX;
        }
        return v1;
      }
    }
  }
  return v1;
}
