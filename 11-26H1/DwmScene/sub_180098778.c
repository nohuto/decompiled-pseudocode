/*
 * XREFs of sub_180098778 @ 0x180098778
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 * Callees:
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_180098664 @ 0x180098664 (sub_180098664.c)
 */

__int64 *__fastcall sub_180098778(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // r10

  if ( !sub_180041DBC(a1 + 184) || sub_180041DBC(v4 + 185) )
  {
    *a2 = v3;
    a2[1] = v3;
  }
  else
  {
    sub_180098664(v7, a2, *(_QWORD *)(v7 + 192), v5, v6);
  }
  return a2;
}
