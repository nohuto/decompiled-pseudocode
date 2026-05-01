/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync_::_1_::dtor$1 @ 0x1806E26A6
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 64) = 2016LL;
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 32) - 112LL;
    operator delete(*(void **)(a2 + 72), *(const struct std::nothrow_t **)(a2 + 64));
  }
}
