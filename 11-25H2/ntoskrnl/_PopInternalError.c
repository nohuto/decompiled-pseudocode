/*
 * XREFs of _PopInternalError @ 0x1405C8F30
 * Callers:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     PopCreateDumpMdl @ 0x140B4C7EC (PopCreateDumpMdl.c)
 *     PopWriteHiberPages @ 0x140B4E968 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
