/*
 * XREFs of _GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E5061
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x180030E90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 56) + 208LL;
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 144));
}
