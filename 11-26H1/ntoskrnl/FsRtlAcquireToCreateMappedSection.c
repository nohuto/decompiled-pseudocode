/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x140AA5290
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1403100A0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 */

__int64 __fastcall FsRtlAcquireToCreateMappedSection(
        struct _FILE_OBJECT *a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  char v6; // di
  int v8; // edx
  volatile signed __int8 *FsContext; // rcx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v6 = a2;
  *a5 = 0;
  *a6 = 0;
  v11 = 0LL;
  LODWORD(v11) = 16;
  v8 = FsRtlAcquireFileExclusiveCommon(a1, 1, a2, a3, a4, (__int64)&v11);
  if ( v8 >= 0 )
  {
    if ( (v6 & 0x44) != 0 )
    {
      FsContext = (volatile signed __int8 *)a1->FsContext;
      if ( FsContext )
        _InterlockedOr8(FsContext + 6, 0x10u);
    }
    if ( DWORD1(v11) >= 0xC )
      *a5 = DWORD2(v11);
    if ( DWORD1(v11) >= 0x10 )
      *a6 = HIDWORD(v11);
  }
  return (unsigned int)v8;
}
