/*
 * XREFs of sub_140023484 @ 0x140023484
 * Callers:
 *     sub_140023428 @ 0x140023428 (sub_140023428.c)
 * Callees:
 *     sub_140025084 @ 0x140025084 (sub_140025084.c)
 *     sub_1400250BC @ 0x1400250BC (sub_1400250BC.c)
 */

__int64 __fastcall sub_140023484(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  *a1 = 0LL;
  sub_1400250BC(a1 + 10, a2, a1);
  result = sub_140025084(v2 + 88);
  *(_QWORD *)(v4 + 168) = v5;
  *(_DWORD *)(v4 + 8) = 3;
  *(_QWORD *)(v4 + 16) = v5;
  *(_QWORD *)(v4 + 24) = v5;
  *(_QWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 40) = v5;
  *(_QWORD *)(v4 + 48) = v5;
  *(_QWORD *)(v4 + 56) = v5;
  *(_DWORD *)(v4 + 64) = v5;
  *(_DWORD *)(v4 + 68) = 1;
  *(_DWORD *)(v4 + 72) = 72;
  return result;
}
