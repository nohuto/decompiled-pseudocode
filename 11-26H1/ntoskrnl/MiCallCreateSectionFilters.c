/*
 * XREFs of MiCallCreateSectionFilters @ 0x14098C50C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(int *a1)
{
  int v2; // ebp
  struct _FILE_OBJECT *v3; // rsi
  int v4; // eax
  char v5; // di
  __int64 result; // rax
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // eax
  volatile signed __int8 *FsContext; // rax
  int v11; // edx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  if ( (*a1 & 1) != 0 )
    return 0LL;
  v2 = a1[7];
  v3 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v4 = a1[4];
  v12 = 0LL;
  LODWORD(v12) = 16;
  v5 = 0;
  result = FsRtlAcquireFileExclusiveCommon(v3, v4, (__int64)&v12);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x44) != 0 )
    {
      FsContext = (volatile signed __int8 *)v3->FsContext;
      if ( FsContext )
        _InterlockedOr8(FsContext + 6, 0x10u);
    }
    if ( DWORD1(v12) >= 0xC )
      v5 = BYTE8(v12);
    if ( (v5 & 6) == 0 )
      goto LABEL_7;
    v11 = *a1;
    if ( (*a1 & 0x1000000) != 0 )
    {
      FsRtlReleaseFile(v3);
      return 3221227793LL;
    }
    if ( _bittest(a1 + 4, 0x18u) )
    {
      v11 |= 0x4000u;
      *a1 = v11;
      if ( (v5 & 4) == 0 )
      {
        v11 |= 0x10000u;
        *a1 = v11;
      }
      if ( (v5 & 8) != 0 )
        goto LABEL_25;
      v11 |= 0x20000u;
    }
    else
    {
      if ( (v5 & 2) == 0 )
        goto LABEL_25;
      v11 |= 0x4000u;
    }
    *a1 = v11;
LABEL_25:
    if ( (v5 & 6) == 6 )
      *a1 = v11 | 0x8000;
LABEL_7:
    v8 = *a1;
    if ( v7 == 299 )
      v9 = v8 | 0x40;
    else
      v9 = v8 & 0xFFFFFFBF;
    *a1 = v9;
    return v7;
  }
  return result;
}
