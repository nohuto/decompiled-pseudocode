/*
 * XREFs of sub_14006D4DC @ 0x14006D4DC
 * Callers:
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 * Callees:
 *     sub_14000EB00 @ 0x14000EB00 (sub_14000EB00.c)
 */

__int64 __fastcall sub_14006D4DC(__int64 a1, __int64 a2)
{
  bool v2; // al
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax

  *(_BYTE *)(a2 + 4) = *(_BYTE *)(a1 + 36);
  v2 = sub_14000EB00(a1);
  *(_BYTE *)(v3 + 5) = v2;
  *(_DWORD *)v3 = *(_DWORD *)(v4 + 4);
  v5 = *(_QWORD *)(v4 + 88);
  *(_DWORD *)(v3 + 8) = (v5 >> 2) & 0x3FFFFFFF;
  *(_DWORD *)(v3 + 12) = v5 / 0x100000000LL;
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v4 + 16);
  result = *(unsigned int *)(v4 + 20);
  *(_DWORD *)(v3 + 20) = result;
  return result;
}
