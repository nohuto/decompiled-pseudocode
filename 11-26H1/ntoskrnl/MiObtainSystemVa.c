/*
 * XREFs of MiObtainSystemVa @ 0x1402A4D3C
 * Callers:
 *     MiGetPageTablesForLargeMap @ 0x1402A30D4 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1402A36A0 (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x1402A4C9C (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x14035ED90 (MiExpandPtes.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140CFF020 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1402A4D64 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x1402A4DF8 (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v3);
}
