/*
 * XREFs of ?RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@@Z @ 0x1800876A8
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewFilteredCollection@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Z @ 0x1801BE568 (--$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180087E6C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ?Register@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAJPEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x1805BD580 (-Register@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplication.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ApplicationViewFilteredCollection::RuntimeClassInitialize(
        ApplicationViewFilteredCollection *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewVisibilityDebouncedNotificationService *a3,
        struct IObjectCollection *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // esi
  __int64 *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-38h]
  unsigned int v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-20h]
  unsigned int v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)a2);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v15,
    (__int64)a4);
  v17 = 0;
  v18 = 0LL;
  v19 = &v15;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v17);
  v20 = v16;
  v21 = 0LL;
  v22 = &v15;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
  while ( 1 )
  {
    if ( v17 == v20 && v19 == v22 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v12 = EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Register(
              (char *)this + 112,
              a3);
      v13 = v12;
      if ( v12 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    v7 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v8 = *((_QWORD *)this + 11);
    if ( v8 == *((_QWORD *)this + 13) )
    {
      v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
             (char *)this + 80,
             v8 + 1);
      v10 = v9;
      if ( v9 < 0 )
        break;
    }
    v11 = (__int64 *)(*((_QWORD *)this + 10) + 8 * (*((_QWORD *)this + 11))++);
    if ( v11 )
    {
      *v11 = v7;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    ++v17;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v17);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
    (const char *)(unsigned int)v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  return v10;
}
