/*
 * XREFs of _std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch$1 @ 0x1800BE995
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall __noreturn std::_Uninit_move_CreativeFramework::TargetedContentLayoutHelpers::Tile___CreativeFramework::TargetedContentLayoutHelpers::Tile___std::allocator_CreativeFramework::TargetedContentLayoutHelpers::Tile__CreativeFramework::TargetedContentLayoutHelpers::Tile__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a2 + 72); i != *(_QWORD **)(a2 + 64); i += 7 )
    std::wstring::_Tidy(i, 1, 0LL);
  throw;
}
