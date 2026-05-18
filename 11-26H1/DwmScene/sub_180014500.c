/*
 * XREFs of sub_180014500 @ 0x180014500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 */

__int64 __fastcall sub_180014500(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  try
  {
    sub_18007EB5C(v1, &unk_1801CBE38);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      109LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
