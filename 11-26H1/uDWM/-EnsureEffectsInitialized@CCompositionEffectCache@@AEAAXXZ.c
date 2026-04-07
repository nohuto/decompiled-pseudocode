/*
 * XREFs of ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180064ACC
 * Callers:
 *     ?GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800648CC (-GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@W.c)
 *     ?GetDarkThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800648EC (-GetDarkThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows.c)
 *     ?GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180064A8C (-GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Compositio.c)
 *     ?GetLightThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180064AAC (-GetLightThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Window.c)
 *     ?GetDarkThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x18008D804 (-GetDarkThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Wi.c)
 *     ?GetDarkThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A6FF0 (-GetDarkThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@.c)
 *     ?GetLightThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A7010 (-GetLightThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition.c)
 * Callees:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180036B68 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180064EE0 (-CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Compo.c)
 *     ?CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180064FD0 (-CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionB.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCompositionEffectCache::EnsureEffectsInitialized(
        CCompositionEffectCache *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
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
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // [rsp+20h] [rbp-30h]
  __int64 v40; // [rsp+30h] [rbp-20h] BYREF
  __int64 v41; // [rsp+38h] [rbp-18h] BYREF
  __int64 v42; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v44; // [rsp+70h] [rbp+20h] BYREF
  __int64 v45; // [rsp+78h] [rbp+28h] BYREF
  __int64 v46; // [rsp+80h] [rbp+30h] BYREF
  __int64 v47; // [rsp+88h] [rbp+38h] BYREF

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
    v42 = 0LL;
    v5 = CCompositionEffectCache::CreateMicaBrush(CMicaSystemBackdropVisual::sc_darkThemeTintColor, v4, a3, &v42);
    if ( v5 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v5,
        v39);
    v41 = 0LL;
    v8 = CCompositionEffectCache::CreateMicaBrush(CMicaSystemBackdropVisual::sc_lightThemeTintColor, v6, v7, &v41);
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v8,
        v39);
    v40 = 0LL;
    v11 = CCompositionEffectCache::CreateDesktopAcrylicBrush(
            CAcrylicSystemBackdropVisual::sc_darkThemeTintColor,
            v9,
            v10,
            &v40);
    if ( v11 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v11,
        v39);
    v47 = 0LL;
    v14 = CCompositionEffectCache::CreateDesktopAcrylicBrush(
            CAcrylicSystemBackdropVisual::sc_lightThemeTintColor,
            v12,
            v13,
            &v47);
    if ( v14 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v14,
        v39);
    v46 = 0LL;
    v17 = CCompositionEffectCache::CreateMicaBrush(
            CLightMicaSystemBackdropVisual::sc_darkThemeTintColor,
            v15,
            v16,
            &v46);
    if ( v17 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x4F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v17,
        v39);
    v44 = 0LL;
    v20 = CCompositionEffectCache::CreateMicaBrush(
            CLightMicaSystemBackdropVisual::sc_lightThemeTintColor,
            v18,
            v19,
            &v44);
    if ( v20 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x56,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v20,
        v39);
    v45 = 0LL;
    HostBackdropBrush = WindowsInternal::UI::CreateHostBackdropBrush(
                          *(HSTRING ***)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
                          (struct IDCompositionDesktopDevicePartner *)&v45,
                          v21);
    if ( HostBackdropBrush < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)HostBackdropBrush,
        v39);
    v23 = v42;
    v42 = 0LL;
    v24 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v23;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v25 = v41;
    v41 = 0LL;
    v26 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v25;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v27 = v40;
    v40 = 0LL;
    v28 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v27;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v29 = v47;
    v47 = 0LL;
    v30 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v29;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v31 = v46;
    v46 = 0LL;
    v32 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v31;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v33 = v44;
    v34 = 0LL;
    v44 = 0LL;
    v35 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v33;
    if ( v35 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      v34 = v44;
    }
    v36 = v45;
    v37 = 0LL;
    v45 = 0LL;
    v38 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v36;
    if ( v38 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v34 = v44;
      v37 = v45;
    }
    *((_BYTE *)this + 72) = 1;
    if ( v37 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      v34 = v44;
    }
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
}
