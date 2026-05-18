/*
 * XREFs of sub_18004EE08 @ 0x18004EE08
 * Callers:
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004EE08(_QWORD *a1, __int64 **a2)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  sub_180011CC4(a1, "{");
  v4 = 0;
  v5 = **a2;
  v9 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = v5 + 32;
    if ( v4 )
      sub_18001DFB0((__int64)a1, ",", 1uLL);
    else
      v4 = 1;
    sub_18001DF88((__int64)a1, v6);
    sub_18001D6F4(&v9, v7);
    v5 = v9;
  }
  sub_18001DFB0((__int64)a1, "}", 1uLL);
  return a1;
}
