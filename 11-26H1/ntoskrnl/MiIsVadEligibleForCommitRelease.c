/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x140534C74
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiProcessCommitIntact @ 0x140445A40 (MiProcessCommitIntact.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x1403C5E14 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r10

  return (unsigned int)MiVadSupportsPrivateCommit(a1)
      && !(unsigned int)MiVadMapsLargeImage(v1)
      && (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) < 0x7FFFFFFFDLL
      && *(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)
      && (*(_DWORD *)(v3 + 48) & 2) == 0;
}
