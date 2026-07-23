/*
 * XREFs of MiGetNodeBaseDomain @ 0x1404F07C0
 * Callers:
 *     MiInitializeZeroingDomains @ 0x140885648 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeBaseDomain(unsigned int a1)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2D838 + 376) + 12LL);
}
