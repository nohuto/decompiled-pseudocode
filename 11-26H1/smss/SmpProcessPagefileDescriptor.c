/*
 * XREFs of SmpProcessPagefileDescriptor @ 0x14000BDB4
 * Callers:
 *     SmpCreateEmergencyPagingFile @ 0x14000F5A8 (SmpCreateEmergencyPagingFile.c)
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14000BB8C (SmpMakeSystemManagedPagingFileDescriptor.c)
 *     SmpValidatePagingFileSizes @ 0x14000D6D4 (SmpValidatePagingFileSizes.c)
 *     SmpCreatePagefileFromDescriptor @ 0x14000E864 (SmpCreatePagefileFromDescriptor.c)
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
