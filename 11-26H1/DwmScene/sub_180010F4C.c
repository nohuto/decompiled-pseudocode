/*
 * XREFs of sub_180010F4C @ 0x180010F4C
 * Callers:
 *     sub_18000EB40 @ 0x18000EB40 (sub_18000EB40.c)
 *     sub_180010208 @ 0x180010208 (sub_180010208.c)
 * Callees:
 *     sub_18000DACC @ 0x18000DACC (sub_18000DACC.c)
 */

void __fastcall __noreturn sub_180010F4C(int a1, int a2, __int64 a3, int a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  sub_18000DACC(a1, a2, a3, a4, v4, retaddr);
}
