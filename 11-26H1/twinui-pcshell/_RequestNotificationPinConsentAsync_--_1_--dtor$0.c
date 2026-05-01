/*
 * XREFs of _RequestNotificationPinConsentAsync_::_1_::dtor$0 @ 0x1806FF1F4
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall RequestNotificationPinConsentAsync_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 48) = 752LL;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 32) - 112LL;
    operator delete(*(void **)(a2 + 56), *(const struct std::nothrow_t **)(a2 + 48));
  }
}
