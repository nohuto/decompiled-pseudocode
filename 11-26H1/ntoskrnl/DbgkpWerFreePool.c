/*
 * XREFs of DbgkpWerFreePool @ 0x14078EF30
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1405B6A88 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x14078E940 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCleanupContext @ 0x14078EC38 (DbgkpWerCleanupContext.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
