/*
 * XREFs of ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180195E1C
 * Callers:
 *     ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033B5D4 (--$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@Q.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_8ce5553f322d0698bc47a5a547d85e4a___::Invoke @ 0x1803861C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803861C0.c)
 *     ??$As@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18038E5BC (--$As@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microso.c)
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180392F30 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_180392F30.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::Invoke @ 0x1803ACC10 (winrt--impl--delegate_winrt--Windows--Foundation--DeferralCompletedHandler__lambda_d0c95642d1e5d.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1803CE534 (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x1803F8E20 (-GetEventInvocationContext@-$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::InternalResolve(
        Microsoft::WRL::WeakRef *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *(_QWORD *)this;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v3 + 24LL))(v3, a2);
  else
    return 0LL;
}
