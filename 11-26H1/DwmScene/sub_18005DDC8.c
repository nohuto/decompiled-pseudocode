/*
 * XREFs of sub_18005DDC8 @ 0x18005DDC8
 * Callers:
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 * Callees:
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 */

__int64 __fastcall sub_18005DDC8(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  const char *v9; // rdx
  size_t v10; // r8

  v4 = (__int64)(a1 + 18);
  a1[26] = 40960;
  sub_18001490C((__int64)(a1 + 18), "<unknown>", 9uLL);
  if ( (int)a1[26] >= 40960 )
  {
    v9 = "ShaderModel40_Level93";
    v10 = (*(_DWORD *)(a2 + 560) & 4) != 0 ? 21LL : 13LL;
    if ( (*(_DWORD *)(a2 + 560) & 4) == 0 )
      v9 = "ShaderModel40";
    goto LABEL_10;
  }
  if ( (int)a1[26] >= 37632 )
  {
    v9 = "ShaderModel40_Level93";
LABEL_9:
    v10 = 21LL;
LABEL_10:
    sub_18001490C(v4, v9, v10);
    return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
  }
  if ( (int)a1[26] >= 37120 )
  {
    v9 = "ShaderModel40_Level91";
    goto LABEL_9;
  }
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
}
