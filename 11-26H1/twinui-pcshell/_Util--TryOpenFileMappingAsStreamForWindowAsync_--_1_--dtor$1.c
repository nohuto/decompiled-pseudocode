/*
 * XREFs of _Util::TryOpenFileMappingAsStreamForWindowAsync_::_1_::dtor$1 @ 0x1807041A3
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 104) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 592LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 104) - 112LL;
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
