/*
 * XREFs of sub_18001C4F0 @ 0x18001C4F0
 * Callers:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 * Callees:
 *     sub_18000E2AC @ 0x18000E2AC (sub_18000E2AC.c)
 *     sub_18001C4A8 @ 0x18001C4A8 (sub_18001C4A8.c)
 */

void __noreturn sub_18001C4F0()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = sub_18000E2AC(0x8007000E);
  sub_18001C4A8(retaddr, v1, v2, v0);
}
