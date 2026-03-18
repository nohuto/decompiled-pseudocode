/*
 * XREFs of MiGetNodeBaseDomain @ 0x1404F71B0
 * Callers:
 *     MiInitializeZeroingDomains @ 0x14087F248 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeBaseDomain(unsigned int a1)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2D6B8 + 376) + 12LL);
}
