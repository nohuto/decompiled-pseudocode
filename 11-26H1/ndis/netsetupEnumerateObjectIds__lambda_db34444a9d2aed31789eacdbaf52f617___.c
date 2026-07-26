/*
 * XREFs of netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x14014CF64
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x14014E3B4 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14014A178 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x14014B0A0 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617_()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  ULONG i; // edi
  NTSTATUS SubkeyName; // eax
  NTSTATUS v4; // esi
  unsigned int LwfById; // esi
  PCUNICODE_STRING GuidString; // [rsp+28h] [rbp-E0h] BYREF
  KRegKey Guid[3]; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t v9[256]; // [rsp+48h] [rbp-C0h] BYREF

  v0 = 0;
  Guid[0].m_ptr = 0LL;
  netsetupBuildStorePath(3u, 1u);
  v1 = KRegKey::Open(Guid, 8u, v9, 0LL);
  if ( v1 == -1073741772 )
    goto LABEL_12;
  if ( v1 )
  {
    v0 = v1;
LABEL_12:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Guid[0].m_ptr);
    return v0;
  }
  for ( i = 0; ; ++i )
  {
    GuidString = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&Guid[0].m_ptr, i, (void **)&GuidString);
    v4 = SubkeyName;
    if ( SubkeyName == -2147483622 )
      break;
    if ( SubkeyName )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
      v0 = v4;
      goto LABEL_12;
    }
    *(_OWORD *)&Guid[1].m_ptr = 0LL;
    if ( !RtlGUIDFromString(GuidString, (GUID *)&Guid[1]) )
    {
      LwfById = ndisReadLwfById((unsigned int)(v4 + 1), &Guid[1]);
      if ( LwfById )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Guid[0].m_ptr);
        return LwfById;
      }
    }
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Guid[0].m_ptr);
  return 0LL;
}
