/*
 * XREFs of sub_1800C18B8 @ 0x1800C18B8
 * Callers:
 *     sub_1800C0B9C @ 0x1800C0B9C (sub_1800C0B9C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 *     sub_18002E4EC @ 0x18002E4EC (sub_18002E4EC.c)
 */

_QWORD *__fastcall sub_1800C18B8(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r10
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 *v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)*a1;
  v6 = a3;
  v14 = a3;
  if ( a3 == *v4 && *(_BYTE *)(a4 + 25) )
  {
    sub_18002E4EC((__int64)a1, (__int64)a1, v4[1]);
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    a1[1] = 0LL;
  }
  else
  {
    while ( v6 != a4 )
    {
      sub_18001D6F4(&v14, (__int64)a2);
      v15 = v10;
      sub_18001D6F4(&v15, v11);
      v13 = sub_1800287AC(a1, v12);
      sub_18000E26C(v13, 0x30uLL);
      v6 = v14;
    }
  }
  *a2 = a4;
  return a2;
}
