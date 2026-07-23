/*
 * XREFs of IopSymlinkRemoveECP @ 0x14046C060
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140933530 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x1409347F8 (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140A4FBC0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
