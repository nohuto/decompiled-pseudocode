/*
 * XREFs of ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1802D0C04
 * Callers:
 *     ?add_ViewCollectionChanged@HolographicPositioner@@UEAAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180221EF0 (-add_ViewCollectionChanged@HolographicPositioner@@UEAAJPEAU-$ITypedEventHandler@PEAVTopLevelAppV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050378 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x1801F7348 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Add(
        RTL_SRWLOCK *a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v7; // ebx
  struct IUnknown *v8; // rcx
  struct IUnknown *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  v7 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>>(
         a2,
         &v9);
  v8 = v9;
  if ( v7 >= 0 )
  {
    if ( v9 )
    {
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             a1,
             v9,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
      v8 = v9;
    }
    else
    {
      v7 = -2147024809;
    }
  }
  if ( v8 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return (unsigned int)v7;
}
