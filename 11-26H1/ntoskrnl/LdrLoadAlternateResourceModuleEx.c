/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1403DCBD0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DAAE8 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403DCA90 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x140A9AF20 (LdrResSearchResource.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403DCE10 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A7338 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpKrnGetDataTableEntry @ 0x1404AB078 (LdrpKrnGetDataTableEntry.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1405056D0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140536920 (bsearch.c)
 *     LdrpGetResourceFileName @ 0x1406182E8 (LdrpGetResourceFileName.c)
 *     LdrpMapResourceFile @ 0x140618490 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1406186F8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmUnmapViewInSystemSpace @ 0x140AE2510 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, _QWORD *a3, __int64 *a4, int a5)
{
  int v7; // r13d
  unsigned __int64 v9; // rsi
  __int64 DataTableEntry; // rax
  __int64 v12; // rdx
  int ResourceFileName; // edi
  __int64 v14; // rsi
  int v15; // edi
  const unsigned __int16 **v16; // rax
  const unsigned __int16 *v17; // r8
  __int64 v18; // rax
  int v19; // r11d
  const wchar_t *v20; // r8
  __int64 v21; // r8
  __int16 Key; // [rsp+40h] [rbp-358h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-350h] BYREF
  __int64 v24; // [rsp+50h] [rbp-348h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-340h] BYREF
  int v26; // [rsp+60h] [rbp-338h]
  __int128 v27; // [rsp+68h] [rbp-330h] BYREF
  __int64 v28; // [rsp+80h] [rbp-318h]
  unsigned __int16 v29[88]; // [rsp+90h] [rbp-308h] BYREF
  char v30; // [rsp+140h] [rbp-258h] BYREF

  v7 = a2;
  MappedBase = 0LL;
  Handle = 0LL;
  v27 = 0LL;
  memset_0(v29, 0, 0xAAuLL);
  v24 = 0LL;
  if ( !a1 || !(_WORD)v7 || !a3 )
    return 3221225485LL;
  v9 = LdrpGetFromMUIMemCache(a1, (unsigned __int16)v7, &v24, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v24;
    v26 = 0;
    return 0LL;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  v28 = DataTableEntry;
  if ( !DataTableEntry )
    goto LABEL_12;
  *((_QWORD *)&v27 + 1) = &v30;
  LODWORD(v27) = 34078720;
  v15 = a5 & 0x1000000;
  if ( (a5 & 0x1000000) != 0 )
  {
LABEL_29:
    v20 = L".mun";
    if ( !v15 )
      v20 = L".mui";
    LOBYTE(v12) = v15 != 0;
    ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v20, v29, &v27);
    if ( ResourceFileName >= 0 )
    {
      ResourceFileName = LdrpMapResourceFile(
                           a1,
                           (unsigned int)&v27,
                           (unsigned int)&Handle,
                           (unsigned int)&MappedBase,
                           (__int64)&v24);
      if ( ResourceFileName >= 0 )
      {
        v9 = (unsigned __int64)MappedBase | 1;
        if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)MappedBase | 1, v21, v29, a5) )
        {
          MmUnmapViewInSystemSpace(MappedBase);
          ZwClose(Handle);
          Handle = 0LL;
          v9 = 0LL;
          ResourceFileName = -1073020926;
        }
      }
    }
    goto LABEL_13;
  }
  Key = v7;
  v16 = (const unsigned __int16 **)bsearch(&Key, &off_140002460, 0x1B4uLL, 0x10uLL, CompareLangIDs);
  if ( v16 )
  {
    v17 = *v16;
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    if ( (int)StringCchCopyNW(v29, 0x55uLL, v17, v18 + 1) >= 0 && v19 )
    {
      DataTableEntry = v28;
      goto LABEL_29;
    }
  }
  DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", v7);
LABEL_12:
  ResourceFileName = -1073020927;
LABEL_13:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v14 = v24;
  LdrpSetAlternateResourceModuleHandle(
    a1,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v7,
    1,
    ResourceFileName,
    v24);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v14;
    return 0;
  }
  return (unsigned int)ResourceFileName;
}
