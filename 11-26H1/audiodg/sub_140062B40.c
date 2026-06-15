/*
 * XREFs of sub_140062B40 @ 0x140062B40
 * Callers:
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 * Callees:
 *     sub_1400176D0 @ 0x1400176D0 (sub_1400176D0.c)
 */

__int64 *__fastcall sub_140062B40(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_1400176D0(v4);
  return a1;
}
