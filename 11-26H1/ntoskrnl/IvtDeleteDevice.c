/*
 * XREFs of IvtDeleteDevice @ 0x1405B1D40
 * Callers:
 *     HalpIvtCreateReservedDevice @ 0x1405B1E70 (HalpIvtCreateReservedDevice.c)
 * Callees:
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 */

void __fastcall IvtDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  if ( v3 )
  {
    IvtFreeScalableModePasidTables(a1, v3);
    *(_QWORD *)(a2 + 80) = 0LL;
  }
  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 72));
  ExtEnvFreeMemory(v4, a2);
}
