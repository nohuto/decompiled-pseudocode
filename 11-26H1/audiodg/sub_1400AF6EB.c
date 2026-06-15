/*
 * XREFs of sub_1400AF6EB @ 0x1400AF6EB
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_140025D60 @ 0x140025D60 (sub_140025D60.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1400AF6EB(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rbx

  v3 = (__int64 *)a2[10];
  sub_14000D7A4(
    (void *)(*v3 + 8LL * a2[11]),
    8LL * (a2[13] - a2[11]),
    (const void *)(*v3 + 8 * (a2[11] + 1LL)),
    8LL * (a2[13] - a2[11]));
  sub_140025D60(v3, a2[13]);
  throw;
}
