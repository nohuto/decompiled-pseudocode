/*
 * XREFs of ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x1800740EC
 * Callers:
 *     ?GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180073ED8 (-GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@W.c)
 *     ?GetDarkThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180073EF8 (-GetDarkThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows.c)
 *     ?GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180074080 (-GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Compositio.c)
 *     ?GetLightThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800740CC (-GetLightThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Window.c)
 *     ?GetDarkThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180099DA0 (-GetDarkThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Wi.c)
 *     ?GetDarkThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A9650 (-GetDarkThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@.c)
 *     ?GetLightThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A9670 (-GetLightThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition.c)
 * Callees:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003EAB8 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180075054 (-CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Compo.c)
 *     ?CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180089EA4 (-CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionB.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A35AC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A95EC (--4-$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E9940 (-AssertW@@YAXPEBG000K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCompositionEffectCache::EnsureEffectsInitialized(
        CCompositionEffectCache *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  int MicaBrush; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  struct Windows::UI::Composition::ICompositionBrush **v21; // r8
  int HostBackdropBrush; // eax
  unsigned int v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+30h] [rbp-28h] BYREF
  __int64 v25; // [rsp+38h] [rbp-20h] BYREF
  __int64 v26[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF
  __int64 v29; // [rsp+78h] [rbp+20h] BYREF
  __int64 v30; // [rsp+80h] [rbp+28h] BYREF
  __int64 v31; // [rsp+88h] [rbp+30h] BYREF

  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
  if ( !*(_BYTE *)(v4 + 633) )
    AssertW(
      0LL,
      L"CDesktopManager::GetWindowList()->IsTransparencyAllowedBySystem()",
      L"CCompositionEffectCache::EnsureEffectsInitialized",
      L"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      0x24u);
  if ( !*((_BYTE *)this + 72) )
  {
    v26[0] = 0LL;
    MicaBrush = CCompositionEffectCache::CreateMicaBrush(CMicaSystemBackdropVisual::sc_darkThemeTintColor, v4, a3, v26);
    if ( MicaBrush < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)MicaBrush,
        v23);
    v25 = 0LL;
    v8 = CCompositionEffectCache::CreateMicaBrush(CMicaSystemBackdropVisual::sc_lightThemeTintColor, v6, v7, &v25);
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v8,
        v23);
    v24 = 0LL;
    v11 = CCompositionEffectCache::CreateDesktopAcrylicBrush(
            CAcrylicSystemBackdropVisual::sc_darkThemeTintColor,
            v9,
            v10,
            &v24);
    if ( v11 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v11,
        v23);
    v31 = 0LL;
    v14 = CCompositionEffectCache::CreateDesktopAcrylicBrush(
            CAcrylicSystemBackdropVisual::sc_lightThemeTintColor,
            v12,
            v13,
            &v31);
    if ( v14 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v14,
        v23);
    v30 = 0LL;
    v17 = CCompositionEffectCache::CreateMicaBrush(
            CLightMicaSystemBackdropVisual::sc_darkThemeTintColor,
            v15,
            v16,
            &v30);
    if ( v17 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x4F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v17,
        v23);
    v29 = 0LL;
    v20 = CCompositionEffectCache::CreateMicaBrush(
            CLightMicaSystemBackdropVisual::sc_lightThemeTintColor,
            v18,
            v19,
            &v29);
    if ( v20 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x56,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v20,
        v23);
    v28 = 0LL;
    HostBackdropBrush = WindowsInternal::UI::CreateHostBackdropBrush(
                          *(__int64 (__fastcall ****)(WindowsInternal::UI *, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                                 + 6)
                                                                                               + 32LL),
                          (struct IDCompositionDesktopDevicePartner *)&v28,
                          v21);
    if ( HostBackdropBrush < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)HostBackdropBrush,
        v23);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 8,
      v26);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 16,
      &v25);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 24,
      &v24);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 32,
      &v31);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 40,
      &v30);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 48,
      &v29);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (char *)this + 56,
      &v28);
    *((_BYTE *)this + 72) = 1;
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v29);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v30);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v31);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v24);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v25);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v26);
  }
}
