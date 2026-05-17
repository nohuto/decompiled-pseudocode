/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x1801055D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TpCallbackSetEventOnCompletion(__int64 a1, __int64 a2)
{
  if ( !a1 || (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_DWORD *)(a1 + 148) )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    *(_DWORD *)(a1 + 144) |= 4u;
    *(_DWORD *)(a1 + 148) = a2;
  }
}
