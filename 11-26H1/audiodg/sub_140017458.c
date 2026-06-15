/*
 * XREFs of sub_140017458 @ 0x140017458
 * Callers:
 *     sub_14001A7C0 @ 0x14001A7C0 (sub_14001A7C0.c)
 *     sub_14007D9A8 @ 0x14007D9A8 (sub_14007D9A8.c)
 * Callees:
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 */

__int64 *__fastcall sub_140017458(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    sub_140017850(v4);
  return a1;
}
