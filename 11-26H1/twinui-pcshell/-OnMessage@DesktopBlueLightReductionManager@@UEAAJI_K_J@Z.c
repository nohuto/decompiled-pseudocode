/*
 * XREFs of ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x1801D8790
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D8840.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0bfcc78e271c9d57dd0543599a36cd9a___ @ 0x180289B28 (Windows--Internal--ComTaskPool--QueueTask__lambda_0bfcc78e271c9d57dd0543599a36cd9a___.c)
 *     _lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_ @ 0x18030D700 (_lambda_fde1e3dd508437221a89b1c19fd2671f_--_lambda_fde1e3dd508437221a89b1c19fd2671f_.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::OnMessage(
        DesktopBlueLightReductionManager *this,
        volatile int *a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (_DWORD)a2 == 30 )
  {
    v3 = (char *)this - 104;
    *(_QWORD *)v9 = (char *)this - 104;
    if ( this != (DesktopBlueLightReductionManager *)104 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 164), a2);
    v4 = lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_(v10, v3, v9);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_0bfcc78e271c9d57dd0543599a36cd9a___(
           v7,
           v6,
           *(unsigned int *)(v5 + 100),
           v4,
           *(_QWORD *)v9);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v11);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v8);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v3);
  }
  return 0LL;
}
