/*
 * XREFs of QatGetStatusFromCompletionRecord @ 0x1406E52E4
 * Callers:
 *     AccelpQatOperationHandler @ 0x1406E3C44 (AccelpQatOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QatGetStatusFromCompletionRecord(_BYTE *a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = a1[6];
  result = 0LL;
  if ( v1 && v1 != 8 || a1[4] || a1[5] )
  {
    if ( ((v1 - 16) & 0xEF) != 0 || a1[4] < 0xEEu || a1[5] < 0xEEu )
    {
      result = 3221225659LL;
      if ( v1 == 1 )
        return 259LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
