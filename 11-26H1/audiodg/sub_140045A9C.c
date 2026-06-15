/*
 * XREFs of sub_140045A9C @ 0x140045A9C
 * Callers:
 *     sub_14002FDD4 @ 0x14002FDD4 (sub_14002FDD4.c)
 *     sub_14002FE6C @ 0x14002FE6C (sub_14002FE6C.c)
 *     sub_140045974 @ 0x140045974 (sub_140045974.c)
 *     sub_140045A08 @ 0x140045A08 (sub_140045A08.c)
 *     sub_14004ED0C @ 0x14004ED0C (sub_14004ED0C.c)
 * Callees:
 *     sub_14002F0F4 @ 0x14002F0F4 (sub_14002F0F4.c)
 */

__int64 __fastcall sub_140045A9C(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // r8
  _QWORD **v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v7 = &v6;
  v2 = *a1;
  v6 = 0LL;
  while ( v2 )
  {
    if ( v2[1] == *a2 )
    {
      v3 = *a1;
      v2 = (_QWORD *)**a1;
      *v3 = 0LL;
      *a1 = v2;
      *v7 = (__int64)v3;
      v7 = v3;
    }
    else
    {
      a1 = (_QWORD **)v2;
      v2 = (_QWORD *)*v2;
    }
  }
  return sub_14002F0F4((__int64)&v5);
}
