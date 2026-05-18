/*
 * XREFs of sub_18002ADB4 @ 0x18002ADB4
 * Callers:
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18006F3C8 @ 0x18006F3C8 (sub_18006F3C8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18002ADB4(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_18001C514(400LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xC8uLL);
    sub_18006F3C8(v3);
    sub_18006F3C8(v3 + 200);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
