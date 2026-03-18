/*
 * XREFs of zzzDestroyCaret @ 0x1401580DC
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140062C48 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     NtUserDestroyCaret @ 0x1401580A0 (NtUserDestroyCaret.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140158458 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x140158AD8 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
