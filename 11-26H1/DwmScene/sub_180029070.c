/*
 * XREFs of sub_180029070 @ 0x180029070
 * Callers:
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_180042FF0 @ 0x180042FF0 (sub_180042FF0.c)
 *     sub_180046AD0 @ 0x180046AD0 (sub_180046AD0.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_1800533F0 @ 0x1800533F0 (sub_1800533F0.c)
 *     sub_18006B040 @ 0x18006B040 (sub_18006B040.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     sub_180081EFC @ 0x180081EFC (sub_180081EFC.c)
 *     sub_180083A90 @ 0x180083A90 (sub_180083A90.c)
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 * Callees:
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 */

__int64 __fastcall sub_180029070(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)a2 + 244LL);
  result = sub_180028BD0((__int64 *)(a1 + 80), (__int64)v3, &v4);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 0;
  return result;
}
