/*
 * XREFs of sub_180014640 @ 0x180014640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 */

__int64 sub_180014640()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_18007ED34();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      181LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
