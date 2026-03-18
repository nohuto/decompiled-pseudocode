/*
 * XREFs of _PopInternalError @ 0x140600DC4
 * Callers:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     PopCreateDumpMdl @ 0x140BFA18C (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
