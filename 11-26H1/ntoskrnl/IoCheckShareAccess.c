/*
 * XREFs of IoCheckShareAccess @ 0x140A359D0
 * Callers:
 *     DifIoCheckShareAccessWrapper @ 0x140659FE0 (DifIoCheckShareAccessWrapper.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x140A35A00 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (_DWORD)FileObject,
           (_DWORD)ShareAccess,
           0LL,
           Update != 0);
}
