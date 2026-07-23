/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403DFC80 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403E0000 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A09C8 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpKrnGetDataTableEntry @ 0x1404A4708 (LdrpKrnGetDataTableEntry.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404FEF80 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     LdrpGetResourceFileName @ 0x14061B338 (LdrpGetResourceFileName.c)
 *     LdrpMapResourceFile @ 0x14061B4E0 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14061B748 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmUnmapViewInSystemSpace @ 0x140ADFA00 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  int v7; // r13d
  unsigned __int64 v9; // rsi
  __int64 DataTableEntry; // rax
  __int64 v12; // rdx
  NTSTATUS ResourceFileName; // edi
  ULONG_PTR v14; // rsi
  ULONG v15; // edi
  const unsigned __int16 **v16; // rax
  const unsigned __int16 *v17; // r8
  __int64 v18; // rax
  int v19; // r11d
  const wchar_t *v20; // r8
  __int64 v21; // r8
  __int16 Key; // [rsp+40h] [rbp-358h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-350h] BYREF
  ULONG_PTR v24; // [rsp+50h] [rbp-348h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-340h] BYREF
  int v26; // [rsp+60h] [rbp-338h]
  __int128 v27; // [rsp+68h] [rbp-330h] BYREF
  __int64 v28; // [rsp+80h] [rbp-318h]
  unsigned __int16 v29[88]; // [rsp+90h] [rbp-308h] BYREF
  char v30; // [rsp+140h] [rbp-258h] BYREF

  v7 = LanguageId;
  MappedBase = 0LL;
  Handle = 0LL;
  v27 = 0LL;
  memset_0(v29, 0, 0xAAuLL);
  v24 = 0LL;
  if ( !DllHandle || !(_WORD)v7 || !ResourceDllBase )
    return -1073741811;
  v9 = LdrpGetFromMUIMemCache(DllHandle);
  if ( v9 == -1LL )
  {
    *ResourceDllBase = 0LL;
    return -1073020922;
  }
  if ( v9 )
  {
    *ResourceDllBase = (PVOID)v9;
    if ( ResourceOffset )
      *ResourceOffset = v24;
    v26 = 0;
    return 0;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(DllHandle);
  v28 = DataTableEntry;
  if ( !DataTableEntry )
    goto LABEL_12;
  *((_QWORD *)&v27 + 1) = &v30;
  LODWORD(v27) = 34078720;
  v15 = Flags & 0x1000000;
  if ( (Flags & 0x1000000) != 0 )
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
                           (_DWORD)DllHandle,
                           (unsigned int)&v27,
                           (unsigned int)&Handle,
                           (unsigned int)&MappedBase,
                           (__int64)&v24);
      if ( ResourceFileName >= 0 )
      {
        v9 = (unsigned __int64)MappedBase | 1;
        if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                 DllHandle,
                                 (unsigned __int64)MappedBase | 1,
                                 v21,
                                 v29,
                                 Flags) )
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
  v16 = (const unsigned __int16 **)bsearch(&Key, &off_140002450, 0x1B4uLL, 0x10uLL, CompareLangIDs);
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
    (_DWORD)DllHandle,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v7,
    1,
    ResourceFileName,
    v24);
  if ( MappedBase == (PVOID)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    *ResourceDllBase = MappedBase;
    if ( ResourceOffset )
      *ResourceOffset = v14;
    return 0;
  }
  return ResourceFileName;
}
