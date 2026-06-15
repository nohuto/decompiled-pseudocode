/*
 * XREFs of sub_14009D580 @ 0x14009D580
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14009D580(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  sub_1400B6010(*(_QWORD *)(a1 + 32));
  v2 = v1;
  if ( v1 >= 0 )
  {
    sub_1400B6010(v6);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 1814;
  }
  else
  {
    v3 = 1813;
  }
  sub_14000C2A8(
    (int)retaddr,
    v3,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    v1);
LABEL_7:
  sub_140003238(&v6);
  return v2;
}
