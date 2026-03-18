/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x1404A6EE0
 * Callers:
 *     PfSnGetSectionObject @ 0x1409B9738 (PfSnGetSectionObject.c)
 *     PfpFileBuildReadSupport @ 0x140A4F6FC (PfpFileBuildReadSupport.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall PfpFileCheckAttributesForPrefetch(void *a1, int a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  result = NtQueryInformationFile(a1, &v4, &v5, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    if ( result == 259 )
      KeBugCheckEx(0x191u, 0x28D1uLL, 0LL, 0LL, 0LL);
    return (a2 & (unsigned int)v5) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
