/*
 * XREFs of sub_14001727C @ 0x14001727C
 * Callers:
 *     sub_14001A7C0 @ 0x14001A7C0 (sub_14001A7C0.c)
 * Callees:
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_1400182D4 @ 0x1400182D4 (sub_1400182D4.c)
 *     sub_140018318 @ 0x140018318 (sub_140018318.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

__int64 __fastcall sub_14001727C(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = sub_140049338(40LL, &unk_1400C75FC);
  v5 = (_QWORD *)v4;
  if ( !v4 )
    return 2147942414LL;
  sub_1400182D4(v4);
  v5[2] = 0LL;
  *v5 = off_1400BA728;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v6 = *a2;
  v11 = 0LL;
  v8 = sub_140018318(v5, v6);
  if ( v8 < 0 )
  {
    sub_140017850(v5);
    sub_1400454AC(&v11);
    return (unsigned int)v8;
  }
  else
  {
    sub_140017CB0((char *)v5 + 12, v7, v9);
    *a1 = v5;
    sub_140017850(v5);
    return 0LL;
  }
}
