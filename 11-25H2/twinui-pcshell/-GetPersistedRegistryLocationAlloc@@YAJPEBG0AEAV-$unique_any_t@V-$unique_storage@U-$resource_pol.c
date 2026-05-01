/*
 * XREFs of ?GetPersistedRegistryLocationAlloc@@YAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1806A3880
 * Callers:
 *     ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x1806A3B0C (-GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800ED39C (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

__int64 GetPersistedRegistryLocationAlloc()
{
  int v0; // eax
  unsigned int v1; // ebx
  int v3[2]; // [rsp+20h] [rbp-A8h] BYREF
  const wchar_t *v4; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v5; // [rsp+30h] [rbp-98h]
  _BYTE v6[8]; // [rsp+40h] [rbp-88h] BYREF
  void **v7; // [rsp+48h] [rbp-80h] BYREF
  __int128 v8; // [rsp+50h] [rbp-78h]
  void ***v9; // [rsp+B0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SyncRootManager";
  *(_QWORD *)v3 = L"FESyncRootManager";
  *(_QWORD *)&v5 = v3;
  *((_QWORD *)&v5 + 1) = &v4;
  v7 = &wistd::__function::__func<_lambda_0e39b4e02d07fc3330b16054b36d48cc_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v8 = v5;
  v9 = &v7;
  v0 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &qword_18089A330,
         (__int64)v6);
  v1 = v0;
  if ( v0 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
    (const char *)(unsigned int)v0);
  return v1;
}
