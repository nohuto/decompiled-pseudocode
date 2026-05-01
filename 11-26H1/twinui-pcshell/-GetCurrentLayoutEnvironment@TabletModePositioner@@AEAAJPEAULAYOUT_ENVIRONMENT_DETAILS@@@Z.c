/*
 * XREFs of ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1800D9150
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1800D8F60 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x180518E94 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x18051963C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801EB888 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18021271C (-InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::GetCurrentLayoutEnvironment(
        IUnknown **this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  void *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  IUnknown *v9; // rcx
  enum DEVICE_SCALE_FACTOR v10; // eax
  enum DEVICE_SCALE_FACTOR v12; // [rsp+20h] [rbp-60h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ImmersiveApplicationLayout::InitLayoutEnv(a2, a2);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, &v14);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v15 = 0LL;
      v7 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, &v15);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v12 = DEVICE_SCALE_FACTOR_INVALID;
        if ( TabletModePositioner::GetScaleFactor((TabletModePositioner *)this, &v12) >= 0 )
        {
          v10 = v12;
        }
        else
        {
          v9 = this[31];
          if ( v9 )
          {
            v16 = 0LL;
            v17 = 0LL;
            v18 = 0LL;
            ((void (__fastcall *)(IUnknown *, __int128 *))v9->lpVtbl[1].QueryInterface)(v9, &v16);
            v10 = (int)v17;
          }
          else
          {
            v10 = SCALE_100_PERCENT;
          }
          v12 = v10;
        }
        *(_OWORD *)((char *)a2 + 24) = v14;
        *(_OWORD *)a2 = v15;
        *((_DWORD *)a2 + 4) = v10;
        v5 = 0;
        goto LABEL_17;
      }
      v8 = 2124LL;
    }
    else
    {
      v8 = 2121LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v7);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x846,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
  v6 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
