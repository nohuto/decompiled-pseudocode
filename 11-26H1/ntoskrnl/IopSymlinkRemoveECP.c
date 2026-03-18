/*
 * XREFs of IopSymlinkRemoveECP @ 0x1404728E0
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1409035A0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140A34C60 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
