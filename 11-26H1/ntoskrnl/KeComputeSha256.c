/*
 * XREFs of KeComputeSha256 @ 0x1404D2210
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14084A4C4 (ExpKdPullRemoteFileForUser.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 * Callees:
 *     SymCryptSha256 @ 0x1405558C0 (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
