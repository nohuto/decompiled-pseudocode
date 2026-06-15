/*
 * XREFs of sub_1400392FC @ 0x1400392FC
 * Callers:
 *     sub_140062B74 @ 0x140062B74 (sub_140062B74.c)
 * Callees:
 *     sub_1400176D0 @ 0x1400176D0 (sub_1400176D0.c)
 */

__int64 __fastcall sub_1400392FC(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = sub_1400176D0(v4);
  *a1 = a2;
  return result;
}
