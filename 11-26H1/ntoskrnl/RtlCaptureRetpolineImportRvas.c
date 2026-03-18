/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x14040C620
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x14072096C (RtlUpdateImportRelocationsInImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3C58C (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14040E000 (RtlpImageDirectoryEntryToDataEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 *v11; // rsi
  unsigned int *v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ebp
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r15d
  unsigned int v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h]

  v21 = a2;
  v6 = 0;
  v19 = 0;
  v20 = 0LL;
  LOBYTE(a2) = 1;
  if ( (int)RtlpImageDirectoryEntryToDataEx(a1, a2, 12, (unsigned int)&v19, (__int64)&v20) >= 0 )
  {
    v11 = v20;
    if ( (unsigned __int64)v20 + v19 > a1 + a3 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v12 = a6;
      v13 = v19 >> 3;
      v14 = 4 * (v19 >> 3);
      if ( v14 > *a6 )
      {
        v6 = -1073741789;
      }
      else if ( v13 )
      {
        v16 = v13;
        do
        {
          *a5 = 0;
          v17 = *v11;
          if ( *v11 )
          {
            v18 = v17 - v21;
            if ( (unsigned __int64)(v17 - v21 + 0x80000000LL) <= 0xFFFFFFFF
              && (!a4 || (unsigned int)guard_dispatch_icall_no_overrides(v17, 0xFFFFFFFFLL)) )
            {
              *a5 = v18;
            }
          }
          ++v11;
          ++a5;
          --v16;
        }
        while ( v16 );
        v12 = a6;
      }
      *v12 = v14;
    }
  }
  else
  {
    *a6 = 0;
  }
  return v6;
}
