/*
 * XREFs of DpSaveMemoryForHotUpdateCB @ 0x140251E20
 * Callers:
 *     DpiKsrDoKsrSave @ 0x140252278 (DpiKsrDoKsrSave.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DpSaveMemoryForHotUpdateCB(__int64 a1, int *a2)
{
  unsigned int v2; // eax
  void *v3; // rbp
  __int64 v4; // r8
  int v5; // esi
  void *v6; // r12
  int v7; // r9d
  char v9; // r15
  struct _MDL *v11; // rax
  struct _MDL *v12; // rdi
  int v13; // edx
  int v14; // ecx
  __int64 result; // rax
  int v16; // r9d
  struct _MDL *PagesForMdl; // rax
  PVOID v18; // rax
  ULONG v19; // esi
  __int64 Pool2; // rax
  GUID *v21; // rax
  GUID v22; // xmm0
  __int64 v23; // r9
  MEMORY_CACHING_TYPE CacheType; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+34h] [rbp-54h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  GUID v27; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v25 = 0;
  v7 = 0;
  v9 = 1;
  if ( v2 )
  {
    v3 = (void *)*((_QWORD *)a2 + 1);
    v7 = 1;
    v4 = v2;
    v25 = v2;
  }
  v11 = (struct _MDL *)*((_QWORD *)a2 + 2);
  v12 = 0LL;
  v13 = v7 + 1;
  if ( v11 )
    v12 = v11;
  else
    v13 = v7;
  v14 = v13 + 1;
  if ( !*((_QWORD *)a2 + 4) )
    v14 = v13;
  if ( v14 != 1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 248;
    return 3221225485LL;
  }
  v16 = a2[6];
  if ( !v16 )
  {
    v9 = 0;
    if ( !v12 )
    {
LABEL_27:
      v27 = 0LL;
      if ( a1 )
      {
        v21 = *(GUID **)(a1 + 64);
        if ( v9 )
          v22 = v21[308];
        else
          v22 = v21[309];
      }
      else
      {
        v22 = GUID_DXGK_KSR_MEMORY;
      }
      v27 = v22;
      if ( v3 )
      {
        v23 = *((_QWORD *)a2 + 6);
        CacheType = a2[10];
        v26 = 0LL;
        v5 = KsrPersistMemoryWithMetadata(&v27, v3, v4, v23, CacheType, &v26);
        if ( v5 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 360;
        }
        goto LABEL_35;
      }
      goto LABEL_37;
    }
LABEL_20:
    v19 = v12->ByteCount >> 12;
    if ( !v19 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 303;
      return 3221225485LL;
    }
    Pool2 = ExAllocatePool2(256LL, 8LL * v19, 1953656900LL);
    v3 = (void *)Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(2LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 312;
      return result;
    }
    v5 = KsrMdlToMemoryRuns(v12, Pool2, v19, &v25);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 321;
      goto LABEL_35;
    }
    v4 = v25;
    goto LABEL_27;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v16 + 4095) & 0xFFFFF000, MmCached, 0x24u);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
  {
    v5 = -1073741670;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 271;
    goto LABEL_16;
  }
  v18 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v6 = v18;
  if ( v18 )
  {
    memmove(v18, *((const void **)a2 + 4), (unsigned int)a2[6]);
    goto LABEL_20;
  }
  v5 = -1073741670;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 287;
LABEL_16:
  if ( v3 )
  {
LABEL_35:
    if ( !*a2 )
      ExFreePoolWithTag(v3, 0);
  }
LABEL_37:
  if ( v12 )
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      MmUnmapLockedPages(v6, v12);
      ExFreePoolWithTag(v12, 0);
    }
  }
  return (unsigned int)v5;
}
