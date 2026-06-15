/*
 * XREFs of sub_1400873E0 @ 0x1400873E0
 * Callers:
 *     sub_140087590 @ 0x140087590 (sub_140087590.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005F890 @ 0x14005F890 (sub_14005F890.c)
 */

__int64 __fastcall sub_1400873E0(__int64 a1)
{
  __int64 *v2; // rcx

  sub_140056130((__int64 *)(a1 + 120));
  sub_140056130((__int64 *)(a1 + 112));
  sub_140056130((__int64 *)(a1 + 104));
  sub_140003238((__int64 *)(a1 + 96));
  v2 = *(__int64 **)(a1 + 48);
  if ( v2 )
  {
    sub_14005F890(v2, *(__int64 **)(a1 + 56));
    sub_1400453E4(*(_QWORD *)(a1 + 48), (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return sub_140050010(a1);
}
