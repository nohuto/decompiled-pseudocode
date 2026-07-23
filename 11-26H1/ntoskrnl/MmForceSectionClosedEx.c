/*
 * XREFs of MmForceSectionClosedEx @ 0x1404A9790
 * Callers:
 *     <none>
 * Callees:
 *     MiForceSectionClosed @ 0x1404A9890 (MiForceSectionClosed.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

bool __fastcall MmForceSectionClosedEx(__int64 a1, unsigned int a2)
{
  int v4; // edi
  int v5; // esi

  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 )
    KeBugCheckEx(0x1Au, 0x43000uLL, a2, 0LL, 0LL);
  v4 = 1;
  if ( (a2 & 1) != 0 )
    v5 = MiForceSectionClosed(a1, a2 & 0xFFFFFFFD, 0LL);
  else
    v5 = 1;
  if ( (a2 & 2) != 0 )
    v4 = MiForceSectionClosed(a1, a2 & 0xFFFFFFFE, 0LL);
  return v5 != 2 && v4 != 2;
}
