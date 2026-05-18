/*
 * XREFs of sub_1800182A8 @ 0x1800182A8
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180018204 @ 0x180018204 (sub_180018204.c)
 */

__int64 __fastcall sub_1800182A8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  sub_180018204((__int64 *)(a1 + 48), a2 + 48);
  sub_180012C40((_QWORD *)(a1 + 72), (_QWORD *)(a2 + 72));
  result = a1;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return result;
}
