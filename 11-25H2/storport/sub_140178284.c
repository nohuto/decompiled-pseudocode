/*
 * XREFs of sub_140178284 @ 0x140178284
 * Callers:
 *     sub_140054FB0 @ 0x140054FB0 (sub_140054FB0.c)
 *     sub_1400CB5C0 @ 0x1400CB5C0 (sub_1400CB5C0.c)
 * Callees:
 *     sub_14017BD6C @ 0x14017BD6C (sub_14017BD6C.c)
 */

__int64 __fastcall sub_140178284(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf

  if ( a1
    && a2
    && a3
    && ((*a1 = ((__int64 (*)(void))sub_14017BD6C)(), v6 = sub_14017BD6C(v5, a3), v7 = *a1 == 0LL, a1[1] = v6, v7) || !v6) )
  {
    return 3221225495LL;
  }
  else
  {
    return 0LL;
  }
}
