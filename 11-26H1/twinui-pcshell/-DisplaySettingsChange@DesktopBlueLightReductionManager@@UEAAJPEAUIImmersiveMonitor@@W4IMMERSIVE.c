/*
 * XREFs of ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801D8600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x1801D8714 (--$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D8840.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a03ebfe222b20f6e78e73c052cdff49c___ @ 0x18029ADC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_a03ebfe222b20f6e78e73c052cdff49c___.c)
 *     _lambda_a03ebfe222b20f6e78e73c052cdff49c_::_lambda_a03ebfe222b20f6e78e73c052cdff49c_ @ 0x18030D728 (_lambda_a03ebfe222b20f6e78e73c052cdff49c_--_lambda_a03ebfe222b20f6e78e73c052cdff49c_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebx
  int v5; // eax
  volatile int *v6; // rdx
  const char *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = a3 & 0x28;
  LOBYTE(v17) = v4 != 0;
  LOBYTE(v18) = 0;
  v19 = 0LL;
  try
  {
    v5 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 40LL))();
    if ( v5 >= 0 )
      LOBYTE(v18) = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF5,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v5);
    DesktopBlueLightReductionManagerTelemetry::DisplaySettingsChange<bool const &,bool &>(&v17, &v18);
    if ( v4 )
    {
      v8 = a1 - 112;
      v17 = a1 - 112;
      if ( a1 != 112 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 164), v6);
      v9 = lambda_a03ebfe222b20f6e78e73c052cdff49c_::_lambda_a03ebfe222b20f6e78e73c052cdff49c_(
             (unsigned int)&v14,
             (int)a1 - 112,
             (unsigned int)&v19,
             (unsigned int)&v18,
             (__int64)&v17);
      v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_a03ebfe222b20f6e78e73c052cdff49c___(
              v11,
              v10,
              *(unsigned int *)(a1 + 92),
              v9);
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v15);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10B,
          (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v12);
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v7);
  }
  return result;
}
