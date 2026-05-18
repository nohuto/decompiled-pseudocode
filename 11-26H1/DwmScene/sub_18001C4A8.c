/*
 * XREFs of sub_18001C4A8 @ 0x18001C4A8
 * Callers:
 *     sub_18001C4F0 @ 0x18001C4F0 (sub_18001C4F0.c)
 * Callees:
 *     sub_18000DC90 @ 0x18000DC90 (sub_18000DC90.c)
 */

void __fastcall __noreturn sub_18001C4A8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_18000DC90(
    a1,
    34LL,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\global\\dllmain.cpp",
    a4,
    v4,
    retaddr,
    a4);
}
