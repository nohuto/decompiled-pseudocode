/*
 * XREFs of ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1800AA594
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x180601530 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800AABD4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800AAF34 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??$GetAsString@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1800AB084 (--$GetAsString@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 *     EncodeRelativePath @ 0x1800AB154 (EncodeRelativePath.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800EC0C0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     McTemplateU0qz_EventWriteTransfer @ 0x180604A94 (McTemplateU0qz_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CLauncherTipContextMenu::_CheckLinkHash(
        CLauncherTipContextMenu *this,
        const struct CPropertyStoreHelper *a2,
        unsigned int *a3)
{
  signed int Error; // edi
  unsigned __int16 *v6; // r14
  unsigned __int16 *v7; // rcx
  signed __int64 v9; // r8
  char *v10; // rcx
  char *v11; // rdx
  __int64 v12; // r9
  char *v13; // rax
  __int16 v14; // r8
  char *v15; // rax
  char *v16; // rcx
  unsigned __int16 *i; // rax
  char *v18; // rsi
  unsigned __int64 v19; // rax
  WCHAR *v20; // rax
  BYTE *v21; // r15
  const struct std::nothrow_t *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // rsi
  int v28; // edx
  int v29; // ecx
  unsigned __int16 *v30; // rbx
  char *v31; // rcx
  unsigned __int16 *v32; // rax
  __int64 v33; // rdx
  int As; // eax
  int lpDestStr; // [rsp+20h] [rbp-E0h]
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  BYTE pbHash[4]; // [rsp+68h] [rbp-98h] BYREF
  ULONG pulRet; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int16 *v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  PROPERTYKEY v46; // [rsp+A0h] [rbp-60h] BYREF
  LPCWSTR lpSrcStr[2]; // [rsp+C0h] [rbp-40h] BYREF
  GUID v48; // [rsp+D0h] [rbp-30h]
  GUID v49; // [rsp+E0h] [rbp-20h]
  GUID v50; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v51[264]; // [rsp+100h] [rbp+0h] BYREF

  *a3 = 0;
  pulRet = 0;
  LOWORD(pvar[0]) = 0;
  v46.fmtid = (GUID)PKEY_Winx_Hash;
  v46.pid = 2;
  Error = (*(__int64 (__fastcall **)(_QWORD, PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)a2 + 40LL))(
            *(_QWORD *)a2,
            &v46,
            pvar);
  if ( Error >= 0 )
  {
    if ( LOWORD(pvar[0]) )
      Error = PropVariantToUInt32(pvar, &pulRet);
    else
      Error = -2147023728;
  }
  PropVariantClear(pvar);
  pv = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( Error >= 0 )
  {
    v44 = -1LL;
    v45 = -1LL;
    pv = 0LL;
    LOWORD(pvar[0]) = 0;
    v46 = PKEY_Link_TargetParsingPath;
    Error = (*(__int64 (__fastcall **)(_QWORD, PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)a2 + 40LL))(
              *(_QWORD *)a2,
              &v46,
              pvar);
    if ( Error >= 0 )
    {
      if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) == 31 && pvar[1] )
        {
          pv = pvar[1];
          *(_OWORD *)pvar = 0LL;
          v37 = 0LL;
          Error = 0;
        }
        else
        {
          pv = 0LL;
          Error = PropVariantToStringAlloc(pvar, (PWSTR *)&pv);
        }
      }
      else
      {
        Error = -2147023728;
      }
    }
    PropVariantClear(pvar);
  }
  v6 = 0LL;
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  v37 = 0LL;
  if ( Error >= 0 )
  {
    v48 = FOLDERID_ProgramFiles;
    v49 = FOLDERID_System;
    v50 = FOLDERID_Windows;
    EncodeRelativePath(v51, (LPCWSTR)pv);
    Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)pvar,
              (__int64)v51,
              0xFFFFFFFFFFFFFFFFuLL);
    v6 = (unsigned __int16 *)pvar[0];
    if ( Error >= 0 && (!pvar[0] || !*(_WORD *)pvar[0]) )
    {
      Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(pvar, &pv);
      v6 = (unsigned __int16 *)pvar[0];
    }
  }
  v7 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( Error >= 0 )
  {
    v41 = -1LL;
    v42 = -1LL;
    v46 = PKEY_Link_Arguments;
    As = CPropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(a2, &v46, &v40);
    Error = As;
    if ( As == -2147023728 || As >= 0 )
    {
      if ( v40 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( v40[v33] );
      }
      else
      {
        v33 = 0LL;
      }
      if ( pvar[1] == (PROPVARIANT)-1LL )
      {
        if ( v6 )
        {
          v25 = -1LL;
          do
            ++v25;
          while ( v6[v25] );
          pvar[1] = (PROPVARIANT)v25;
        }
        else
        {
          pvar[1] = 0LL;
        }
      }
      v26 = -1LL;
      do
        ++v26;
      while ( *((_WORD *)pv + v26) );
      v27 = (char *)pvar[1] + v26 + v33 + 61;
      lpSrcStr[0] = 0LL;
      lpSrcStr[1] = 0LL;
      CoTaskMemFree(0LL);
      Error = _AllocStringWorker<CTCoAllocPolicy>(v29, v28, 0, (_DWORD)v27, lpDestStr, (__int64)lpSrcStr);
      CoTaskMemFree(0LL);
      v30 = (unsigned __int16 *)lpSrcStr[0];
      if ( Error >= 0 )
      {
        if ( !v6
          || !*v6
          || (Error = StringCchCopyW((unsigned __int16 *)lpSrcStr[0], (unsigned __int64)v27, v6), Error >= 0) )
        {
          if ( !v40 || (Error = StringCchCatW(v30, (unsigned __int64)v27, v40), Error >= 0) )
          {
            if ( (unsigned __int64)(v27 - 1) > 0x7FFFFFFE )
            {
              Error = -2147024809;
            }
            else
            {
              v31 = v27;
              v32 = v30;
              do
              {
                if ( !*v32 )
                  break;
                ++v32;
                --v31;
              }
              while ( v31 );
              Error = v31 == 0LL ? 0x80070057 : 0;
              if ( v31 )
                v9 = v27 - v31;
              else
                v9 = 0LL;
              if ( v31 )
              {
                v10 = &v27[-v9];
                v11 = (char *)&v30[v9];
                if ( v27 != (char *)v9 )
                {
                  v12 = 2147483646LL;
                  v13 = (char *)((char *)L"Do not prehash links.  This should only be done by the user." - v11);
                  do
                  {
                    if ( !v12 )
                      break;
                    v14 = *(_WORD *)&v13[(_QWORD)v11];
                    if ( !v14 )
                      break;
                    *(_WORD *)v11 = v14;
                    v11 += 2;
                    --v12;
                    --v10;
                  }
                  while ( v10 );
                }
                v15 = v11 - 2;
                if ( v10 )
                  v15 = v11;
                *(_WORD *)v15 = 0;
                Error = v10 == 0LL ? 0x8007007A : 0;
              }
            }
          }
        }
      }
      *(_DWORD *)pbHash = 0;
      if ( Error >= 0 )
      {
        if ( v30 && (unsigned __int64)v27 <= 0x7FFFFFFF )
        {
          v16 = v27;
          for ( i = v30; v16; --v16 )
          {
            if ( !*i )
              break;
            ++i;
          }
          Error = v16 == 0LL ? 0x80070057 : 0;
          if ( v16 )
            v18 = (char *)(v27 - v16);
          else
            v18 = 0LL;
          if ( v16 )
          {
            v19 = 2LL * (_QWORD)(v18 + 1);
            if ( !is_mul_ok((unsigned __int64)(v18 + 1), 2uLL) )
              v19 = -1LL;
            v20 = (WCHAR *)operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
            v21 = (BYTE *)v20;
            if ( v20 )
            {
              if ( LCMapStringEx(&pvData, 0x100u, v30, (_DWORD)v18 + 1, v20, (_DWORD)v18 + 1, 0LL, 0LL, 0LL)
                || (Error = ResultFromKnownLastError(), Error >= 0) )
              {
                Error = HashData(v21, 2 * (_DWORD)v18, pbHash, 4u);
              }
              operator delete(v21, v22);
              if ( Error >= 0 )
              {
                if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
                  McTemplateU0qz_EventWriteTransfer(v24, v23, *(unsigned int *)pbHash, v30);
                if ( pulRet == *(_DWORD *)pbHash )
                {
                  Error = 0;
                  *a3 = pulRet;
                }
                else
                {
                  Error = -2147467259;
                }
              }
            }
            else
            {
              Error = -2147024882;
            }
          }
        }
        else
        {
          Error = -2147024809;
        }
      }
      CoTaskMemFree(v30);
    }
    v7 = v40;
  }
  if ( v7 )
  {
    CoTaskMemFree(v7);
    v40 = 0LL;
  }
  v41 = 0LL;
  v42 = 0LL;
  if ( v6 )
    CoTaskMemFree(v6);
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)Error;
}
