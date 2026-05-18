/*
 * XREFs of sub_180055ABC @ 0x180055ABC
 * Callers:
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 * Callees:
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_1800551CC @ 0x1800551CC (sub_1800551CC.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180055ABC(__int64 a1)
{
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002AEFC((__int64)v3, a1 + 128);
  if ( *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_1800551CC(a1, v3);
  }
  return sub_18002B3C4((__int64)v3);
}
