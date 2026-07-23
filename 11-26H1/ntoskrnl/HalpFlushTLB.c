/*
 * XREFs of HalpFlushTLB @ 0x140524CC4
 * Callers:
 *     HalpAcpiIsCachedTableCompromised @ 0x140344D90 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x140580530 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 */

char HalpFlushTLB()
{
  unsigned __int64 v0; // rax
  char v1; // r8
  unsigned __int64 v2; // rdx

  LOBYTE(v0) = HalpDisableInterrupts();
  v1 = v0;
  v2 = __readcr4();
  if ( (v2 & 0x20080) != 0 )
  {
    __writecr4(v2 ^ 0x80);
    __writecr4(v2);
  }
  else
  {
    v0 = __readcr3();
    __writecr3(v0);
  }
  if ( v1 )
    _enable();
  return v0;
}
