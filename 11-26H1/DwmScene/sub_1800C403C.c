/*
 * XREFs of sub_1800C403C @ 0x1800C403C
 * Callers:
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 *     sub_1800C7CA0 @ 0x1800C7CA0 (sub_1800C7CA0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180054028 @ 0x180054028 (sub_180054028.c)
 *     sub_180054208 @ 0x180054208 (sub_180054208.c)
 *     sub_1800C2AD8 @ 0x1800C2AD8 (sub_1800C2AD8.c)
 *     sub_1800C3C1C @ 0x1800C3C1C (sub_1800C3C1C.c)
 *     sub_1800C3E50 @ 0x1800C3E50 (sub_1800C3E50.c)
 */

void __fastcall sub_1800C403C(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int16 v3; // ax
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 20;
  if ( !a1[20] )
  {
    if ( a1[21] )
    {
      sub_180054208((__int64)a1);
      v3 = sub_180054028(v2);
      v7 = sub_1800C3C1C(v6, &v13, v4, v3, v5);
    }
    else
    {
      if ( !a1[22] )
        return;
      sub_180054208((__int64)a1);
      v9 = sub_180054028(v8);
      v7 = sub_1800C3E50(v12, &v13, v10, v9, v11);
    }
    sub_1800C2AD8(v1, v7);
    sub_18000F938(&v13);
  }
}
