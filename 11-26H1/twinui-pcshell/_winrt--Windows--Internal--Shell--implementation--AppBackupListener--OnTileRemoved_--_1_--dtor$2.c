/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved_::_1_::dtor$2 @ 0x180701E73
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 96) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 144LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 96);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
