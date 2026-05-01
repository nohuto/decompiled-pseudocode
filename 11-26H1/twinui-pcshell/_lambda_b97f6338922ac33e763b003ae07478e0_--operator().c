/*
 * XREFs of _lambda_b97f6338922ac33e763b003ae07478e0_::operator() @ 0x18051460C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::Run @ 0x180514CE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V?$ComPtr@UITabletModePositionerManagerNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180514440 (--0Iterator@-$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V-$ComPtr@UITabl.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V?$ComPtr@UITabletModePositionerManagerNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1805147A8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_b97f6338922ac33e763b003ae07478e0_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  v6 = *a1;
  v2 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::Iterator(
    (__int64)&v8,
    (__int64)&v6,
    0);
  details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::Iterator(
    (__int64)&v10,
    (__int64)&v6,
    v7);
  while ( v8 != v10 || v9[1] != v11[1] )
  {
    v4 = v9[0];
    v13 = v9[0];
    if ( v9[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 8LL))(v9[0]);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1[2], a1[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    ++v8;
    details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::GetCurrentObject(&v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
}
