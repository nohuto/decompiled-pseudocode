/*
 * XREFs of sub_140034E18 @ 0x140034E18
 * Callers:
 *     sub_140023C54 @ 0x140023C54 (sub_140023C54.c)
 *     sub_1400253A8 @ 0x1400253A8 (sub_1400253A8.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140034E18(unsigned int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a3 + 24) = a1;
  v6 = sub_1400B6010(a2);
  if ( v6 < 0 )
  {
    v11 = 294;
LABEL_10:
    sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v6);
    return (unsigned int)v6;
  }
  v6 = sub_1400B6010(a2);
  if ( v6 < 0 )
  {
    v11 = 295;
    goto LABEL_10;
  }
  v7 = 0;
  *(_OWORD *)a3 = xmmword_1400C5548;
  while ( 1 )
  {
    if ( v7 >= a1 )
      return 0LL;
    v8 = sub_1400B6010(a2);
    v9 = v8;
    if ( v8 < 0 )
      break;
    ++v7;
  }
  sub_14000C2A8((int)retaddr, 299, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
  return v9;
}
