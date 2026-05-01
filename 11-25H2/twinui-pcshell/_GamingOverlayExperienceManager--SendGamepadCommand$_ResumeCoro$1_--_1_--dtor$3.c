/*
 * XREFs of _GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806BDA14
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 56) + 192LL;
  std::wstring::_Tidy_deallocate(*(void ***)(a2 + 136));
}
