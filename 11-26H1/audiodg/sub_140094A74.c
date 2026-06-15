/*
 * XREFs of sub_140094A74 @ 0x140094A74
 * Callers:
 *     sub_1400940C0 @ 0x1400940C0 (sub_1400940C0.c)
 *     sub_1400941C4 @ 0x1400941C4 (sub_1400941C4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140094A74(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_1400B6010(a2);
  v4 = v2;
  if ( v2 >= 0 )
    return sub_1400470EC(
             (int)retaddr,
             57,
             (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
             v3);
  sub_14000C2A8(
    (int)retaddr,
    56,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
    v2);
  return v4;
}
