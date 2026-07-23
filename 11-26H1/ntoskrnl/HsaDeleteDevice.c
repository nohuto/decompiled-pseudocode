/*
 * XREFs of HsaDeleteDevice @ 0x1405ABC90
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     HsaFreePasidTables @ 0x1405AC050 (HsaFreePasidTables.c)
 */

void __fastcall HsaDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 )
    HsaFreePasidTables(a1, v3);
  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 56));
  ExtEnvFreeMemory(v4, a2);
}
