/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140A227D0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
