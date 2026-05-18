/*
 * XREFs of sub_1800145A0 @ 0x1800145A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 */

__int64 __fastcall sub_1800145A0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  try
  {
    sub_18007EB5C(v1, &unk_1801CBDB8);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      149LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
