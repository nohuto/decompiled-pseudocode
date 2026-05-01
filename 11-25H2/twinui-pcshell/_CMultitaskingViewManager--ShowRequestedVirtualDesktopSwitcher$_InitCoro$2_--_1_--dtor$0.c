/*
 * XREFs of _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2_::_1_::dtor$0 @ 0x1806C603A
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__InitCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 72) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 32LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 72);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
