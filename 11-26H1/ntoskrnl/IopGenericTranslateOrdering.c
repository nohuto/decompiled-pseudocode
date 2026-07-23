/*
 * XREFs of IopGenericTranslateOrdering @ 0x1407A9250
 * Callers:
 *     <none>
 * Callees:
 *     IopTranslateBusAddress @ 0x1407A99FC (IopTranslateBusAddress.c)
 */

__int64 __fastcall IopGenericTranslateOrdering(__int64 a1, __int64 a2)
{
  char v4; // di

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v4 = *(_BYTE *)(a2 + 1);
  if ( v4 == 3 || v4 == 7 || v4 == 1 )
  {
    if ( (int)IopTranslateBusAddress(*(PHYSICAL_ADDRESS *)(a2 + 16)) < 0
      || (int)IopTranslateBusAddress(*(PHYSICAL_ADDRESS *)(a2 + 24)) < 0 )
    {
      *(_BYTE *)(a1 + 1) = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0;
    }
  }
  return 0LL;
}
