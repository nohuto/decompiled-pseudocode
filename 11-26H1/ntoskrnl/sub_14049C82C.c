/*
 * XREFs of sub_14049C82C @ 0x14049C82C
 * Callers:
 *     sub_140886BA8 @ 0x140886BA8 (sub_140886BA8.c)
 *     sub_1409ECDC8 @ 0x1409ECDC8 (sub_1409ECDC8.c)
 * Callees:
 *     sub_14049C8A0 @ 0x14049C8A0 (sub_14049C8A0.c)
 *     sub_14049C900 @ 0x14049C900 (sub_14049C900.c)
 */

__int64 __fastcall sub_14049C82C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v8 = a5 - a3;
  v10 = a2;
  v11 = a1;
  v12 = 0;
  v15 = a3;
  v12 = sub_14049C8A0(&v10, (unsigned int)(a5 - a3));
  v13 = v8 + a7;
  v14 = v12;
  sub_14049C900(&v10, a6 - a5, a4);
  return 0LL;
}
