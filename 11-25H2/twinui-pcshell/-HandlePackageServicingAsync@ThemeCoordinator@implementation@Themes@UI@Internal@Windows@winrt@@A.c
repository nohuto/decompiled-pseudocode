/*
 * XREFs of ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1805E1E30
 * Callers:
 *     ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x1805E3170 (-perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459_____lambda_dcb5be991d2862ede33e1b093bd23459___ @ 0x1805E039C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dcb5be991d286.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicingAsync(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  DWORD CurrentThreadId; // eax
  int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v9; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = this;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v9);
  v9 = this;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v9);
  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459_____lambda_dcb5be991d2862ede33e1b093bd23459___(
         &v10,
         (volatile signed __int32 *)&v9);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v9 )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20D,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)(unsigned int)v6);
  if ( this )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
