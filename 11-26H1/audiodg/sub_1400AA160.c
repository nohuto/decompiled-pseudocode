/*
 * XREFs of sub_1400AA160 @ 0x1400AA160
 * Callers:
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_1400AA160(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((unsigned __int8)a2 & 3) != 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      135,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\PingPongState.h",
      -2005139387);
    return 2289827909LL;
  }
  else
  {
    *a2 = 6;
    result = 0LL;
    *(_QWORD *)(a1 + 136) = a2;
  }
  return result;
}
