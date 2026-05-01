/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x18051F250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x18051E9D0 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x18051F514 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052CB70 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeViewManager::CreateWindowArrangementViewForDrag(
        TabletModeViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  IUnknown *v6; // rdi
  unsigned int v7; // ebx
  const struct _GUID *v8; // rcx
  int Instance; // eax
  int AppLayoutForDropFeedback; // eax
  __int64 v11; // rdx
  IUnknown **p_punk; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  IUnknown *v18; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v6 = (IUnknown *)((char *)this - 88);
  if ( !*((_QWORD *)this + 5) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Instance = WindowArrangementView_CreateInstance(v8, (void **)&punk);
    v7 = Instance;
    if ( Instance >= 0 )
    {
      IUnknown_SetSite(punk, v6);
      p_punk = &punk;
      v14 = 1;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback(v6, a2, 3LL, &v17);
      v7 = AppLayoutForDropFeedback;
      if ( AppLayoutForDropFeedback >= 0 )
      {
        AppLayoutForDropFeedback = ((__int64 (__fastcall *)(IUnknown *, struct IApplicationView *, __int64, __int64, int))punk->lpVtbl[1].QueryInterface)(
                                     punk,
                                     a2,
                                     v17,
                                     3LL,
                                     3);
        v7 = AppLayoutForDropFeedback;
        if ( AppLayoutForDropFeedback >= 0 )
        {
          v18 = punk;
          p_punk = (IUnknown **)v6;
          AppLayoutForDropFeedback = Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager::CachedWindowArrangementViewLifetime,IUnknown,TabletModeViewManager *,IWindowArrangementView *>(
                                       a3,
                                       (__int64 *)&p_punk,
                                       (__int64 *)&v18);
          v7 = AppLayoutForDropFeedback;
          if ( AppLayoutForDropFeedback >= 0 )
          {
            Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 6, (__int64 *)&punk);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
            v7 = 0;
            goto LABEL_13;
          }
          v11 = 214LL;
        }
        else
        {
          v11 = 212LL;
        }
      }
      else
      {
        v11 = 211LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)AppLayoutForDropFeedback);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      IUnknown_SetSite(punk, 0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
    }
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    return v7;
  }
  v7 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)0x8007139FLL);
  return v7;
}
