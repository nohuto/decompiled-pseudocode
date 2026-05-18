/*
 * XREFs of sub_180049318 @ 0x180049318
 * Callers:
 *     sub_180049250 @ 0x180049250 (sub_180049250.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 */

_QWORD *__fastcall sub_180049318(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9

  sub_180012C40(a2, a3);
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v3 + 16);
  *(_DWORD *)(v4 + 20) = *(_DWORD *)(v3 + 20);
  sub_180012C40((_QWORD *)(v4 + 24), (_QWORD *)(v3 + 24));
  sub_180012C40((_QWORD *)(v6 + 40), (_QWORD *)(v5 + 40));
  sub_180012C40((_QWORD *)(v8 + 56), (_QWORD *)(v7 + 56));
  return sub_180012C40((_QWORD *)(v10 + 72), (_QWORD *)(v9 + 72));
}
