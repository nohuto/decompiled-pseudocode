/*
 * XREFs of ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18009B7DC
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC994 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180040F10 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18009A8A4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$GetAsString@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18009BF58 (--$GetAsString@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 *     EncodeRelativePath @ 0x18009C028 (EncodeRelativePath.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     McTemplateU0qz_EventWriteTransfer @ 0x1805DFF80 (McTemplateU0qz_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  char *v11; // rdx
  __int64 v12; // r9
  char *v13; // rax
  __int16 v14; // r8
  char *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int16 *i; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  WCHAR *v20; // rax
  BYTE *v21; // r15
  const struct std::nothrow_t *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rbx
  unsigned __int64 v31; // rcx
  unsigned __int16 *v32; // rax
  __int64 v33; // rcx
  int As; // eax
  LPWSTR lpDestStr; // [rsp+20h] [rbp-E0h]
  BYTE pbHash[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG pulRet; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int16 *v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  LPVOID pv; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  PROPERTYKEY v47; // [rsp+A0h] [rbp-60h] BYREF
  LPCWSTR lpSrcStr[2]; // [rsp+C0h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+D0h] [rbp-30h] BYREF
  GUID v50; // [rsp+E0h] [rbp-20h]
  GUID v51; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v52[264]; // [rsp+100h] [rbp+0h] BYREF

  *a3 = 0;
  pulRet = 0;
  LOWORD(pvar[0]) = 0;
  v47.fmtid = (GUID)PKEY_Winx_Hash;
  v47.pid = 2;
  Error = (*(__int64 (__fastcall **)(_QWORD, PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)a2 + 40LL))(
            *(_QWORD *)a2,
            &v47,
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
  v42 = 0LL;
  v43 = 0LL;
  if ( Error >= 0 )
  {
    v42 = -1LL;
    v43 = -1LL;
    pv = 0LL;
    LOWORD(pvar[0]) = 0;
    v47 = PKEY_Link_TargetParsingPath;
    Error = (*(__int64 (__fastcall **)(_QWORD, PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)a2 + 40LL))(
              *(_QWORD *)a2,
              &v47,
              pvar);
    if ( Error >= 0 )
    {
      if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) == 31 && pvar[1] )
        {
          pv = pvar[1];
          *(_OWORD *)pvar = 0LL;
          *(_QWORD *)&v50.Data1 = 0LL;
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
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( Error >= 0 )
  {
    *(GUID *)pvar = FOLDERID_ProgramFiles;
    v50 = FOLDERID_System;
    v51 = FOLDERID_Windows;
    EncodeRelativePath(v52, (LPCWSTR)pv);
    Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v44,
              (__int64)v52,
              0xFFFFFFFFFFFFFFFFuLL);
    v6 = v44;
    if ( Error >= 0 && (!v44 || !*v44) )
    {
      Error = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                (LPVOID *)&v44,
                (__int64 *)&pv);
      v6 = v44;
    }
  }
  v7 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( Error >= 0 )
  {
    v39 = -1LL;
    v40 = -1LL;
    v47 = PKEY_Link_Arguments;
    As = CPropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(a2, &v47, &v38);
    Error = As;
    if ( As == -2147023728 || As >= 0 )
    {
      if ( v38 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( v38[v33] );
      }
      else
      {
        v33 = 0LL;
      }
      if ( v45 == -1 )
      {
        if ( v6 )
        {
          v25 = -1LL;
          do
            ++v25;
          while ( v6[v25] );
          v45 = v25;
        }
        else
        {
          v45 = 0LL;
        }
      }
      v26 = -1LL;
      do
        ++v26;
      while ( *((_WORD *)pv + v26) );
      v27 = v33 + v45 + v26 + 61;
      lpSrcStr[0] = 0LL;
      lpSrcStr[1] = 0LL;
      CoTaskMemFree(0LL);
      Error = _AllocStringWorker<CTCoAllocPolicy>(v29, v28, 0LL, v27, (__int64)lpDestStr, lpSrcStr);
      CoTaskMemFree(0LL);
      v30 = (unsigned __int16 *)lpSrcStr[0];
      if ( Error >= 0 )
      {
        if ( !v6 || !*v6 || (Error = StringCchCopyW((unsigned __int16 *)lpSrcStr[0], v27, v6), Error >= 0) )
        {
          if ( !v38 || (Error = StringCchCatW(v30, v27, v38), Error >= 0) )
          {
            if ( v27 - 1 > 0x7FFFFFFE )
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
              Error = v31 == 0 ? 0x80070057 : 0;
              if ( v31 )
                v9 = v27 - v31;
              else
                v9 = 0LL;
              if ( v31 )
              {
                v10 = v27 - v9;
                v11 = (char *)&v30[v9];
                if ( v27 != v9 )
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
                Error = v10 == 0 ? 0x8007007A : 0;
              }
            }
          }
        }
      }
      *(_DWORD *)pbHash = 0;
      if ( Error >= 0 )
      {
        if ( v30 && v27 <= 0x7FFFFFFF )
        {
          v16 = v27;
          for ( i = v30; v16; --v16 )
          {
            if ( !*i )
              break;
            ++i;
          }
          Error = v16 == 0 ? 0x80070057 : 0;
          if ( v16 )
            v18 = v27 - v16;
          else
            v18 = 0LL;
          if ( v16 )
          {
            v19 = 2 * (v18 + 1);
            if ( !is_mul_ok(v18 + 1, 2uLL) )
              v19 = -1LL;
            v20 = (WCHAR *)operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
            v21 = (BYTE *)v20;
            if ( v20 )
            {
              if ( LCMapStringEx(&LocaleName, 0x100u, v30, v18 + 1, v20, v18 + 1, 0LL, 0LL, 0LL)
                || (Error = ResultFromKnownLastError(), Error >= 0) )
              {
                Error = HashData(v21, 2 * v18, pbHash, 4u);
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
    v7 = v38;
  }
  if ( v7 )
  {
    CoTaskMemFree(v7);
    v38 = 0LL;
  }
  v39 = 0LL;
  v40 = 0LL;
  if ( v6 )
    CoTaskMemFree(v6);
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)Error;
}
