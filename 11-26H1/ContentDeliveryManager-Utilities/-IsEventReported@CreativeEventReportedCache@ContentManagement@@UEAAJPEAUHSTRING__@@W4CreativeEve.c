/*
 * XREFs of ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180054140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18004EF28 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18004F1AC (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x180051758 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18005257C (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall ContentManagement::CreativeEventReportedCache::IsEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        bool *a4,
        bool *a5)
{
  int DoesSettingExist; // eax
  unsigned int v10; // ebx
  const WCHAR *v12; // rcx
  const unsigned __int16 *v13; // rdx
  unsigned __int16 **v14; // r9
  int v15; // eax
  const WCHAR *v16; // r8
  int CreativeEventString; // eax
  bool *v18; // r9
  __int64 v19; // rdx
  const WCHAR *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int16 v23; // [rsp+30h] [rbp-41h] BYREF
  LPCWSTR lpValue; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h]
  __int64 v26; // [rsp+48h] [rbp-29h]
  LPCWCH lpString1; // [rsp+50h] [rbp-21h] BYREF
  __int64 v28; // [rsp+58h] [rbp-19h]
  __int64 v29; // [rsp+60h] [rbp-11h]
  LPCWCH lpString2[4]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  LOBYTE(v23) = 0;
  *a5 = 0;
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v23,
                       a4);
  v10 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    return v10;
  }
  if ( (_BYTE)v23 )
  {
    WindowsGetStringRawBuffer(a2, 0LL);
    anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2);
    lpString1 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
    v12 = *(const WCHAR **)(a1 + 24);
    v28 = -1LL;
    v29 = -1LL;
    v15 = ContentManagement::GetExistingStringSettingRemoveOnFailure(v12, v13, (unsigned __int16 *)&lpString1, v14);
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v15);
LABEL_16:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      LOBYTE(v21) = 1;
      std::wstring::_Tidy(lpString2, v21, 0LL);
      return v10;
    }
    if ( lpString1 )
    {
      v16 = (const WCHAR *)lpString2;
      if ( lpString2[3] >= (LPCWCH)8 )
        v16 = lpString2[0];
      if ( CompareStringOrdinal(lpString1, -1, v16, -1, 1) == 2 )
      {
        lpValue = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
        v25 = -1LL;
        v26 = -1LL;
        CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, (HSTRING)a4, &lpValue);
        v10 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v19 = 763LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)CreativeEventString);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
          goto LABEL_16;
        }
        v20 = *(const WCHAR **)(a1 + 48);
        LOBYTE(v23) = 0;
        CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                v20,
                                lpValue,
                                &v23,
                                v18);
        v10 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v19 = 767LL;
          goto LABEL_15;
        }
        *a5 = (_BYTE)v23 != 0;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValue);
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
    LOBYTE(v22) = 1;
    std::wstring::_Tidy(lpString2, v22, 0LL);
  }
  return 0LL;
}
