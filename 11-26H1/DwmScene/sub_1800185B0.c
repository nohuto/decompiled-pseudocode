/*
 * XREFs of sub_1800185B0 @ 0x1800185B0
 * Callers:
 *     sub_180018C30 @ 0x180018C30 (sub_180018C30.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800185B0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    result = sub_180010EC8(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    result = sub_180010EC8(v5);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
