/*
 * XREFs of sub_1800D3F18 @ 0x1800D3F18
 * Callers:
 *     sub_1800D4000 @ 0x1800D4000 (sub_1800D4000.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 */

__int64 __fastcall sub_1800D3F18(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = sub_180013494(a1 + 24, a2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_180010EC8(v4);
  return result;
}
