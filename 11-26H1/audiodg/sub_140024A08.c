/*
 * XREFs of sub_140024A08 @ 0x140024A08
 * Callers:
 *     sub_1400249A8 @ 0x1400249A8 (sub_1400249A8.c)
 * Callees:
 *     sub_140024A80 @ 0x140024A80 (sub_140024A80.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140024A08(_QWORD *a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = 0LL;
  v1 = sub_140024A80(&v4);
  if ( v1 >= 0 )
  {
    v2 = v4;
    v1 = sub_1400B6010(v4);
    sub_1400B6010(v2);
  }
  return (unsigned int)v1;
}
