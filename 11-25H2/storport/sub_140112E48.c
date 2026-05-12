/*
 * XREFs of sub_140112E48 @ 0x140112E48
 * Callers:
 *     sub_140111E3C @ 0x140111E3C (sub_140111E3C.c)
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 * Callees:
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_140112E48(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a3 >= 0xBu )
  {
    *(_WORD *)a4 = 0;
    *(_DWORD *)(a4 + 3) = -2088763386;
    *(_WORD *)(a4 + 7) = -20048;
    *(_BYTE *)(a4 + 9) = -78;
    *(_BYTE *)(a2 + 3) = 1;
    *a3 = 11;
  }
  else
  {
    sub_140112680(a2, 6, 5, 36, 0);
    return 3221225485LL;
  }
  return result;
}
