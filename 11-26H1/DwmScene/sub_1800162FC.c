/*
 * XREFs of sub_1800162FC @ 0x1800162FC
 * Callers:
 *     sub_1800180D0 @ 0x1800180D0 (sub_1800180D0.c)
 *     sub_1800536E8 @ 0x1800536E8 (sub_1800536E8.c)
 *     sub_18007D8E0 @ 0x18007D8E0 (sub_18007D8E0.c)
 *     sub_18007E2A0 @ 0x18007E2A0 (sub_18007E2A0.c)
 *     sub_180083E30 @ 0x180083E30 (sub_180083E30.c)
 *     sub_180084E40 @ 0x180084E40 (sub_180084E40.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

_QWORD *__fastcall sub_1800162FC(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx

  v2 = a2[1];
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    v4 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v5 = v2;
  }
  *a1 = v4;
  v6 = (volatile signed __int32 *)a1[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010F00(v6);
  return a1;
}
