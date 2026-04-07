/*
 * XREFs of ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800C8620
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800A833C (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTetherVisual::Initialize(CBaseObject **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64); // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  struct CBitmapSource *v13; // rax
  CBaseObject *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+48h] [rbp+28h] BYREF
  __int64 v18; // [rsp+50h] [rbp+30h] BYREF
  struct CBitmapSource *v19; // [rsp+58h] [rbp+38h] BYREF

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v18 = 0LL;
    v17 = 0LL;
    v19 = 0LL;
    Theme = (void *)CDesktopManager::GetTheme(1);
    v5 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 3, 0LL, &v19);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 184LL);
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(&v18);
      v5 = v8(v7, &v18);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 88LL))(v18, 1LL);
        v3 = v5;
        if ( v5 >= 0 )
        {
          v5 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)this, v18);
          v3 = v5;
          if ( v5 >= 0 )
          {
            v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*((_QWORD *)this[2] + 5);
            v10 = **v9;
            v11 = v17;
            v17 = 0LL;
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            v12 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v17);
            v5 = v10(v9, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, v12);
            v3 = v5;
            if ( v5 >= 0 )
            {
              v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 88LL))(v17, 1LL);
              v3 = v5;
              if ( v5 >= 0 )
              {
                v13 = v19;
                v19 = 0LL;
                v14 = this[33];
                this[33] = v13;
                if ( v14 )
                  CBaseObject::Release(v14);
                v3 = 0;
                goto LABEL_21;
              }
              v6 = 59LL;
            }
            else
            {
              v6 = 58LL;
            }
          }
          else
          {
            v6 = 56LL;
          }
        }
        else
        {
          v6 = 54LL;
        }
      }
      else
      {
        v6 = 53LL;
      }
    }
    else
    {
      v6 = 50LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\tethervisual.cpp",
      (const char *)(unsigned int)v5);
LABEL_21:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v17);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28,
    (int)"clientcore\\windows\\dwm\\udwm\\tethervisual.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
