/*
 * XREFs of sub_1800BC270 @ 0x1800BC270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_1800268A0 @ 0x1800268A0 (sub_1800268A0.c)
 */

__int64 __fastcall sub_1800BC270(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r11
  __int64 result; // rax

  sub_1800268A0(a1, a2);
  *(_QWORD *)(a2 + 80) = sub_1800141BC(a1 + 4600);
  *(_QWORD *)(a2 + 88) = v4;
  *(_DWORD *)(a2 + 96) = v5;
  *(_DWORD *)(a2 + 100) = v6;
  *(_QWORD *)(a2 + 104) = v7;
  result = *(unsigned int *)(a1 + 4632);
  *(_DWORD *)(a2 + 112) = result;
  return result;
}
