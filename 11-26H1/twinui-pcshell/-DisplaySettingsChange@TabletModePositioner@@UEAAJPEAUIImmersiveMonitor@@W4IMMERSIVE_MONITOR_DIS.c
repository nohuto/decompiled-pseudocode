/*
 * XREFs of ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801ED670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180519368 (-IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x18051963C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::DisplaySettingsChange(
        __int64 a1,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  TabletModePositioner *v6; // r12
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v6 = (TabletModePositioner *)(a1 - 152);
  if ( *(_DWORD *)(a1 - 152 + 232) != 1 )
    return 2147947423LL;
  if ( *(_DWORD *)(a1 + 84) != 1 || !TabletModePositioner::IsOurMonitor((TabletModePositioner *)(a1 - 152), a2) )
    return 0LL;
  if ( (a3 & 0x38) != 0 )
  {
    v18 = 0LL;
    v8 = *(_QWORD *)(a1 + 296);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v10 = v9(v8, 2LL, &v18);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1247LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      return v11;
    }
    v19 = 0;
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1250LL;
      goto LABEL_10;
    }
    if ( v19 )
    {
      v21 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v21);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4E7,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v13);
      v20 = v21;
      v14 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int128 *, __int64))(*(_QWORD *)v18 + 56LL))(
              v18,
              a2,
              &v20,
              1LL);
      v15 = retaddr;
      if ( v14 >= 0 )
        goto LABEL_20;
      v16 = 1256LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
        goto LABEL_20;
      v14 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v18 + 64LL))(v18, a2);
      v15 = retaddr;
      if ( v14 >= 0 )
        goto LABEL_20;
      v16 = 1261LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v15,
      (void *)v16,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v14);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  }
  if ( (a3 & 0x10) != 0 )
  {
    v17 = TabletModePositioner::LayoutEnvironmentChanged(v6);
    if ( v17 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73A,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v17);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 48LL))(*(_QWORD *)(a1 + 160), a3);
  return 0LL;
}
