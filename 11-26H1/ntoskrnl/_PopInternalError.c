/*
 * XREFs of _PopInternalError @ 0x140603874
 * Callers:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     PopCreateDumpMdl @ 0x140C0018C (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
