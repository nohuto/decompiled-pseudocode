/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40
 * Callers:
 *     LdrIsResItemExist @ 0x180017A70 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18001B110 (LdrpAccessResourceData.c)
 *     LdrpFindMessageInAlternateModule @ 0x18001D240 (LdrpFindMessageInAlternateModule.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001D0F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 BaseOfImage,
        unsigned int *a2,
        char **a3,
        _DWORD *a4)
{
  char *v4; // r15
  bool v5; // di
  char *v6; // rbx
  char *v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned int *v10; // r13
  NTSTATUS v11; // edx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  NTSTATUS v14; // ebx
  __int64 FileSizeFromLoadAsDataTable; // rdi
  unsigned int *v16; // rbx
  unsigned int *v17; // rcx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned int v20; // r8d
  char *v21; // rsi
  _DWORD *v22; // rax
  unsigned int v23; // r10d
  unsigned int j; // r9d
  unsigned int v25; // edx
  unsigned int v26; // edx
  char *v27; // rcx
  char *v28; // rdx
  __int64 v29; // r10
  _DWORD *v30; // rdx
  unsigned int NumberOfSections; // r11d
  unsigned int i; // r8d
  unsigned int v33; // ecx
  int v34; // eax
  unsigned __int16 v35; // cx
  __int64 v36; // rbx
  char *v37; // r8
  unsigned int v38; // r10d
  unsigned int k; // r9d
  unsigned int v40; // ecx
  __int64 v41; // r10
  _DWORD *v42; // rdx
  unsigned int v43; // r11d
  unsigned int m; // r9d
  unsigned int v45; // ecx
  char *v46; // rdx
  int v47; // ecx
  PIMAGE_NT_HEADERS v49; // [rsp+60h] [rbp-B8h] BYREF
  int v50; // [rsp+68h] [rbp-B0h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD *v52; // [rsp+78h] [rbp-A0h]
  PIMAGE_NT_HEADERS v53; // [rsp+80h] [rbp-98h] BYREF
  char *v54; // [rsp+88h] [rbp-90h]
  _DWORD *v55; // [rsp+90h] [rbp-88h]
  _DWORD *v56; // [rsp+98h] [rbp-80h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-78h]
  __int128 MemoryInformation; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-60h]
  __int128 v60; // [rsp+C8h] [rbp-50h]

  v4 = (char *)BaseOfImage;
  v5 = 1;
  v6 = (char *)BaseOfImage;
  v57 = BaseOfImage;
  OutHeaders = 0LL;
  v7 = 0LL;
  v8 = BaseOfImage & 2;
  v9 = BaseOfImage & 1;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    v5 = (BaseOfImage & 1) == 0;
    v6 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v57 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = (unsigned int *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v10 = (unsigned int *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v11 = RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders);
  if ( !OutHeaders )
    goto LABEL_11;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 2 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v5 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v7 = &v6[VirtualAddress];
          v11 = 0;
        }
        else
        {
          v7 = (char *)RtlAddressInSectionTable(OutHeaders, v6, VirtualAddress);
          v47 = 0;
          if ( !v7 )
            v47 = -1073741811;
          v11 = v47;
        }
      }
      else
      {
        v11 = -1073741822;
      }
      goto LABEL_11;
    }
LABEL_82:
    v11 = -1073741811;
    goto LABEL_11;
  }
  if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) <= 2 )
    goto LABEL_82;
  v29 = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
  if ( (_DWORD)v29 )
  {
    if ( v5 || (unsigned int)v29 < OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v7 = &v6[v29];
      v11 = 0;
    }
    else
    {
      v52 = 0LL;
      v30 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
      v52 = v30;
      NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
      for ( i = 0; i < NumberOfSections; ++i )
      {
        v33 = v30[3];
        if ( (unsigned int)v29 >= v33 && (unsigned int)v29 < v30[4] + v33 )
        {
          if ( v30 )
            v7 = &v6[(unsigned int)v30[5] - (unsigned __int64)(unsigned int)v30[3] + v29];
          break;
        }
        v30 += 10;
        v52 = v30;
      }
      v34 = 0;
      if ( !v7 )
        v34 = -1073741811;
      v11 = v34;
    }
  }
  else
  {
    v11 = -1073741822;
  }
