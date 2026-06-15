/*
 * XREFs of sub_1400B155B @ 0x1400B155B
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004E454 @ 0x14004E454 (sub_14004E454.c)
 */

__int64 __fastcall sub_1400B155B(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  **(_BYTE **)(a2 + 168) = 1;
  v3 = *(_QWORD *)(a2 + 48);
  sub_14004E454(v3, *(_WORD **)(a2 + 152), *(_QWORD *)(a2 + 160));
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(a2 + 76) = *(_DWORD *)(v3 + 36);
  *(_DWORD *)(a2 + 80) = (unsigned __int8)(*(_BYTE *)(v3 + 28) & 8) >> 3;
  return 0LL;
}
