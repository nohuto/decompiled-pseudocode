/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync_::_1_::dtor$0 @ 0x1806FF7AC
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 48) = 1328LL;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 32) - 128LL;
    operator delete(*(void **)(a2 + 56), *(const struct std::nothrow_t **)(a2 + 48));
  }
}
