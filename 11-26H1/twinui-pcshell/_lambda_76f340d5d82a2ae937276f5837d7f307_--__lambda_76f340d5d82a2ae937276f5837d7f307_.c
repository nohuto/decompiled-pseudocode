/*
 * XREFs of _lambda_76f340d5d82a2ae937276f5837d7f307_::__lambda_76f340d5d82a2ae937276f5837d7f307_ @ 0x1802895F8
 * Callers:
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180289360 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::_CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x1804687E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___--_CTask.c)
 *     _TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor$3 @ 0x1806DA9A9 (_TouchKeyboardExperienceManager--OnInputAppPropertyChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_76f340d5d82a2ae937276f5837d7f307_::__lambda_76f340d5d82a2ae937276f5837d7f307_(__int64 *a1)
{
  std::wstring::_Tidy_deallocate(a1 + 6);
  std::wstring::_Tidy_deallocate(a1 + 2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
