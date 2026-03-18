/*
 * XREFs of MiCheckSystemNxFault @ 0x1404EB224
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A2A28 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1403A6808 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A7860 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
