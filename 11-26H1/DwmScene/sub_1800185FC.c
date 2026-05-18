/*
 * XREFs of sub_1800185FC @ 0x1800185FC
 * Callers:
 *     sub_180018C70 @ 0x180018C70 (sub_180018C70.c)
 *     sub_180018CB0 @ 0x180018CB0 (sub_180018CB0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800185FC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_180010EC8(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
