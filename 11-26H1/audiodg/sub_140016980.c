/*
 * XREFs of sub_140016980 @ 0x140016980
 * Callers:
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_140016310 @ 0x140016310 (sub_140016310.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 * Callees:
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140016980(__int64 a1)
{
  *(_BYTE *)(a1 + 76) = 1;
  sub_140015C58(*(void **)(a1 + 280));
  if ( *(_QWORD *)(a1 + 4696) )
  {
    sub_1400B6010(*(_QWORD *)(a1 + 4688));
    *(_QWORD *)(a1 + 4696) = 0LL;
  }
  sub_14000EE10((__int64 *)(a1 + 4688));
  WaitForSingleObjectEx(*(HANDLE *)(a1 + 120), 0xFFFFFFFF, 0);
  sub_140016858((void **)(a1 + 120), 0LL);
}
