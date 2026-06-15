/*
 * XREFs of sub_140038FD8 @ 0x140038FD8
 * Callers:
 *     sub_1400AF86A @ 0x1400AF86A (sub_1400AF86A.c)
 *     sub_1400AF88E @ 0x1400AF88E (sub_1400AF88E.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_140038FD8(__int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
