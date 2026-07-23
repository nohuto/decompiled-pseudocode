/*
 * XREFs of sub_1409EBD68 @ 0x1409EBD68
 * Callers:
 *     sub_140886A3C @ 0x140886A3C (sub_140886A3C.c)
 * Callees:
 *     sub_1409EB4C0 @ 0x1409EB4C0 (sub_1409EB4C0.c)
 *     sub_1409EC174 @ 0x1409EC174 (sub_1409EC174.c)
 */

__int64 __fastcall sub_1409EBD68(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1409EB4C0(a1 + 136, a2, 16LL, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1409EC174(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
