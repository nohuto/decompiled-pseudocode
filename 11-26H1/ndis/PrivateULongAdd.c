/*
 * XREFs of PrivateULongAdd @ 0x1400E7D90
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x140059140 (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PrivateULongAdd(unsigned int a1, int a2, _DWORD *a3)
{
  if ( a1 + a2 < a1 )
  {
    *a3 = -1;
    return 3221291029LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
