/*
 * XREFs of ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802284C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EE86C (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EE9CC (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  SurfaceHubPositioner *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **); // rbx
  int v15; // eax
  __int64 v16; // rdx
  struct IImmersiveMonitor *v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v19; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+78h] [rbp+38h] BYREF

  v5 = (SurfaceHubPositioner *)(a1 - 120);
  if ( *(_BYTE *)(a1 - 120 + 576) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v6 = SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange((SurfaceHubPositioner *)(a1 - 120), a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C9,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
    }
    if ( (a3 & 0x28) != 0 )
    {
      v17[0] = 0LL;
      v9 = *(_QWORD *)(a1 + 40);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v9 + 72LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
      v11 = v10(v9, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v17);
      v7 = v11;
      if ( v11 < 0 )
      {
        v12 = 464LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_21;
      }
      v19 = 1;
      v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 40) + 32LL))(
              *(_QWORD *)(a1 + 40),
              &v19);
      v7 = v11;
      if ( v11 < 0 )
      {
        v12 = 466LL;
        goto LABEL_20;
      }
      if ( v19 > 1 )
      {
        v20 = 0LL;
        v13 = *(_QWORD *)(a1 + 40);
        v14 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v13 + 104LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
        v15 = v14(v13, 1LL, v17[0], &v20);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 470LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
LABEL_21:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
          return v7;
        }
        v15 = SurfaceHubPositioner::_ReLayoutAllApps(v5, v20);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 471LL;
          goto LABEL_14;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      }
      v11 = SurfaceHubPositioner::_ReLayoutAllApps(v5, v17[0]);
      v7 = v11;
      if ( v11 < 0 )
      {
        v12 = 473LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
    }
  }
  return 0LL;
}
