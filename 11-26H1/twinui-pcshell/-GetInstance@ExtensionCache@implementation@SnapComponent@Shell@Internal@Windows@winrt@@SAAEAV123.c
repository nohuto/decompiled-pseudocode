/*
 * XREFs of ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x1801F24C0
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x1801FBA84 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x18020DF0C (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x1802927AC (-TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     atexit @ 0x1802C9288 (atexit.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 */

struct winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance(
        void)
{
  if ( __TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA);
    if ( __TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA == -1 )
    {
      `winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::inst = 0LL;
      xmmword_1808DEC80 = 0LL;
      qword_1808DEC90 = 0LL;
      atexit(`winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::`dynamic atexit destructor for 'inst'');
      Init_thread_footer(&__TSS0__1__GetInstance_ExtensionCache_implementation_SnapComponent_Shell_Internal_Windows_winrt__SAAEAV2345678_XZ_4HA);
    }
  }
  return (struct winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *)&`winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::inst;
}
