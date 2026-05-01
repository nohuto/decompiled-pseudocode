/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806FE8A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1PinConsentPromptContent@@QEAA@XZ @ 0x1805E35AC (--1PinConsentPromptContent@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 48) + 48LL;
  PinConsentPromptContent::~PinConsentPromptContent(*(PinConsentPromptContent **)(a2 + 112));
}
