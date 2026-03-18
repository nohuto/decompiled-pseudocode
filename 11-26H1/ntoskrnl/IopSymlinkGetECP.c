/*
 * XREFs of IopSymlinkGetECP @ 0x14048345C
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x1409041CC (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x140904710 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140A072F0 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
