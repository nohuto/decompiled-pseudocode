/*
 * XREFs of sub_180097AA0 @ 0x180097AA0
 * Callers:
 *     sub_180097A5C @ 0x180097A5C (sub_180097A5C.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_180097AA0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  *a2 = *a3;
  sub_18001D260((__int64)(a2 + 2), (__int64)(a3 + 2));
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v3 + 40);
  result = *(_QWORD *)(v3 + 48);
  *(_QWORD *)(v4 + 48) = result;
  return result;
}
