/*
 * XREFs of sub_140009400 @ 0x140009400
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_140008D80 @ 0x140008D80 (sub_140008D80.c)
 * Callees:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_1400370EC @ 0x1400370EC (sub_1400370EC.c)
 */

__int64 __fastcall sub_140009400(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax

  v1 = a1 + 64;
  if ( *(_QWORD *)(*(_QWORD *)sub_140009AA8(a1 + 64) + 16LL) != 2LL )
    return 0LL;
  v2 = (_QWORD *)sub_140009AA8(v1);
  return *(_QWORD *)sub_1400370EC(*v2);
}
