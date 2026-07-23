/*
 * XREFs of LdrpFindTlsEntry @ 0x1800C1900
 * Callers:
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 *     LdrpReleaseTlsEntry @ 0x1800C1840 (LdrpReleaseTlsEntry.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall LdrpFindTlsEntry(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)LdrpTlsList; result != &LdrpTlsList; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
