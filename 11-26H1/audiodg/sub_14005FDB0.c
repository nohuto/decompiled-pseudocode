/*
 * XREFs of sub_14005FDB0 @ 0x14005FDB0
 * Callers:
 *     sub_14005FF00 @ 0x14005FF00 (sub_14005FF00.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005F890 @ 0x14005F890 (sub_14005F890.c)
 */

__int64 __fastcall sub_14005FDB0(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)(a1 + 144);
  if ( v2 )
  {
    sub_14005F890(v2, *(__int64 **)(a1 + 152));
    sub_1400453E4(*(_QWORD *)(a1 + 144), (*(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 144)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  sub_140003238((__int64 *)(a1 + 88));
  sub_140003238((__int64 *)(a1 + 80));
  sub_140008C08((void **)(a1 + 72), 0LL);
  return sub_14005FD8C(a1);
}
