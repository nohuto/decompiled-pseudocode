/*
 * XREFs of sub_140040EE0 @ 0x140040EE0
 * Callers:
 *     sub_14007D9A8 @ 0x14007D9A8 (sub_14007D9A8.c)
 * Callees:
 *     sub_140017258 @ 0x140017258 (sub_140017258.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_1400182D4 @ 0x1400182D4 (sub_1400182D4.c)
 *     sub_140018318 @ 0x140018318 (sub_140018318.c)
 *     sub_14003E360 @ 0x14003E360 (sub_14003E360.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

__int64 __fastcall sub_140040EE0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r8
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_QWORD *)sub_140049338(40LL, &unk_1400C75FC);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  sub_1400182D4(v4);
  v5[2] = 0LL;
  *v5 = off_1400BA728;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v12 = 0LL;
  sub_14003E360((__int64 *)&v12, (__int64)v5);
  v7 = v12;
  v8 = *a2;
  v13 = 0LL;
  v10 = sub_140018318(v12, v8);
  if ( v10 >= 0 )
  {
    sub_140017258((__int64 *)&v12, v9, v11);
    *a1 = v7;
    if ( v7 )
      sub_140017850((__int64)v7);
    v10 = 0;
  }
  else if ( v7 )
  {
    sub_140017850((__int64)v7);
  }
  sub_1400454AC(&v13);
  return (unsigned int)v10;
}
