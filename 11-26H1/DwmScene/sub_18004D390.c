/*
 * XREFs of sub_18004D390 @ 0x18004D390
 * Callers:
 *     sub_18004D2E8 @ 0x18004D2E8 (sub_18004D2E8.c)
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_1800DB8F9 @ 0x1800DB8F9 (sub_1800DB8F9.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18004D390(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_180010EC8(v4);
  return result;
}
