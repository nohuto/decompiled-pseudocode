/*
 * XREFs of sub_1400A3270 @ 0x1400A3270
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 */

__int64 __fastcall sub_1400A3270(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13,
        _QWORD *a14)
{
  int v15; // eax
  unsigned int v16; // esi
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v15 = sub_1400A10D0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v16 = v15;
  if ( v15 >= 0 )
  {
    *(_QWORD *)(a1 + 312) = a1 - 424;
    result = 0LL;
    *(_BYTE *)(a1 + 148) = a10 & 1;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      40,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpserverinputendpoint.cpp",
      v15);
    return v16;
  }
  return result;
}
