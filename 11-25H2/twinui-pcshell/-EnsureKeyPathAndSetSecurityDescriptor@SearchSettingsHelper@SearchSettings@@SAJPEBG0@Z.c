/*
 * XREFs of ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1803A79F8
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803A73BC (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009B7B8 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1802CECD0 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEAXW4_SE_OBJECT_TYPE@@KPEAPEAX2PEAPEAU_ACL@@32@Z @ 0x18039E60C (--$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEA.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1803A4F78 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803B43B4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchSettings::SearchSettingsHelper::EnsureKeyPathAndSetSecurityDescriptor(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2)
{
  HKEY *v2; // rax
  unsigned int Key; // eax
  HKEY *v4; // rax
  unsigned int LastError; // ebx
  BOOL v6; // ebx
  const char *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  DWORD SecurityInfoSafeDefault; // eax
  DWORD v12; // ebx
  const char *v13; // r9
  __int64 v14; // rdx
  DWORD v15; // eax
  int phkResult; // [rsp+20h] [rbp-79h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-69h]
  PSID pSid; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR v20; // [rsp+58h] [rbp-41h] BYREF
  PACL pDacl; // [rsp+60h] [rbp-39h] BYREF
  HANDLE handle; // [rsp+68h] [rbp-31h] BYREF
  void *p_pSid; // [rsp+70h] [rbp-29h] BYREF
  PSID Sid; // [rsp+78h] [rbp-21h] BYREF
  char v25; // [rsp+80h] [rbp-19h]
  PACL OldAcl; // [rsp+88h] [rbp-11h] BYREF
  _EXPLICIT_ACCESS_W pListOfExplicitEntries; // [rsp+90h] [rbp-9h] BYREF
  _OWORD v28[2]; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v28[0] = 0LL;
  v28[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v28[0]) = 0;
  handle = 0LL;
  v2 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)&handle);
  Key = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", 0, 0x3001Fu, v2);
  if ( Key - 2 <= 1 || Key == 1168 )
  {
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)&handle);
    Key = RegCreateKeyExW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            0,
            0LL,
            0,
            0x60000u,
            0LL,
            v4,
            0LL);
  }
  if ( Key )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0xA7,
                  (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                  (const char *)Key);
  }
  else
  {
    pSid = 0LL;
    p_pSid = &pSid;
    Sid = 0LL;
    v25 = 1;
    v6 = ConvertStringSidToSidW(
           L"S-1-15-3-1024-1086922356-207614091-3724853071-841836187-4018695103-34218837-3164163255-155871754",
           &Sid);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
    if ( v6 )
    {
      memset(&pListOfExplicitEntries.grfInheritance + 1, 0, 36);
      pListOfExplicitEntries.grfAccessPermissions = 196639;
      pListOfExplicitEntries.grfAccessMode = GRANT_ACCESS;
      pListOfExplicitEntries.grfInheritance = 2;
      BuildTrusteeWithSidW(&pListOfExplicitEntries.Trustee, pSid);
      v20 = 0LL;
      OldAcl = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &v20,
        0LL);
      SecurityInfoSafeDefault = SecurityHelper::GetSecurityInfoSafe<SecurityHelper::GetSecurityInfoSafeDefaultLogger>(
                                  handle,
                                  v8,
                                  v9,
                                  v10,
                                  phkResult,
                                  &OldAcl,
                                  lpSecurityAttributes,
                                  &v20);
      if ( SecurityInfoSafeDefault )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0xB5,
                      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                      (const char *)SecurityInfoSafeDefault);
      }
      else
      {
        pDacl = 0LL;
        p_pSid = &pDacl;
        Sid = 0LL;
        v25 = 1;
        v12 = SetEntriesInAclW(1u, &pListOfExplicitEntries, OldAcl, (PACL *)&Sid);
        wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
        if ( v12 )
        {
          v13 = (const char *)v12;
          v14 = 186LL;
        }
        else
        {
          v15 = SetSecurityInfo(handle, SE_REGISTRY_KEY, 4u, 0LL, 0LL, pDacl, 0LL);
          if ( !v15 )
          {
            wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
              (HLOCAL *)&pDacl,
              0LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v20);
            wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
              &pSid,
              0LL);
            LastError = 0;
            goto LABEL_18;
          }
          v13 = (const char *)v15;
          v14 = 189LL;
        }
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)v14,
                      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                      v13);
        wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
          (HLOCAL *)&pDacl,
          0LL);
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v20);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xAB,
                    (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                    v7);
    }
    wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pSid, 0LL);
  }
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)&handle);
  std::wstring::_Tidy_deallocate((void **)v28);
  return LastError;
}
