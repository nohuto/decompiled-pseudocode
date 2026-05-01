/*
 * XREFs of _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_::_1_::dtor$1 @ 0x1806E54CF
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 40) = 336LL;
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 32) - 112LL;
    operator delete(*(void **)(a2 + 48), *(const struct std::nothrow_t **)(a2 + 40));
  }
}
