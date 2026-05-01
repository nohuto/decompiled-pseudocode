/*
 * XREFs of _CopilotHotkeyManager::LaunchCustomUriForResultsAsync_::_1_::dtor$2 @ 0x180702BE5
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CopilotHotkeyManager::LaunchCustomUriForResultsAsync_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 56) = 272LL;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 32);
    operator delete(*(void **)(a2 + 64), *(const struct std::nothrow_t **)(a2 + 56));
  }
}
