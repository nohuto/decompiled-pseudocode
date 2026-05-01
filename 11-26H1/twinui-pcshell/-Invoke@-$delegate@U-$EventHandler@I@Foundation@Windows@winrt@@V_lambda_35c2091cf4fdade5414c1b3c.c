/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_35c2091cf4fdade5414c1b3ce773b39c_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18065AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D784 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_35c2091cf4fdade5414c1b3ce773b39c_>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rdi
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = a1 + 16;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1 + 16, &v5);
  if ( v5 )
    (*(void (__fastcall **)(char *, __int64 *, int *))(v3 + 8))(&v5[*(int *)(v3 + 16)], &v6, &v7);
  if ( v5 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v5);
  return 0LL;
}
