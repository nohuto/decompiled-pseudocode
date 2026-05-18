/*
 * XREFs of sub_1800D28FC @ 0x1800D28FC
 * Callers:
 *     sub_1800D37C0 @ 0x1800D37C0 (sub_1800D37C0.c)
 *     sub_1800E533A @ 0x1800E533A (sub_1800E533A.c)
 * Callees:
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 */

__int64 __fastcall sub_1800D28FC(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return sub_180038908((volatile __int32 *)(*(_QWORD *)v2 + 256LL), a2, 5);
  return result;
}
