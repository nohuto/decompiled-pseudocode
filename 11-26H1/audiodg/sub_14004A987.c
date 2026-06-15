/*
 * XREFs of sub_14004A987 @ 0x14004A987
 * Callers:
 *     sub_14004AA06 @ 0x14004AA06 (sub_14004AA06.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004A987(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&dword_1400E30F0, v4);
  return v5(a1, a2, a3, a4);
}
