/*
 * XREFs of sub_140008174 @ 0x140008174
 * Callers:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 * Callees:
 *     sub_140007C98 @ 0x140007C98 (sub_140007C98.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140008174(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = (__int64 *)*a1;
  if ( !*a1 )
    sub_14004639C(2147500037LL, 0LL);
  v2 = *v1;
  v3 = v1[2];
  *a1 = *v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    a1[1] = 0LL;
  sub_140007C98((__int64)a1, v1);
  return v3;
}
