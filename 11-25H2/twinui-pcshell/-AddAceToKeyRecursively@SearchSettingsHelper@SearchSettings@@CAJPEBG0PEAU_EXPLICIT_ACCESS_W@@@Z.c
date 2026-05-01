/*
 * XREFs of ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803A699C
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803A73BC (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009B7B8 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1802CECD0 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEAXW4_SE_OBJECT_TYPE@@KPEAPEAX2PEAPEAU_ACL@@32@Z @ 0x18039E60C (--$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEA.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1803A4F78 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1803AE8B0 (-ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803B43B4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
        LPCWSTR lpSubKey,
        const unsigned __int16 *a2,
        struct _EXPLICIT_ACCESS_W *a3)
{
  HKEY *v5; // rax
  unsigned int Key; // eax
  HKEY *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  DWORD SecurityInfoSafeDefault; // eax
  DWORD v13; // ebx
  const char *v14; // r9
  __int64 v15; // rdx
  DWORD v16; // eax
  int v17; // eax
  int phkResult; // [rsp+20h] [rbp-49h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-39h]
  PSECURITY_DESCRIPTOR v21; // [rsp+50h] [rbp-19h] BYREF
  PACL pDacl; // [rsp+58h] [rbp-11h] BYREF
  HANDLE handle; // [rsp+60h] [rbp-9h] BYREF
  PACL OldAcl; // [rsp+68h] [rbp-1h] BYREF
  PACL *p_pDacl; // [rsp+70h] [rbp+7h] BYREF
  PACL NewAcl; // [rsp+78h] [rbp+Fh] BYREF
  char v27; // [rsp+80h] [rbp+17h]
  _OWORD v28[2]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v28[0] = 0LL;
  v28[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v28[0]) = 0;
  handle = 0LL;
  v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)&handle);
  Key = RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0x3001Fu, v5);
  if ( Key - 2 <= 1 || Key == 1168 )
  {
    v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)&handle);
    Key = RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 0, 0x60000u, 0LL, v7, 0LL);
  }
  if ( !Key )
  {
    v21 = 0LL;
    OldAcl = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v21,
      0LL);
    SecurityInfoSafeDefault = SecurityHelper::GetSecurityInfoSafe<SecurityHelper::GetSecurityInfoSafeDefaultLogger>(
                                handle,
                                v9,
                                v10,
                                v11,
                                phkResult,
                                &OldAcl,
                                lpSecurityAttributes,
                                &v21);
    if ( SecurityInfoSafeDefault )
    {
      v8 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x3CB,
             (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
             (const char *)SecurityInfoSafeDefault);
LABEL_8:
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v21);
      goto LABEL_18;
    }
    pDacl = 0LL;
    p_pDacl = &pDacl;
    NewAcl = 0LL;
    v27 = 1;
    v13 = SetEntriesInAclW(1u, a3, OldAcl, &NewAcl);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pDacl);
    if ( v13 )
    {
      v14 = (const char *)v13;
      v15 = 976LL;
    }
    else
    {
      v16 = SetSecurityInfo(handle, SE_REGISTRY_KEY, 4u, 0LL, 0LL, pDacl, 0LL);
      if ( !v16 )
      {
        v17 = SearchSettings::SearchSettingsHelper::ReplaceDescendantPermissionsWithInherited((HKEY)handle);
        v8 = v17;
        if ( v17 >= 0 )
        {
          wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
            (HLOCAL *)&pDacl,
            0LL);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v21);
          v8 = 0;
          goto LABEL_18;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D8,
          (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
          (const char *)(unsigned int)v17);
        goto LABEL_12;
      }
      v14 = (const char *)v16;
      v15 = 979LL;
    }
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v15,
           (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
           v14);
LABEL_12:
    wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
      (HLOCAL *)&pDacl,
      0LL);
    goto LABEL_8;
  }
  v8 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)0x3C6,
         (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
         (const char *)Key);
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)&handle);
  std::wstring::_Tidy_deallocate((void **)v28);
  return v8;
}
