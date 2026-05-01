/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x1806B3074
 * Callers:
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$3 @ 0x1807079FD (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1807079FD.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$4 @ 0x180707A13 (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_180707A13.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
