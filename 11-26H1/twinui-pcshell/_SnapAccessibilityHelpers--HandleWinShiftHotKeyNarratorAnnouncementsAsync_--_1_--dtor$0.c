/*
 * XREFs of _SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync_::_1_::dtor$0 @ 0x1806FA4DE
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 40) = 272LL;
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 32);
    operator delete(*(void **)(a2 + 48), *(const struct std::nothrow_t **)(a2 + 40));
  }
}
