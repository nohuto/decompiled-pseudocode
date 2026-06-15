/*
 * XREFs of sub_14001B01C @ 0x14001B01C
 * Callers:
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 * Callees:
 *     sub_14001B0E4 @ 0x14001B0E4 (sub_14001B0E4.c)
 *     sub_14001B16C @ 0x14001B16C (sub_14001B16C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14001B01C(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v3 = sub_140049338(136LL, &unk_1400C75FC);
  if ( v3 )
  {
    v4 = sub_14001B0E4(v3);
    v8 = v4;
    v7 = 0LL;
    v5 = sub_14001B16C(v4, *a2);
    if ( v5 < 0 )
    {
      if ( v4 )
        sub_1400B6010(v4);
      sub_1400454AC(&v7);
    }
    else
    {
      v5 = sub_1400B6010(v4);
      sub_1400B6010(v4);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
