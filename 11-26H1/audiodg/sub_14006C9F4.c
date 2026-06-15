/*
 * XREFs of sub_14006C9F4 @ 0x14006C9F4
 * Callers:
 *     sub_14003FD14 @ 0x14003FD14 (sub_14003FD14.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140064A88 @ 0x140064A88 (sub_140064A88.c)
 *     sub_14006CC44 @ 0x14006CC44 (sub_14006CC44.c)
 */

__int64 __fastcall sub_14006C9F4(__int64 ***a1, int a2)
{
  __int64 **v2; // r14
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  __int64 *v6; // rax
  int v7; // edi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 ***v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a1;
  v11 = a1;
  v12 = 0LL;
  v13 = &v12;
  v4 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      v5 = (__int64 *)*v4;
      v6 = sub_140064A88(&v14, v4 + 2);
      v7 = *(_DWORD *)(*v6 + 16);
      sub_140003238(v6);
      if ( v7 == a2 )
      {
        v11[1] = (__int64 **)((char *)v11[1] - 1);
        v8 = (_QWORD *)*v4;
        *v4 = 0LL;
        v9 = (_QWORD *)v4[1];
        *v9 = v8;
        v8[1] = v9;
        *v13 = (__int64)v4;
        v13 = v4;
      }
      v4 = v5;
    }
    while ( v5 != (__int64 *)v2 );
  }
  return sub_14006CC44(&v11);
}
