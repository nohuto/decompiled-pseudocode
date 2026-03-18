/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1405327D4
 * Callers:
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiProcessCommitIntact @ 0x14044D910 (MiProcessCommitIntact.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x1403BBFA4 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403BC004 (MiVadMapsLargeImage.c)
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
