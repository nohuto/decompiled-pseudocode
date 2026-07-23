/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1403DDCD8
 * Callers:
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140B05364 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x1403DDC10 (LdrpFindMessageInAlternateModule.c)
 *     LdrIsResItemExist @ 0x1403DF838 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404FEF80 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     LdrpResGetMappingSize @ 0x1409E6340 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x140A9807C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x140A9F048 (LdrResFallbackLangList.c)
 *     LdrpResGetResourceDirectory @ 0x140AABB84 (LdrpResGetResourceDirectory.c)
 *     LdrResGetRCConfig @ 0x140B05364 (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        ULONG64 a2,
        int a3,
        const wchar_t **a4,
        int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  unsigned __int16 *v14; // rdi
  int v15; // eax
  int v16; // esi
  PVOID v17; // rdi
  int v18; // ecx
  int MappingSize; // edi
  __int64 result; // rax
  unsigned int v21; // r12d
  int v22; // ecx
  unsigned int i; // r14d
  char v24; // r13
  LANGID *v25; // r11
  int v26; // r10d
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  ULONG64 v30; // r8
  PVOID v31; // rcx
  int v32; // eax
  _DWORD *v33; // r14
  BOOL v34; // edx
  unsigned __int16 v35; // cx
  NTSTATUS v36; // eax
  ULONG64 v37; // rdx
  int RCConfig; // eax
  __int64 v39; // r8
  const unsigned __int16 **v40; // rax
  unsigned __int64 v41; // r8
  __int64 v42; // rsi
  _WORD *v43; // r15
  const unsigned __int16 *v44; // r8
  __int64 v45; // rax
  int v46; // r11d
  LANGID v47; // [rsp+70h] [rbp-398h] BYREF
  int Key; // [rsp+78h] [rbp-390h] BYREF
  PVOID DllHandle; // [rsp+80h] [rbp-388h]
  bool v50; // [rsp+88h] [rbp-380h]
  ULONG_PTR ResourceOffset; // [rsp+90h] [rbp-378h] BYREF
  PVOID ResourceDllBase; // [rsp+98h] [rbp-370h] BYREF
  const wchar_t **v53; // [rsp+A0h] [rbp-368h]
  int v54; // [rsp+A8h] [rbp-360h]
  int v55; // [rsp+ACh] [rbp-35Ch]
  ULONG64 Size; // [rsp+B0h] [rbp-358h]
  __int64 v57; // [rsp+B8h] [rbp-350h] BYREF
  unsigned int **v58; // [rsp+C0h] [rbp-348h]
  __int64 v59; // [rsp+C8h] [rbp-340h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-330h]
  __int64 v62; // [rsp+E0h] [rbp-328h]
  __int64 *v63; // [rsp+E8h] [rbp-320h]
  __int64 v64; // [rsp+F0h] [rbp-318h]
  void *v65; // [rsp+F8h] [rbp-310h]
  _WORD v66[2]; // [rsp+100h] [rbp-308h] BYREF
  _WORD v67[262]; // [rsp+104h] [rbp-304h]
  unsigned __int16 Src[88]; // [rsp+310h] [rbp-F8h] BYREF

  v53 = a4;
  Size = a2;
  DllHandle = a1;
  v63 = a7;
  v58 = a6;
  v65 = a8;
  v64 = a9;
  ResourceDllBase = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v66[1] = 0;
  memset_0(v66, 0, 0x206uLL);
  v47 = 0;
  ResourceOffset = 0LL;
  v11 = 0;
  v54 = a3 & 0x40;
  v57 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = (unsigned __int16 *)(a4 + 2);
  v15 = a5;
  if ( a5 == 3 )
  {
    v12 = *v14;
    v11 = ((unsigned __int64)*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*a4, L"MUI");
    v50 = v11;
    v15 = 3;
  }
  v16 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v16 = a3 & 0x80;
    if ( v15 >= 1 && v15 <= 3 )
    {
      if ( v15 == 3 )
        v35 = *v14;
      else
        v35 = 0;
      if ( (a3 & 0x1000000) == 0
        && (((unsigned __int64)(*v53 - 8) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v35 & 0xF3FF) != 0
         || v35 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, Size, 0, a3, 1);
        MappingSize = RCConfig;
        if ( RCConfig < 0 )
        {
          if ( RCConfig != -1073741686 )
            return (unsigned int)MappingSize;
          v16 = v13 | 0x80000;
          v17 = DllHandle;
        }
        else
        {
          v17 = DllHandle;
          v16 = v13 | LdrIsResItemExist(DllHandle, v53, v39, 0LL);
        }
        goto LABEL_9;
      }
      a3 |= 0x10u;
      v16 = v13;
    }
  }
  v17 = DllHandle;
