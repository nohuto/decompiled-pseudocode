/*
 * XREFs of IoUpdateShareAccess @ 0x140A854A0
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x140662B70 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x140A854C0 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
