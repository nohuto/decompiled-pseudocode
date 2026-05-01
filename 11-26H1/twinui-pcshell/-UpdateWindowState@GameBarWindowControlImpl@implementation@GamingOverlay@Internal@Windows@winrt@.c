/*
 * XREFs of ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180217B84
 * Callers:
 *     ?HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180217AAC (-HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1802375C0 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180237B8C (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C7F0 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     _lambda_0c278ba272db598cb3813ab71714e0df_::__lambda_0c278ba272db598cb3813ab71714e0df_ @ 0x1802C6250 (_lambda_0c278ba272db598cb3813ab71714e0df_--__lambda_0c278ba272db598cb3813ab71714e0df_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___ @ 0x18035A6CC (Windows--Internal--ComTaskPool--QueueTask__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___.c)
 *     _lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::_lambda_d4d75362ac07d926fcc1fc2d8f09e59f_ @ 0x18035A9B0 (_lambda_d4d75362ac07d926fcc1fc2d8f09e59f_--_lambda_d4d75362ac07d926fcc1fc2d8f09e59f_.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  if ( *(_DWORD *)(a1 + 60) != a3 )
  {
    *(_DWORD *)(a1 + 60) = a3;
    winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
      a1,
      &v10);
    v4 = lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::_lambda_d4d75362ac07d926fcc1fc2d8f09e59f_(v8, a1, &v10, &v11);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___(
           v6,
           v5,
           *(unsigned int *)(a1 + 184),
           v4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x373,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v7);
    lambda_0c278ba272db598cb3813ab71714e0df_::__lambda_0c278ba272db598cb3813ab71714e0df_(v8);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  }
}
