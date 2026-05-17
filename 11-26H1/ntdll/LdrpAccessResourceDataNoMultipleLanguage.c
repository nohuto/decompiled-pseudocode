/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0
 * Callers:
 *     LdrIsResItemExist @ 0x18002C970 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18002FFB0 (LdrpAccessResourceData.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800320E0 (LdrpFindMessageInAlternateModule.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180031F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  unsigned __int64 v4; // r15
  bool v5; // di
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  int v11; // edx
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // ebx
  __int64 FileSizeFromLoadAsDataTable; // rdi
  unsigned int *v16; // rbx
  unsigned int *v17; // rcx
  int v18; // eax
  __int16 v19; // ax
  unsigned int v20; // r8d
  unsigned __int64 v21; // rsi
  _DWORD *v22; // rax
  unsigned int v23; // r10d
  unsigned int j; // r9d
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r10
  _DWORD *v30; // rdx
  unsigned int v31; // r11d
  unsigned int i; // r8d
  unsigned int v33; // ecx
  int v34; // eax
  __int16 v35; // cx
  __int64 v36; // rbx
  __int64 v37; // r8
  unsigned int v38; // r10d
  unsigned int k; // r9d
  unsigned int v40; // ecx
  __int64 v41; // r10
  _DWORD *v42; // rdx
  unsigned int v43; // r11d
  unsigned int m; // r9d
  unsigned int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v49; // [rsp+60h] [rbp-B8h] BYREF
  int v50; // [rsp+68h] [rbp-B0h]
  __int64 v51; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD *v52; // [rsp+78h] [rbp-A0h]
  __int64 v53; // [rsp+80h] [rbp-98h] BYREF
  __int64 v54; // [rsp+88h] [rbp-90h]
  _DWORD *v55; // [rsp+90h] [rbp-88h]
  _DWORD *v56; // [rsp+98h] [rbp-80h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-78h]
  __int128 v58; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-60h]
  __int128 v60; // [rsp+C8h] [rbp-50h]

  v4 = a1;
  v5 = 1;
  v6 = a1;
  v57 = a1;
  v51 = 0LL;
  v7 = 0LL;
  v8 = a1 & 2;
  v9 = a1 & 1;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    v5 = (a1 & 1) == 0;
    v6 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v57 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = RtlImageNtHeaderEx(1LL, v6, 0LL, &v51);
  if ( !v51 )
    goto LABEL_11;
  v12 = *(_WORD *)(v51 + 24);
  if ( v12 != 267 )
  {
    if ( v12 == 523 && *(_DWORD *)(v51 + 132) > 2u )
    {
      v13 = *(unsigned int *)(v51 + 152);
      if ( (_DWORD)v13 )
      {
        if ( v5 || (unsigned int)v13 < *(_DWORD *)(v51 + 84) )
        {
          v7 = v6 + v13;
          v11 = 0;
        }
        else
        {
          v7 = RtlAddressInSectionTable(v51, v6, (unsigned int)v13);
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
  if ( *(_DWORD *)(v51 + 116) <= 2u )
    goto LABEL_82;
  v29 = *(unsigned int *)(v51 + 136);
  if ( (_DWORD)v29 )
  {
    if ( v5 || (unsigned int)v29 < *(_DWORD *)(v51 + 84) )
    {
      v7 = v6 + v29;
      v11 = 0;
    }
    else
    {
      v52 = 0LL;
      v30 = (_DWORD *)(v51 + *(unsigned __int16 *)(v51 + 20) + 24LL);
      v52 = v30;
      v31 = *(unsigned __int16 *)(v51 + 6);
      for ( i = 0; i < v31; ++i )
      {
        v33 = v30[3];
        if ( (unsigned int)v29 >= v33 && (unsigned int)v29 < v30[4] + v33 )
        {
          if ( v30 )
            v7 = v29 + v6 + (unsigned int)v30[5] - (unsigned __int64)(unsigned int)v30[3];
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
  RtlImageNtHeaderEx(1LL, v10, 0LL, &v53);
  if ( v53 )
  {
    if ( v9 )
    {
      FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v4);
      if ( !FileSizeFromLoadAsDataTable )
      {
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v14 = ZwQueryVirtualMemory(-1LL, v10, 3LL, &v58, 48LL, 0LL);
        if ( v14 < 0 )
          v14 = -1073741793;
        else
          FileSizeFromLoadAsDataTable = v59;
      }
    }
    else
    {
      v35 = *(_WORD *)(v53 + 24);
      if ( v35 == 267 )
      {
        FileSizeFromLoadAsDataTable = *(unsigned int *)(v53 + 80);
      }
      else if ( v35 == 523 )
      {
        FileSizeFromLoadAsDataTable = *(unsigned int *)(v53 + 80);
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
  if ( (unsigned __int64)a2 < v10
    || v17 < a2
    || FileSizeFromLoadAsDataTable && (unsigned __int64)v17 > FileSizeFromLoadAsDataTable + v10 )
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
    v4 = v10;
  }
  if ( v18 == 1 )
  {
    v49 = 0LL;
    RtlImageNtHeaderEx(1LL, v4, 0LL, &v49);
    if ( !v49 )
      return (unsigned int)-1073741687;
    v19 = *(_WORD *)(v49 + 24);
    if ( v19 == 267 )
    {
      v20 = *(_DWORD *)(v49 + 136);
    }
    else
    {
      if ( v19 != 523 )
        return (unsigned int)-1073741687;
      v20 = *(_DWORD *)(v49 + 152);
    }
    if ( v20 )
    {
      v21 = v4 + v20 - v7;
      v56 = 0LL;
      v22 = (_DWORD *)(v49 + *(unsigned __int16 *)(v49 + 20) + 24LL);
      v56 = v22;
      v23 = *(unsigned __int16 *)(v49 + 6);
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
      v37 = v49 + *(unsigned __int16 *)(v49 + 20) + 24LL;
      v54 = v37;
      v38 = *(unsigned __int16 *)(v49 + 6);
      for ( k = 0; k < v38; ++k )
      {
        v40 = *(_DWORD *)(v37 + 12);
        if ( v26 >= v40 && v26 < *(_DWORD *)(v37 + 16) + v40 )
          goto LABEL_76;
        v37 += 40LL;
        v54 = v37;
      }
      v37 = 0LL;
LABEL_76:
      if ( !v37 )
        return (unsigned int)-1073741687;
      v41 = *(unsigned int *)(v37 + 12);
      v55 = 0LL;
      v42 = (_DWORD *)(v49 + *(unsigned __int16 *)(v49 + 20) + 24LL);
      v55 = v42;
      v43 = *(unsigned __int16 *)(v49 + 6);
      for ( m = 0; m < v43; ++m )
      {
        v45 = v42[3];
        if ( (unsigned int)v41 >= v45 && (unsigned int)v41 < v42[4] + v45 )
        {
          if ( v42 )
          {
            v46 = v41 + v4 + (unsigned int)v42[5] - (unsigned __int64)(unsigned int)v42[3];
            goto LABEL_85;
          }
          break;
        }
        v42 += 10;
        v55 = v42;
      }
      v46 = 0LL;
LABEL_85:
      v21 += v7 + *(unsigned int *)(v37 + 12) - v36 - v46;
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
  v27 = v4 + *v16 - v21;
  v28 = v27 + v16[1];
  if ( v27 >= v10 && v28 >= v27 && (!FileSizeFromLoadAsDataTable || v28 <= FileSizeFromLoadAsDataTable + v10) )
  {
    *a3 = v27;
    goto LABEL_46;
  }
  return (unsigned int)-1073741701;
}
