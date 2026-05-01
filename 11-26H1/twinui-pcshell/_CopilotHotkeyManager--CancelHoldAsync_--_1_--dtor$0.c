/*
 * XREFs of _CopilotHotkeyManager::CancelHoldAsync_::_1_::dtor$0 @ 0x18070272B
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CopilotHotkeyManager::CancelHoldAsync_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 64) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 96LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
