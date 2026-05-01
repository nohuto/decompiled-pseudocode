/*
 * XREFs of ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x18051963C
 * Callers:
 *     ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801ED670 (-DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x18051A750 (-ScaleFactorChanged@TabletModePositioner@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1800D9150 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805165AC (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModePositioner::LayoutEnvironmentChanged(IUnknown *this)
{
  struct IUnknownVtbl *lpVtbl; // rcx
  int CurrentLayoutEnvironment; // ebx
  __int64 v4; // rdx
  int v6[4]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v7; // [rsp+30h] [rbp-58h]
  __int64 v8; // [rsp+40h] [rbp-48h]
  _OWORD v9[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10 = 0LL;
  lpVtbl = this[31].lpVtbl;
  memset(v9, 0, sizeof(v9));
  (*((void (__fastcall **)(struct IUnknownVtbl *, _OWORD *))lpVtbl->QueryInterface + 3))(lpVtbl, v9);
  *(_OWORD *)v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  CurrentLayoutEnvironment = TabletModePositioner::GetCurrentLayoutEnvironment(
                               (IUnknown **)this,
                               (struct LAYOUT_ENVIRONMENT_DETAILS *)v6);
  if ( CurrentLayoutEnvironment < 0 )
  {
    v4 = 1864LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CurrentLayoutEnvironment);
    return (unsigned int)CurrentLayoutEnvironment;
  }
  CurrentLayoutEnvironment = TabletModePositioner::ChangeLayoutEnvironmentHelper(
                               this,
                               (const struct LAYOUT_ENVIRONMENT_DETAILS *)v6);
  if ( CurrentLayoutEnvironment < 0 )
  {
    v4 = 1875LL;
    goto LABEL_3;
  }
  return 0LL;
}
