/*
 * XREFs of ndisReadNicBindProperties @ 0x14014EC40
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x14014E098 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ndisBlowStringListIntoAtoms @ 0x14014DEEC (ndisBlowStringListIntoAtoms.c)
 *     ndisReplaceBindTokens @ 0x14014EF58 (ndisReplaceBindTokens.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisReadNicBindProperties(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  unsigned int v5; // edi
  unsigned int v7; // ebx
  KRegKey v8; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey *v9; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v10[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *a1;
  v8.m_ptr = 0LL;
  *(_OWORD *)a2 = v2;
  netsetupBuildObjectPath(2LL, a1, 0LL);
  v5 = KRegKey::Open(&v8, 1u, v10, 0LL);
  if ( v5 == -1073741772 )
  {
    *(_DWORD *)(a2 + 64) = 1;
    netsetupBuildObjectPath(2LL, a1, 1LL);
    v5 = KRegKey::Open(&v8, 1u, v10, 0LL);
  }
  if ( v5
    || (v9 = &v8,
        (v5 = ndisBlowStringListIntoAtoms(
                (NetSetupPropertyBag *)&v9,
                (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_UpperRange,
                a2 + 16)) != 0)
    || (v5 = ndisBlowStringListIntoAtoms(
               (NetSetupPropertyBag *)&v9,
               (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_UpperExclude,
               a2 + 32)) != 0
    || (v5 = ndisBlowStringListIntoAtoms(
               (NetSetupPropertyBag *)&v9,
               (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_LowerRange,
               a2 + 48)) != 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8.m_ptr);
    return v5;
  }
  else
  {
    v7 = ndisReplaceBindTokens(a2, &v9);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8.m_ptr);
    return v7;
  }
}
