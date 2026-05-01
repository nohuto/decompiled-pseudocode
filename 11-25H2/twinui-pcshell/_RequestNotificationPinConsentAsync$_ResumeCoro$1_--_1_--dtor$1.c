/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806D6C06
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x180297810 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 48) + 64LL;
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void ***)(a2 + 272));
}
