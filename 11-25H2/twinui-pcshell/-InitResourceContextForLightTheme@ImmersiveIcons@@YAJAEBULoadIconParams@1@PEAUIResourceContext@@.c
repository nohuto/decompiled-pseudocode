/*
 * XREFs of ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x180658ACC
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x1802A2924 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x18065843C (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveIcons::InitResourceContextForLightTheme(
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a2,
        struct IResourceContext *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(const struct ImmersiveIcons::LoadIconParams *, _QWORD); // rbx
  unsigned int ContrastForParams; // eax
  unsigned int v11; // eax
  __int64 (__fastcall *v12)(const struct ImmersiveIcons::LoadIconParams *, _QWORD); // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, struct IResourceContext *))(*(_QWORD *)a2 + 136LL))(
         a2,
         L"lightunplated",
         a3);
  if ( v5 < 0 )
  {
    v6 = 152LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
         a2,
         *((unsigned __int16 *)this + 4));
  if ( v5 < 0 )
  {
    v6 = 153LL;
    goto LABEL_3;
  }
  v9 = *(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 128LL);
  ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, v8);
  v5 = v9(a2, ContrastForParams);
  if ( v5 < 0 )
  {
    v6 = 155LL;
    goto LABEL_3;
  }
  v11 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)this + 7));
  v5 = v12(a2, v11);
  if ( v5 < 0 )
  {
    v6 = 156LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, const wchar_t *))(*(_QWORD *)a2 + 144LL))(
    a2,
    L"Theme",
    L"light");
  return 0LL;
}
