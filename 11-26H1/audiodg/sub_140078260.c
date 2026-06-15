/*
 * XREFs of sub_140078260 @ 0x140078260
 * Callers:
 *     sub_140076D48 @ 0x140076D48 (sub_140076D48.c)
 * Callees:
 *     sub_140017258 @ 0x140017258 (sub_140017258.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 */

__int64 *__fastcall sub_140078260(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v6 = a2;
    sub_140017258(&v6, a2, a2);
    v3 = *a1;
    *a1 = v4;
    if ( v3 )
      sub_140017850(v3);
  }
  return a1;
}
