/*
 * XREFs of DbgkpWerFreePool @ 0x14078C400
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1405B4278 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x14078BE10 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCleanupContext @ 0x14078C108 (DbgkpWerCleanupContext.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B41E80 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
