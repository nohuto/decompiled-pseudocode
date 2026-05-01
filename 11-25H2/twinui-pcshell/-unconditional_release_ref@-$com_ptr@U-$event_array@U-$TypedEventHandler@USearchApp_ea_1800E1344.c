/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E1344
 * Callers:
 *     ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800E121C (--1-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USear.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUSearchAppActivatedEventArgs@4561@@Z @ 0x1800E1238 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802B1AB0 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USear.c)
 *     ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1803A5160 (--1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@2@@Z @ 0x1803C5658 (-add_agile@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActi.c)
 *     ?remove@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1803C5918 (-remove@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivat.c)
 * Callees:
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800AA094 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800E138C (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v1) )
  {
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
      (__int64 *)(v1 + 8),
      (__int64 *)(v1 + 8 * (*(unsigned int *)(v1 + 4) + 1LL)));
    operator delete((void *)v1);
  }
}
