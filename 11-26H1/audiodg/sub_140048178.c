/*
 * XREFs of sub_140048178 @ 0x140048178
 * Callers:
 *     sub_140008D80 @ 0x140008D80 (sub_140008D80.c)
 *     sub_140035DA0 @ 0x140035DA0 (sub_140035DA0.c)
 *     sub_140036AC0 @ 0x140036AC0 (sub_140036AC0.c)
 *     sub_140036D40 @ 0x140036D40 (sub_140036D40.c)
 *     sub_14006E240 @ 0x14006E240 (sub_14006E240.c)
 * Callees:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 */

__int64 __fastcall sub_140048178(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v3 = (_QWORD **)sub_140009AA8((_QWORD *)(a2 + 64), a2);
  v5 = sub_140009AA8(*v3, v4);
  return sub_140009018(a1, -(__int64)(*(_BYTE *)(a1 + 318) != 0) - 1, *(_QWORD *)(*(_QWORD *)v5 + 8LL));
}
