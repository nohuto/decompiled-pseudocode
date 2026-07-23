/*
 * XREFs of MiCheckSystemNxFault @ 0x1404E4804
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1403A8568 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
