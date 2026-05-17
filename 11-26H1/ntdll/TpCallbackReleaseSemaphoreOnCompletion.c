/*
 * XREFs of TpCallbackReleaseSemaphoreOnCompletion @ 0x1801592E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TpCallbackReleaseSemaphoreOnCompletion(_DWORD *a1, __int64 a2, int a3)
{
  if ( a1 && (unsigned __int64)(a2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && a3 && !a1[39] )
  {
    a1[36] |= 8u;
    a1[39] = a2;
    a1[40] = a3;
  }
  else
  {
    TppRaiseInvalidParameter();
  }
}