LABEL_11:
  if ( v11 < 0 )
    v7 = 0LL;
  if ( !v7 )
    return 3221225609LL;
  v14 = 0;
  FileSizeFromLoadAsDataTable = 0LL;
  v53 = 0LL;
  RtlImageNtHeaderEx(1u, v10, 0LL, &v53);
  if ( v53 )
  {
    if ( v9 )
    {
      FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v4);
      if ( !FileSizeFromLoadAsDataTable )
      {
        MemoryInformation = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v14 = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v10,
                MemoryRegionInformation,
                &MemoryInformation,
                0x30uLL,
                0LL);
        if ( v14 < 0 )
          v14 = -1073741793;
        else
          FileSizeFromLoadAsDataTable = v59;
      }
    }
    else
    {
      v35 = v53->OptionalHeader.Magic;
      if ( v35 == 267 )
      {
        FileSizeFromLoadAsDataTable = v53->OptionalHeader.SizeOfImage;
      }
      else if ( v35 == 523 )
      {
        FileSizeFromLoadAsDataTable = v53->OptionalHeader.SizeOfImage;
      }
      else
      {
        v14 = -1073741701;
      }
    }
  }
  else
  {
    v14 = -1073741701;
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
  v16 = a2;
  v17 = a2 + 4;
  if ( a2 < v10
    || v17 < a2
    || FileSizeFromLoadAsDataTable && v17 > (unsigned int *)((char *)v10 + FileSizeFromLoadAsDataTable) )
  {
    return (unsigned int)-1073741701;
  }
  v18 = 0;
  v50 = 0;
  if ( v8 || v9 )
  {
    if ( v9 )
      v18 = 1;
    v50 = v18;
    v4 = (char *)v10;
  }
  if ( v18 == 1 )
  {
    v49 = 0LL;
    RtlImageNtHeaderEx(1u, v4, 0LL, &v49);
    if ( !v49 )
      return (unsigned int)-1073741687;
    v19 = v49->OptionalHeader.Magic;
    if ( v19 == 267 )
    {
      v20 = v49->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else
    {
      if ( v19 != 523 )
        return (unsigned int)-1073741687;
      v20 = v49->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    if ( v20 )
    {
      v21 = &v4[v20 - (_QWORD)v7];
      v56 = 0LL;
      v22 = (_DWORD *)((char *)&v49->OptionalHeader.Magic + v49->FileHeader.SizeOfOptionalHeader);
      v56 = v22;
      v23 = v49->FileHeader.NumberOfSections;
      for ( j = 0; ; ++j )
      {
        if ( j >= v23 )
          return (unsigned int)-1073741687;
        v25 = v22[3];
        if ( v20 >= v25 && v20 < v22[4] + v25 )
          break;
        v22 += 10;
        v56 = v22;
      }
      if ( !v22 )
        return (unsigned int)-1073741687;
      v26 = *a2;
      if ( *a2 <= v22[2] )
        goto LABEL_40;
      v36 = (unsigned int)v22[3];
      v54 = 0LL;
      v37 = (char *)&v49->OptionalHeader + v49->FileHeader.SizeOfOptionalHeader;
      v54 = v37;
      v38 = v49->FileHeader.NumberOfSections;
      for ( k = 0; k < v38; ++k )
      {
        v40 = *((_DWORD *)v37 + 3);
        if ( v26 >= v40 && v26 < *((_DWORD *)v37 + 4) + v40 )
          goto LABEL_76;
        v37 += 40;
        v54 = v37;
      }
      v37 = 0LL;
LABEL_76:
      if ( !v37 )
        return (unsigned int)-1073741687;
      v41 = *((unsigned int *)v37 + 3);
      v55 = 0LL;
      v42 = (_DWORD *)((char *)&v49->OptionalHeader.Magic + v49->FileHeader.SizeOfOptionalHeader);
      v55 = v42;
      v43 = v49->FileHeader.NumberOfSections;
      for ( m = 0; m < v43; ++m )
      {
        v45 = v42[3];
        if ( (unsigned int)v41 >= v45 && (unsigned int)v41 < v42[4] + v45 )
        {
          if ( v42 )
          {
            v46 = &v4[(unsigned int)v42[5] - (unsigned __int64)(unsigned int)v42[3] + v41];
            goto LABEL_85;
          }
          break;
        }
        v42 += 10;
        v55 = v42;
      }
      v46 = 0LL;
LABEL_85:
      v21 = &v7[*((unsigned int *)v37 + 3) - v36 - (_QWORD)v46 + (_QWORD)v21];
      v16 = a2;
      goto LABEL_40;
    }
    return (unsigned int)-1073741687;
  }
  v21 = 0LL;
LABEL_40:
  if ( !a3 )
  {
LABEL_46:
    if ( a4 )
      *a4 = v16[1];
    return 0;
  }
  v27 = &v4[*v16 - (_QWORD)v21];
  v28 = &v27[v16[1]];
  if ( v27 >= (char *)v10
    && v28 >= v27
    && (!FileSizeFromLoadAsDataTable || v28 <= (char *)v10 + FileSizeFromLoadAsDataTable) )
  {
    *a3 = v27;
    goto LABEL_46;
  }
  return (unsigned int)-1073741701;
}
