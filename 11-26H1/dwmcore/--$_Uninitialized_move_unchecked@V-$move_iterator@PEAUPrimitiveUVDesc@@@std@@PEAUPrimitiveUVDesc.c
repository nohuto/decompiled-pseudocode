/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@PEAUPrimitiveUVDesc@@@std@@YAPEAUPrimitiveUVDesc@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@V20@PEAU1@@Z @ 0x180259D68
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180259F7C (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<PrimitiveUVDesc *>,PrimitiveUVDesc *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rcx

  for ( i = a1 + 8; i - 8 != a2; i += 56LL )
  {
    *(_DWORD *)a3 = *(_DWORD *)(i - 8);
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(i - 4);
    *(_DWORD *)(a3 + 8) = *(_DWORD *)i;
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(i + 4);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(i + 8);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(i + 12);
    *(_DWORD *)(a3 + 24) = *(_DWORD *)(i + 16);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(i + 20);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 24);
    *(_OWORD *)(a3 + 36) = *(_OWORD *)(i + 28);
    *(_BYTE *)(a3 + 52) = *(_BYTE *)(i + 44);
    a3 += 56LL;
  }
  return a3;
}
