/*
 * XREFs of SmpProcessPagefileDescriptor @ 0x14000D0D4
 * Callers:
 *     SmpCreateEmergencyPagingFile @ 0x14000F94C (SmpCreateEmergencyPagingFile.c)
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14000CEB0 (SmpMakeSystemManagedPagingFileDescriptor.c)
 *     SmpValidatePagingFileSizes @ 0x14000D970 (SmpValidatePagingFileSizes.c)
 *     SmpCreatePagefileFromDescriptor @ 0x14000EC28 (SmpCreatePagefileFromDescriptor.c)
 */

__int64 __fastcall SmpProcessPagefileDescriptor(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    SmpMakeSystemManagedPagingFileDescriptor(a1);
  SmpValidatePagingFileSizes(a1);
  if ( (*(_BYTE *)(a1 + 92) & 4) == 0 )
    return SmpCreatePagefileFromDescriptor(a1, 1LL);
  result = SmpCreatePagefileFromDescriptor(v2, 0LL);
  if ( (int)result < 0 )
    return SmpCreatePagefileFromDescriptor(a1, 1LL);
  return result;
}
