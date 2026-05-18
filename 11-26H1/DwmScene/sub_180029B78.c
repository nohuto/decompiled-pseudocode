/*
 * XREFs of sub_180029B78 @ 0x180029B78
 * Callers:
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_180029B78(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = sub_180010EC8(v2);
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
    return sub_180010F00(v5);
  return result;
}
