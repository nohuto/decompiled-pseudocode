/*
 * XREFs of sub_1400536E8 @ 0x1400536E8
 * Callers:
 *     sub_14000C348 @ 0x14000C348 (sub_14000C348.c)
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 * Callees:
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 */

__int64 __fastcall sub_1400536E8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  *(_BYTE *)(a1 + 4560) = 0;
  v3 = 316LL;
  if ( *(_DWORD *)a1 != 1314275652 )
    v3 = 524LL;
  result = sub_14002285C(((*(_DWORD *)(v3 + a1) + 7) & 0xFFFFFFF8) + 1184, a2, (_QWORD *)a1);
  *(_QWORD *)(a1 + 4552) = result;
  return result;
}
