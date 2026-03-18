/*
 * XREFs of MiGetLargePteAddress @ 0x14043AB90
 * Callers:
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiInsertLargeUserMapping @ 0x14043A9B4 (MiInsertLargeUserMapping.c)
 *     MxMapLargeVa @ 0x1406E7444 (MxMapLargeVa.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MxMapVa @ 0x140CF7FB0 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLargePteAddress(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rcx
  __int64 v4; // rdx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 <= 1 )
  {
    v4 = 2 - a2;
    do
    {
      v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
