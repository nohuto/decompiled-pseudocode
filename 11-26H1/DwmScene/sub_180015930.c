/*
 * XREFs of sub_180015930 @ 0x180015930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 */

__int64 __fastcall sub_180015930(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a2 - 0x4BD1CD637052B94FLL;
  if ( *a2 == 0x4BD1CD637052B94FLL )
    v4 = a2[1] + 0x2492ED948E7B4D49LL;
  if ( v4 )
  {
    sub_1800102C4(
      retaddr,
      113LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      2147942487LL);
    return 2147942487LL;
  }
  else
  {
    v6 = a1 + 16;
    sub_1800151CC(a1 + 16);
    *a3 = v6 & -(__int64)(a1 != 0);
    return 0LL;
  }
}
