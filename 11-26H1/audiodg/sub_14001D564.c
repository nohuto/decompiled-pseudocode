/*
 * XREFs of sub_14001D564 @ 0x14001D564
 * Callers:
 *     sub_1400566C0 @ 0x1400566C0 (sub_1400566C0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140098BF0 @ 0x140098BF0 (sub_140098BF0.c)
 *     sub_1400A21A0 @ 0x1400A21A0 (sub_1400A21A0.c)
 *     sub_1400AD1E4 @ 0x1400AD1E4 (sub_1400AD1E4.c)
 *     sub_1400AD2E8 @ 0x1400AD2E8 (sub_1400AD2E8.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14001D564(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v3 = sub_140049338(24LL, &unk_1400C75FC);
  v4 = (_QWORD *)v3;
  v7 = v3;
  if ( v3 )
  {
    sub_140017D8C(v3);
    *v4 = off_1400B9178;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v4 = off_1400B9148;
    v4[2] = 0LL;
    sub_14001D640(v4 + 2, *a2);
    v5 = sub_1400B6010(v4);
    sub_1400B6010(v4);
    return v5;
  }
  else
  {
    sub_1400454AC(&v7);
    return 2147942414LL;
  }
}
