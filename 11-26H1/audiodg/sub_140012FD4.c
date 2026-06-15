/*
 * XREFs of sub_140012FD4 @ 0x140012FD4
 * Callers:
 *     sub_1400135E0 @ 0x1400135E0 (sub_1400135E0.c)
 * Callees:
 *     sub_14001502C @ 0x14001502C (sub_14001502C.c)
 */

__int64 __fastcall sub_140012FD4(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  sub_14001502C();
  *(_OWORD *)(a1 + 104) = *a2;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  result = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = result;
  *(_DWORD *)(a1 + 8) = 1;
  return result;
}