LABEL_9:
  v18 = 393216;
  if ( (v16 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v34 = 0;
  LOBYTE(v18) = (~(_BYTE)a3 & 0x10) != 0;
  if ( ((unsigned __int8)v18 & ((~v16 & 0x80000) != 0)) != 0 )
    v34 = (~v16 & 0x20000) != 0;
  v66[0] = 1;
  v67[0] = 0;
  if ( (v34 || a5 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v16 |= 4u;
    result = LdrResFallbackLangList(v18, v34, v12, v16, (__int64)v66);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v17, Size, (__int64)&v59);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v21 = 0;
LABEL_17:
  if ( v21 >= v66[0] )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v47 = v67[4 * v21];
  v22 = *(_DWORD *)&v67[4 * v21 + 2];
  Key = v22;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_50:
      ++v21;
      goto LABEL_17;
    }
    if ( i )
    {
      v24 = 0;
      goto LABEL_22;
    }
    if ( v22 != 9 )
      break;
    a3 |= 0x20u;
LABEL_49:
    ;
  }
  if ( (v16 & 0xA0000) != 0 || (a3 & 0x10) != 0 || !v47 || !PnPBootDriversInitialized )
  {
LABEL_48:
    v22 = Key;
    goto LABEL_49;
  }
  v24 = 1;
LABEL_22:
  if ( !v24 )
    goto LABEL_23;
  v36 = LdrLoadAlternateResourceModuleEx(DllHandle, v47, &ResourceDllBase, &ResourceOffset, v16 | 0x1000);
  MappingSize = v36;
  if ( v36 < 0 )
  {
    if ( v36 == -1073741766 || v36 == -1073741772 )
      MappingSize = -1073020927;
    goto LABEL_48;
  }
  v37 = ResourceOffset;
  if ( !ResourceOffset )
  {
    MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, 0LL);
    v37 = ResourceOffset;
  }
  if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_50;
  MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, v37, (__int64)&v60);
  if ( MappingSize < 0 )
    goto LABEL_48;
LABEL_23:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    v53[2] = (const wchar_t *)v47;
  v57 = 0LL;
  v25 = &v47;
  if ( v24 )
    v25 = 0LL;
  v26 = a3;
  if ( v24 )
  {
    v26 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v26 = a3 | 4;
  }
  v27 = &v57;
  if ( v63 )
    v27 = v63;
  v28 = v59;
  if ( v24 )
    v28 = v60;
  v29 = v61;
  if ( v24 )
    v29 = v62;
  v30 = Size;
  if ( v24 )
    v30 = ResourceOffset;
  v31 = DllHandle;
  if ( v24 )
    v31 = ResourceDllBase;
  v32 = LdrpResSearchResourceInsideDirectory(v31, 0LL, v30, v29, v28, 0LL, v53, a5, v66, v58, v27, v26, v25);
  MappingSize = v32;
  if ( v54 && v32 >= 0 && v58 && v24 )
  {
    v41 = v63 ? *v63 : v57;
    MappingSize = LdrpFindMessageInAlternateModule((__int64)ResourceDllBase, *v58, v41, *((_DWORD *)v53 + 6), 1);
    if ( MappingSize < 0 )
    {
      *v58 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_48;
  v33 = (_DWORD *)v64;
  if ( !v64 )
    return (unsigned int)MappingSize;
  if ( v47 )
  {
    LOWORD(Key) = v47;
    v40 = (const unsigned __int16 **)bsearch(&Key, &off_140002450, 0x1B4uLL, 0x10uLL, CompareLangIDs);
    if ( v40 )
    {
      v44 = *v40;
      v42 = -1LL;
      v45 = -1LL;
      do
        ++v45;
      while ( v44[v45] );
      if ( (int)StringCchCopyNW(Src, 0x56uLL, v44, v45 + 1) >= 0 && v46 )
      {
        do
          ++v42;
        while ( Src[v42] );
        goto LABEL_106;
      }
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v42) = 0;
LABEL_106:
    if ( (unsigned int)v42 < *v33 && (v43 = v65) != 0LL )
    {
      memmove(v65, Src, 2LL * (unsigned int)v42);
      *v33 = v42 + 1;
      v43[(unsigned int)v42] = 0;
    }
    else
    {
      *v33 = v42 + 1;
      MappingSize = -1073741789;
      v55 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
