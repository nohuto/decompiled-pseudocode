/*
 * XREFs of sub_140024A80 @ 0x140024A80
 * Callers:
 *     sub_140024A08 @ 0x140024A08 (sub_140024A08.c)
 * Callees:
 *     sub_140024E3C @ 0x140024E3C (sub_140024E3C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140024A80(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = sub_140049338(288LL, &unk_1400C75FC);
  v5 = v2;
  if ( v2 )
  {
    v3 = sub_140024E3C(v2);
    if ( v3 )
      sub_1400B6010(v3);
    *a1 = v3;
    if ( v3 )
      sub_1400B6010(v3);
    return 0LL;
  }
  else
  {
    sub_1400454AC(&v5);
    return 2147942414LL;
  }
}
