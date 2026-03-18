/*
 * XREFs of HalpFlushTLB @ 0x140522658
 * Callers:
 *     HalpAcpiIsCachedTableCompromised @ 0x140342D10 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140342E64 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x140343370 (HalpAcpiCheckAndMapTable.c)
 *     HalpMap @ 0x1403439AC (HalpMap.c)
 *     HalpUnmapVirtualAddress @ 0x140509DE0 (HalpUnmapVirtualAddress.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x14057E010 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
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
