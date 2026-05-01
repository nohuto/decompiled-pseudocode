/*
 * XREFs of _CopilotHotkeyManager::LaunchCustomUriAsync_::_1_::dtor$1 @ 0x18070299F
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CopilotHotkeyManager::LaunchCustomUriAsync_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 48) = 176LL;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 32);
    operator delete(*(void **)(a2 + 56), *(const struct std::nothrow_t **)(a2 + 48));
  }
}
