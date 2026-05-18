/*
 * XREFs of sub_18004357C @ 0x18004357C
 * Callers:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_180094020 @ 0x180094020 (sub_180094020.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004357C(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 152);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
