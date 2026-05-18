/*
 * XREFs of sub_18000C1C0 @ 0x18000C1C0
 * Callers:
 *     sub_18000BD70 @ 0x18000BD70 (sub_18000BD70.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000CCA0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__cexit @ 0x18000CD5A (_o__cexit.c)
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 */

__int64 sub_18000C1C0()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table(&xmmword_1801C7D80);
  result = sub_18000D948();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
