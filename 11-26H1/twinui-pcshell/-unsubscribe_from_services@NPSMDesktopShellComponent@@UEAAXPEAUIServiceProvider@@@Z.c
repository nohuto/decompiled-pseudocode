/*
 * XREFs of ?unsubscribe_from_services@NPSMDesktopShellComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x180610040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NPSMDesktopShellComponent::unsubscribe_from_services(
        NPSMDesktopShellComponent *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((NPSMDesktopShellComponent *)((char *)this + 152));
}
