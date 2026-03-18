/*
 * XREFs of MiRevertQuasiPte @ 0x140450200
 * Callers:
 *     MiUpdateUserMappings @ 0x140C06620 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
