/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14040E248
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1405405C8 (KiLockExtendedServiceTable.c)
 *     KiLockServiceTable @ 0x1407134A4 (KiLockServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     KiFatalExceptionFilter @ 0x140D01CE0 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, a2, 3LL, a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
