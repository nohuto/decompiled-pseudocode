/*
 * XREFs of sub_18001FC54 @ 0x18001FC54
 * Callers:
 *     sub_180060ED0 @ 0x180060ED0 (sub_180060ED0.c)
 *     sub_18006105C @ 0x18006105C (sub_18006105C.c)
 *     sub_1800611B4 @ 0x1800611B4 (sub_1800611B4.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800D0740 @ 0x1800D0740 (sub_1800D0740.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001DD44 @ 0x18001DD44 (sub_18001DD44.c)
 *     sub_18001E17C @ 0x18001E17C (sub_18001E17C.c)
 */

__int64 __fastcall sub_18001FC54(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  sub_18001DD44(a1, a3);
  if ( *(_QWORD *)(a1 + 16) - a3 < a4 )
    a4 = *(_QWORD *)(a1 + 16) - a3;
  v8 = sub_1800141BC(a1);
  sub_18001E17C((char **)a2, (const void *)(v8 + 2 * a3), a4);
  return a2;
}
