/*
 * XREFs of MiObtainSystemVa @ 0x1402A428C
 * Callers:
 *     MiGetPageTablesForLargeMap @ 0x1402A2624 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x1402A41EC (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x140360B30 (MiExpandPtes.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1402A42B4 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x1402A4348 (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v3);
}
