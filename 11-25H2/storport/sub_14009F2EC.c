/*
 * XREFs of sub_14009F2EC @ 0x14009F2EC
 * Callers:
 *     sub_14017DB34 @ 0x14017DB34 (sub_14017DB34.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 */

__int64 __fastcall sub_14009F2EC(__int64 a1, wchar_t **a2)
{
  wchar_t *v4; // rax
  wchar_t *v5; // rdi
  __int64 result; // rax

  v4 = (wchar_t *)sub_1400143E0(256LL, 40LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 )
      result = sub_14003BCD4(v4, 20LL, L"%06x", *(_DWORD *)(a1 + 104) & 0xFFFFFF);
    else
      result = sub_14003BCD4(
                 v4,
                 20LL,
                 L"%02x%02x%02x",
                 *(unsigned __int8 *)(a1 + 104),
                 *(unsigned __int8 *)(a1 + 105),
                 *(unsigned __int8 *)(a1 + 106));
  }
  else
  {
    result = 3221225495LL;
  }
  *a2 = v5;
  return result;
}
