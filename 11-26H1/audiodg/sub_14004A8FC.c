/*
 * XREFs of sub_14004A8FC @ 0x14004A8FC
 * Callers:
 *     sub_14004A97B @ 0x14004A97B (sub_14004A97B.c)
 *     sub_14004BA43 @ 0x14004BA43 (sub_14004BA43.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004A8FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&dword_1400E30D0, v4);
  return v5(a1, a2, a3, a4);
}
