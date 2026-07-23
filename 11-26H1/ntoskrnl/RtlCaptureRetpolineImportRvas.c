/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x140429D68
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x14072558C (RtlUpdateImportRelocationsInImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3E80C (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14042AF30 (RtlpImageDirectoryEntryToDataEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v10; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0;
  v10 = 0LL;
  if ( (int)RtlpImageDirectoryEntryToDataEx(a1, (__int64)&v10) >= 0 )
  {
    if ( v10 > (unsigned __int64)a1 + a3 )
      return (unsigned int)-1073741701;
    else
      *a6 = 0;
  }
  else
  {
    *a6 = 0;
  }
  return v6;
}
