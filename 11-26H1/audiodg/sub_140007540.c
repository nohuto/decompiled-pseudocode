/*
 * XREFs of sub_140007540 @ 0x140007540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140054934 @ 0x140054934 (sub_140054934.c)
 */

__int64 __fastcall sub_140007540(__int64 a1, char a2)
{
  __int64 result; // rax

  result = sub_140003238((__int64 *)(a1 + 24));
  if ( *(_QWORD *)(a1 + 16) )
    result = sub_140007588();
  if ( a2 )
    return sub_140054934(a1);
  return result;
}
