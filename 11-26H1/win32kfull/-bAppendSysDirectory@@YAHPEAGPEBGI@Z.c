/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x140103490 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x140239410 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x140254250 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x140324924 (bDeleteFlEntry.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x140110230 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, char *a2)
{
  _BYTE *v4; // rbx
  __int64 v5; // rdx
  char *v6; // r8
  _WORD *v7; // rcx
  __int16 v8; // ax
  _WORD *v9; // rax
  __int64 NtSystemRoot; // rax
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  _WORD *v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int16 v20; // r8
  _WORD *v21; // rax
  __int64 v22; // rdx
  _WORD *v23; // rax
  __int64 v24; // r8
  char *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  signed __int64 v28; // r8
  __int16 v29; // r9
  char *v30; // rax
  __int64 v31; // rdx
  _WORD *v32; // rax
  __int64 v33; // r9
  char *v34; // rcx
  __int64 v35; // r8
  signed __int64 v36; // r14
  __int16 v37; // ax
  char *v38; // rdx
  wchar_t *v40; // rax
  unsigned __int64 v41; // rdx
  _WORD *v42; // rdx
  __int64 v43; // r8
  __int64 v44; // [rsp+58h] [rbp+20h] BYREF

  v44 = Win32AllocPoolZInit(520LL, 1886221383LL);
  v4 = (_BYTE *)v44;
  if ( !v44 )
  {
    EngSetLastError(8u);
    goto LABEL_55;
  }
  if ( !wcschr((const wchar_t *)a2, 0x5Cu) )
  {
    v5 = 260LL;
    v6 = (char *)((char *)L"\\??\\" - v4);
    v7 = v4;
    do
    {
      if ( v5 == -2147483386 )
        break;
      v8 = *(_WORD *)((char *)v7 + (_QWORD)v6);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v5;
    }
    while ( v5 );
    v9 = v7 - 1;
    if ( v5 )
      v9 = v7;
    *v9 = 0;
    if ( !v5 )
      goto LABEL_46;
    NtSystemRoot = RtlGetNtSystemRoot(v7, v5, v6);
    v11 = 260LL;
    v12 = v4;
    v13 = NtSystemRoot;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v11;
    }
    while ( v11 );
    v14 = (260 - v11) & -(__int64)(v11 != 0);
    if ( !v11 )
      goto LABEL_46;
    v15 = &v4[2 * v14];
    v16 = 2147483646LL;
    v17 = 260 - v14;
    if ( v14 != 260 )
    {
      v18 = 2147483646LL;
      v19 = v13 - (_QWORD)v15;
      do
      {
        if ( !v18 )
          break;
        v20 = *(_WORD *)((char *)v15 + v19);
        if ( !v20 )
          break;
        *v15 = v20;
        --v18;
        ++v15;
        --v17;
      }
      while ( v17 );
    }
    v21 = v15 - 1;
    if ( v17 )
      v21 = v15;
    *v21 = 0;
    if ( !v17 )
      goto LABEL_46;
    v22 = 260LL;
    v23 = v4;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v22;
    }
    while ( v22 );
    v24 = (260 - v22) & -(__int64)(v22 != 0);
    if ( !v22 )
      goto LABEL_46;
    v25 = &v4[2 * v24];
    v26 = 260 - v24;
    if ( v24 != 260 )
    {
      v27 = 2147483646LL;
      v28 = (char *)L"\\fonts\\" - v25;
      do
      {
        if ( !v27 )
          break;
        v29 = *(_WORD *)&v25[v28];
        if ( !v29 )
          break;
        *(_WORD *)v25 = v29;
        --v27;
        v25 += 2;
        --v26;
      }
      while ( v26 );
    }
    v30 = v25 - 2;
    if ( v26 )
      v30 = v25;
    *(_WORD *)v30 = 0;
    if ( !v26 )
      goto LABEL_46;
    v31 = 260LL;
    v32 = v4;
    do
    {
      if ( !*v32 )
        break;
      ++v32;
      --v31;
    }
    while ( v31 );
    v33 = (260 - v31) & -(__int64)(v31 != 0);
    if ( !v31 )
      goto LABEL_46;
    v34 = &v4[2 * v33];
    v35 = 260 - v33;
    if ( v33 != 260 )
    {
      v36 = a2 - v34;
      do
      {
        if ( !v16 )
          break;
        v37 = *(_WORD *)&v34[v36];
        if ( !v37 )
          break;
        *(_WORD *)v34 = v37;
        --v16;
        v34 += 2;
        --v35;
      }
      while ( v35 );
    }
    v38 = v34 - 2;
    if ( v35 )
      v38 = v34;
    *(_WORD *)v38 = 0;
    if ( !v35 )
    {
LABEL_46:
      Win32FreePool(v4);
      return 0LL;
    }
    cCapString(a1, (const unsigned __int16 *)v4, 260);
    goto LABEL_49;
  }
  cCapString(a1, (const unsigned __int16 *)a2, 260);
  v40 = wcsstr(a1, L"%SYSTEMROOT%");
  if ( v40 )
  {
    *v40 = 92;
    v42 = v40 + 12;
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    memmove(v40 + 11, v42, 2 * v43 + 2);
    goto LABEL_49;
  }
  if ( *(_DWORD *)(a1 + 1) == 6029370
    && ((int)StringCchCopyW((unsigned __int16 *)v4, 0x104uLL, a1) < 0
     || (int)StringCchCopyW(a1, 0x104uLL, L"\\??\\") < 0
     || (int)StringCchCatW(a1, v41, (const unsigned __int16 *)v4) < 0) )
  {
LABEL_55:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v44);
    return 0LL;
  }
LABEL_49:
  Win32FreePool(v4);
  return 1LL;
}
