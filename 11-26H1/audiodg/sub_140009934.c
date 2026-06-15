/*
 * XREFs of sub_140009934 @ 0x140009934
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_1400085D0 @ 0x1400085D0 (sub_1400085D0.c)
 *     sub_140018E74 @ 0x140018E74 (sub_140018E74.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 *     sub_14006E9C0 @ 0x14006E9C0 (sub_14006E9C0.c)
 * Callees:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_1400370EC @ 0x1400370EC (sub_1400370EC.c)
 */

__int64 __fastcall sub_140009934(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v3 = sub_140009AA8(a1 + 64);
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 16LL) == 2LL && a2 == 1 )
    v5 = sub_1400370EC(v4);
  else
    v5 = sub_140009AA8(v4);
  return *(_QWORD *)v5;
}
