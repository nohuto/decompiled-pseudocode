/*
 * XREFs of _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_____::_Emplace_reallocate_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___&__::_1_::catch$0 @ 0x1806DED77
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@0@@Z @ 0x18068AB50 (--$_Destroy_range@V-$allocator@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experience.c)
 */

void __fastcall __noreturn std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_____::_Emplace_reallocate_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(32LL * *(_QWORD *)(a2 + 136)));
  throw;
}
