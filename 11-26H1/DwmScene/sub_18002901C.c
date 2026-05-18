/*
 * XREFs of sub_18002901C @ 0x18002901C
 * Callers:
 *     sub_180048E50 @ 0x180048E50 (sub_180048E50.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_1800569C0 @ 0x1800569C0 (sub_1800569C0.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 *     sub_18005A220 @ 0x18005A220 (sub_18005A220.c)
 *     sub_180085798 @ 0x180085798 (sub_180085798.c)
 *     sub_1800942A4 @ 0x1800942A4 (sub_1800942A4.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 *     sub_1800BF300 @ 0x1800BF300 (sub_1800BF300.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002901C(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 result; // rax

  do
  {
    result = a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
  return result;
}
