/*
 * XREFs of ?Register@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAJPEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x1805992F0
 * Callers:
 *     ?RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@@Z @ 0x1800F3C24 (-RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x1801C8308 (-Unregister@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicati.c)
 *     ??$MakeAndInitialize@VApplicationViewCollectionRegistration@@V1@AEAPEAUIApplicationViewChangeListener@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewCollectionRegistration@@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x180598D6C (--$MakeAndInitialize@VApplicationViewCollectionRegistration@@V1@AEAPEAUIApplicationViewChangeLis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Register(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister((__int64)a1);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewCollectionRegistration,ApplicationViewCollectionRegistration,IApplicationViewChangeListener * &>(
         &v10,
         a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 60LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\EventRegistrationHelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 61LL;
    goto LABEL_5;
  }
  v7 = v10;
  if ( a1[1] != v10 )
  {
    v11 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v11 = a1[1];
    a1[1] = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v5;
}
