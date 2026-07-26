/*
 * XREFs of _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014C6EC
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x14014C594 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_Sd @ 0x140070010 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015DE10 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall lambda_3ed15a572a362cb111cc1d3010d8268d_::operator()(unsigned int *a1, const struct _GUID *a2)
{
  int v4; // eax
  int v5; // eax
  char v7[4]; // [rsp+30h] [rbp-D0h]
  char v8[4]; // [rsp+30h] [rbp-D0h]
  KRegKey v9; // [rsp+40h] [rbp-C0h] BYREF
  KRegKey v10; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t v11[256]; // [rsp+50h] [rbp-B0h] BYREF

  netsetupBuildObjectPath(2LL, a2, *a1);
  v9.m_ptr = 0LL;
  v4 = KRegKey::Open(&v9, 1u, v11, 0LL);
  if ( v4 >= 0 )
  {
    netsetupBuildObjectPath(2LL, a2, *a1);
    v10.m_ptr = 0LL;
    v5 = KRegKey::Open(&v10, 1u, v11, 0LL);
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
    {
      ndisLoadNetworkInterfaceFromPersistedState(a2, &v9, &v10);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v5;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
        v11,
        *(_DWORD *)v8);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
      v11,
      *(_DWORD *)v7);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return 0LL;
}
