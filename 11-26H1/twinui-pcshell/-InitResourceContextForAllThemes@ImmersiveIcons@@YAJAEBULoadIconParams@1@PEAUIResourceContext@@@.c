/*
 * XREFs of ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067E950
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x180299CE8 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180299D48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x18067E4C0 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveIcons::InitResourceContextForAllThemes(
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a2,
        struct IResourceContext *a3)
{
  unsigned int ContrastForParams; // ebp
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdx
  const wchar_t *v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, (__int64)a2);
  if ( ContrastForParams )
  {
    v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
           a2,
           *((unsigned __int16 *)this + 8));
    if ( v8 < 0 )
    {
      v9 = 210LL;
      goto LABEL_5;
    }
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
      1u,
      v6);
    v7 = *(_QWORD *)a2;
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(v7 + 112))(
             a2,
             *((unsigned __int16 *)this + 8));
      if ( v8 < 0 )
      {
        v9 = 181LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *))(v7 + 136))(
             a2,
             L"unplated");
      if ( v8 < 0 )
      {
        v9 = 185LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
             a2,
             *((unsigned __int16 *)this + 4));
      if ( v8 < 0 )
      {
        v9 = 186LL;
        goto LABEL_5;
      }
    }
    if ( *((_DWORD *)this + 11) )
    {
      v11 = L"light";
      if ( *((_DWORD *)this + 11) != 1 )
        v11 = L"dark";
      (*(void (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, const wchar_t *))(*(_QWORD *)a2 + 144LL))(
        a2,
        L"Theme",
        v11);
    }
  }
  v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 128LL))(
         a2,
         ContrastForParams);
  if ( v8 < 0 )
  {
    v9 = 213LL;
    goto LABEL_5;
  }
  v12 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)this + 7));
  v13 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 120LL))(
          a2,
          v12);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
