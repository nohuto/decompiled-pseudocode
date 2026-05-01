/*
 * XREFs of _lambda_ff3af0abcf4100822182f80ac5bd56ae_::__lambda_ff3af0abcf4100822182f80ac5bd56ae_ @ 0x180293770
 * Callers:
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180293614 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::_CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x18045C4B8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___--_CTask.c)
 *     _TouchKeyboardExperienceManager::OnInputAppPropertyChanged_::_1_::dtor$3 @ 0x1806B3C7E (_TouchKeyboardExperienceManager--OnInputAppPropertyChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_ff3af0abcf4100822182f80ac5bd56ae_::__lambda_ff3af0abcf4100822182f80ac5bd56ae_(__int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 48));
  std::wstring::_Tidy_deallocate((void **)(a1 + 16));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
