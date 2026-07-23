/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14042B178
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140542A48 (KiLockExtendedServiceTable.c)
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     KiFatalExceptionFilter @ 0x140D08080 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID v5; // rax

  v5 = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
