/*
 * XREFs of MiMakeQuasiPte @ 0x140447BE0
 * Callers:
 *     MiUpdateUserMappings @ 0x140C0C830 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
