/*
 * XREFs of sub_140020B8C @ 0x140020B8C
 * Callers:
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 * Callees:
 *     sub_140020C34 @ 0x140020C34 (sub_140020C34.c)
 *     sub_140020C88 @ 0x140020C88 (sub_140020C88.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140020B8C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = sub_140049338(192LL, &unk_1400C75FC);
  v7 = v4;
  if ( v4 )
  {
    v6 = sub_140020C88(v4);
    sub_140020C34(v6 + 40, *a2);
    if ( v6 )
      sub_1400B6010(v6);
    *a1 = v6;
    if ( v6 )
      sub_1400B6010(v6);
    return 0LL;
  }
  else
  {
    sub_1400454AC(&v7);
    return 2147942414LL;
  }
}
