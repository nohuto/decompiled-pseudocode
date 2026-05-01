/*
 * XREFs of ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800DC6A0
 * Callers:
 *     ?remove_DismissRequested@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1800DC370 (-remove_DismissRequested@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 *     ?remove_PointerEntered@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1800DC3A0 (-remove_PointerEntered@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1800DC5E8 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 *     ?remove_InstanceReady@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1800DD620 (-remove_InstanceReady@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 *     ?remove_InstanceShutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1802B9B20 (-remove_InstanceShutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 *     ?remove_PointerExited@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1805B5900 (-remove_PointerExited@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x18002A728 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 *     ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x1800DC238 (--0atomic_ref_count@impl@winrt@@QEAA@I@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802CA397 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  unsigned int *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  PVOID Ptr; // rcx
  unsigned int v7; // r15d
  winrt::impl::atomic_ref_count *v8; // rbx
  char v9; // r13
  char *v10; // rsi
  PVOID *v11; // r12
  winrt::impl::atomic_ref_count *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // r12
  unsigned int v15; // esi
  unsigned int *v16[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  v17 = 0LL;
  v5 = a1 + 2;
  v18 = (__int64)&a1[2];
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = *((_DWORD *)Ptr + 1) - 1;
  v8 = 0LL;
  v16[0] = 0LL;
  v9 = 0;
  if ( v7 )
  {
    v8 = (winrt::impl::atomic_ref_count *)operator new(8LL * v7 + 8);
    winrt::impl::atomic_ref_count::atomic_ref_count(v8);
    *(_DWORD *)(v13 + 4) = v7;
    v14 = (__int64 *)(v13 + 8);
    v15 = v7;
    do
    {
      *v14 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v14++);
      --v15;
    }
    while ( v15 );
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
      v14,
      v14);
    v16[0] = (unsigned int *)v8;
    v11 = (PVOID *)((char *)a1->Ptr + 8);
    v18 = (__int64)a1->Ptr + 8 * *((unsigned int *)a1->Ptr + 1) + 8;
    v5 = a1 + 2;
    if ( v11 == (PVOID *)v18 )
      goto LABEL_13;
    v10 = (char *)v8 + 8;
    do
    {
      if ( v9 || a2 != WINRT_IMPL_EncodePointer(*v11) )
      {
        if ( !v7 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v10, v11);
        v10 += 8;
        --v7;
      }
      else
      {
        v9 = 1;
      }
      ++v11;
    }
    while ( v11 != (PVOID *)v18 );
    v5 = a1 + 2;
    if ( !v9 )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( WINRT_IMPL_EncodePointer(*((PVOID *)Ptr + 1)) == a2 )
  {
LABEL_10:
    _Platform_AcquireSRWLockExclusive(a1 + 1);
    v4 = (unsigned int *)a1->Ptr;
    a1->Ptr = 0LL;
    if ( a1 != (RTL_SRWLOCK *)v16 )
    {
      v12 = v8;
      v8 = 0LL;
      v16[0] = 0LL;
      a1->Ptr = v12;
    }
    v17 = v4;
    ReleaseSRWLockExclusive_0(a1 + 1);
  }
LABEL_13:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v16);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v17);
}
