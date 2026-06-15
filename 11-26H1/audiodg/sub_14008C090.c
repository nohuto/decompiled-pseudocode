/*
 * XREFs of sub_14008C090 @ 0x14008C090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008C090(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // ebx
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 - 48;
  if ( (*(_BYTE *)(v1 + 184) & 1) == 0 )
  {
    v2 = -2147467262;
    v3 = 172;
LABEL_3:
    sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v2);
    return (unsigned int)v2;
  }
  v2 = sub_1400B6010(v1);
  if ( v2 < 0 )
  {
    v3 = 173;
    goto LABEL_3;
  }
  return 0LL;
}
