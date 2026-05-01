/*
 * XREFs of ?ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z @ 0x180310CA4
 * Callers:
 *     ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004FEF8 (-ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV-$vector@U-$pair@KVString@I.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017DF48 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall BroadcastDVRComponent::ApplyGameRelatedForRelatedProcess(
        BroadcastDVRComponent *this,
        DWORD a2,
        char a3,
        DWORD a4)
{
  void *v7; // rbx
  int LargestValidResourceRequest; // eax
  int v9; // r14d
  int v10; // eax
  char v11; // al
  int v12; // r9d
  const char *v13; // r9
  HANDLE v14; // [rsp+20h] [rbp-50h] BYREF
  void *v15; // [rsp+28h] [rbp-48h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h] BYREF
  __int128 v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  RmGameModeInitializeResourceRequest(&v17);
  v15 = 0LL;
  v14 = OpenProcess(0x1000u, 0, a4);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    &v15,
    &v14);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v14);
  if ( v15 )
  {
    v14 = 0LL;
    v16 = OpenProcess(0x1000u, 0, a2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      &v14,
      &v16);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v16);
    v7 = v14;
    if ( v14 )
    {
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(&v17);
      v9 = LargestValidResourceRequest;
      if ( LargestValidResourceRequest < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x907,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
      if ( v9 >= 0 )
      {
        HIDWORD(v18) |= 7u;
        v10 = v19 | 1;
        DWORD1(v17) = 0;
        *((_QWORD *)&v17 + 1) = 0LL;
        LODWORD(v19) = v19 | 1;
        *(_QWORD *)((char *)&v18 + 4) = 0x1E00000032LL;
        if ( (a3 & 1) != 0 )
          LODWORD(v19) = v10 | 2;
        if ( (a3 & 4) != 0 )
        {
          BYTE4(v19) = 6;
        }
        else
        {
          v11 = 2;
          if ( (a3 & 8) != 0 )
            v11 = 3;
          BYTE4(v19) = v11;
        }
        v12 = RmGameModeRegisterPairedAuxiliaryProcess(v7, &v17, v15, 0LL);
        if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073740008 )
        {
          v13 = (const char *)(v12 | 0x10000000u);
          if ( (int)v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x928,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
              v13);
        }
      }
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v14);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v15);
}
