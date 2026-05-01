/*
 * XREFs of ?ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@6@Uauto_revoke_t@6@AEBUResetNotificationBoundaryHandler@23456@@Z @ 0x1802A92A4
 * Callers:
 *     ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x18026B468 (--0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1801D2FF8 (--$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ??$as@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802A933C (--$as@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@Utype@-$abi@.c)
 *     ?ResetNotificationBoundary@?$consume_Windows_Internal_Shell_SnapComponent_IDesktopSnapLayoutManagerStatics@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1802A93AC (-ResetNotificationBoundary@-$consume_Windows_Internal_Shell_SnapComponent_IDesktopSnapLayoutMana.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager::ResetNotificationBoundary(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  _BYTE v9[16]; // [rsp+28h] [rbp-10h] BYREF
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a1;
  v5 = winrt::make<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,>(&v11);
  winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    *v5);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  v6 = *(_QWORD *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IDesktopSnapLayoutManagerStatics<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics>::ResetNotificationBoundary(
                    &v10,
                    v9,
                    a3);
  v7 = (__int64)v10;
  *a1 = (__int64)v10;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v6;
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a1;
}
