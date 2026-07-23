/*
 * XREFs of MiRevertQuasiPte @ 0x140448330
 * Callers:
 *     MiUpdateUserMappings @ 0x140C0C830 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
