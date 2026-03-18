/*
 * XREFs of zzzShowCaret @ 0x140158430
 * Callers:
 *     NtUserShowCaret @ 0x1401581E0 (NtUserShowCaret.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x140053124 (zzzInternalShowCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140158458 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  result = UT_CaretSet(a1);
  if ( (_DWORD)result )
  {
    zzzInternalShowCaret(v3, v2);
    return 1LL;
  }
  return result;
}
