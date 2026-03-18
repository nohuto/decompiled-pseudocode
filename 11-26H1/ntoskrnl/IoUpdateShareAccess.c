/*
 * XREFs of IoUpdateShareAccess @ 0x140A7F630
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x14065EF90 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x140A7F650 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
