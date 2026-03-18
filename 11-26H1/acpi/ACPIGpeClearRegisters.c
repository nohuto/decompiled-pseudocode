/*
 * XREFs of ACPIGpeClearRegisters @ 0x14002D4CC
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x14002E3C0 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeClearEventMasks @ 0x1400613E4 (ACPIGpeClearEventMasks.c)
 *     ACPILoadProcessFADT @ 0x1400DB9D8 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x14002D5E0 (ACPIReadGpeStatusRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x14002D678 (ACPIWriteGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  __int64 i; // rbx
  __int64 v2; // rdx

  result = AcpiInformation;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    LOBYTE(v2) = ACPIReadGpeStatusRegister((unsigned int)i) & (*((_BYTE *)GpeEnable + i) | *((_BYTE *)GpeWakeEnable + i));
    ACPIWriteGpeStatusRegister((unsigned int)i, v2);
    result = AcpiInformation;
  }
  return result;
}
