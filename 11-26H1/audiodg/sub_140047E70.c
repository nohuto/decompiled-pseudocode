/*
 * XREFs of sub_140047E70 @ 0x140047E70
 * Callers:
 *     sub_14006CC8C @ 0x14006CC8C (sub_14006CC8C.c)
 * Callees:
 *     sub_140019100 @ 0x140019100 (sub_140019100.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140046548 @ 0x140046548 (sub_140046548.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140047E70(__int64 *a1, int *a2)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]
  __int64 v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = sub_140049338(112LL, &unk_1400C75FC);
  v8 = v4;
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  v10 = v4;
  v6 = sub_140019100(v4);
  v8 = 0LL;
  v7 = sub_140046548(v6, *a2);
  if ( v7 >= 0 )
  {
    if ( v6 )
      sub_1400B6010(v6);
    *a1 = v6;
    if ( v6 )
      sub_1400B6010(v6);
    v7 = 0;
  }
  else if ( v6 )
  {
    sub_1400B6010(v6);
  }
  sub_1400454AC(&v8);
  return (unsigned int)v7;
}
