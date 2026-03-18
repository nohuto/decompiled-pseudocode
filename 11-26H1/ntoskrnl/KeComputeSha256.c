/*
 * XREFs of KeComputeSha256 @ 0x1404D8A40
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x140845480 (ExpKdPullRemoteFileForUser.c)
 *     MiCreateSectionForDriver @ 0x140AEBC54 (MiCreateSectionForDriver.c)
 * Callees:
 *     SymCryptSha256 @ 0x140553430 (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
