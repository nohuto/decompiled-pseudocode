/*
 * XREFs of ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804DC314
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180239BC0 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804DC6C8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_ReLayoutAllApps(SurfaceHubPositioner *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int i; // esi
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  int v13; // eax
  struct IApplicationView *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v19 = 0LL;
  v4 = *((_QWORD *)this + 23);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v4 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v6 = v5(v4, 3LL, a2, &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 568LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  v17 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 570LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v17; ++i )
  {
    v15[0] = 0LL;
    v10 = v19;
    v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v19 + 32LL);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v15);
    if ( v11(v10, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v12) >= 0 )
    {
      v18 = 0;
      if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v15[0] + 216LL))(v15[0], &v18) >= 0 )
      {
        if ( v18 )
        {
          v13 = SurfaceHubPositioner::_SetDefaultLayout(this, v15[0], 0);
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x246,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
              (const char *)(unsigned int)v13);
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
  }
  v7 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return v7;
}
