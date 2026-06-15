/*
 * XREFs of sub_140078220 @ 0x140078220
 * Callers:
 *     sub_140076CA0 @ 0x140076CA0 (sub_140076CA0.c)
 * Callees:
 *     sub_140017258 @ 0x140017258 (sub_140017258.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 */

__int64 *__fastcall sub_140078220(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v7 = *a2;
    sub_140017258(&v7, (__int64)a2, v2);
    v4 = *a1;
    *a1 = v5;
    if ( v4 )
      sub_140017850(v4);
  }
  return a1;
}
