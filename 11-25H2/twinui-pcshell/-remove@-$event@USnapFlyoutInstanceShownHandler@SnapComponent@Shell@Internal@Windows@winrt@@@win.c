/*
 * XREFs of ?remove@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E053C
 * Callers:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@_N@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@AEB_N@Z @ 0x1800E0D04 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@_N@-$event@U.c)
 *     ?remove_InstanceShown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180591910 (-remove_InstanceShown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??0?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@I@Z @ 0x1800E0308 (--0-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802D3474 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  unsigned int *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  PVOID Ptr; // rcx
  unsigned int v7; // r15d
  unsigned int *v8; // rbx
  char v9; // r13
  _DWORD *v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // rsi
  unsigned int *v13; // rax
  unsigned int *v14[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  v15 = 0LL;
  v5 = a1 + 2;
  v16 = (__int64)&a1[2];
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = *((_DWORD *)Ptr + 1) - 1;
  v8 = 0LL;
  v14[0] = 0LL;
  v9 = 0;
  if ( v7 )
  {
    v10 = operator new(8LL * v7 + 8);
    v8 = winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
           v10,
           v7);
    v14[0] = v8;
    v11 = (__int64 *)((char *)a1->Ptr + 8);
    v16 = (__int64)a1->Ptr + 8 * *((unsigned int *)a1->Ptr + 1) + 8;
    if ( v11 == (__int64 *)v16 )
      goto LABEL_17;
    v12 = (__int64 *)(v8 + 2);
    do
    {
      if ( v9 || a2 != WINRT_IMPL_EncodePointer((PVOID)*v11) )
      {
        if ( !v7 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v12++, v11);
        --v7;
      }
      else
      {
        v9 = 1;
      }
      ++v11;
    }
    while ( v11 != (__int64 *)v16 );
    v5 = a1 + 2;
    if ( !v9 )
      goto LABEL_17;
    goto LABEL_14;
  }
  if ( WINRT_IMPL_EncodePointer(*((PVOID *)Ptr + 1)) == a2 )
  {
LABEL_14:
    _Platform_AcquireSRWLockExclusive(a1 + 1);
    v4 = (unsigned int *)a1->Ptr;
    a1->Ptr = 0LL;
    if ( a1 != (RTL_SRWLOCK *)v14 )
    {
      v13 = v8;
      v8 = 0LL;
      v14[0] = 0LL;
      a1->Ptr = v13;
    }
    v15 = v4;
    ReleaseSRWLockExclusive_0(a1 + 1);
  }
LABEL_17:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v14);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v15);
}
