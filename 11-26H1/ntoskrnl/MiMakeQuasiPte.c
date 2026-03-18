/*
 * XREFs of MiMakeQuasiPte @ 0x14044FAB0
 * Callers:
 *     MiUpdateUserMappings @ 0x140C06620 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
