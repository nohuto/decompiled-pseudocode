/*
 * XREFs of sub_14003953C @ 0x14003953C
 * Callers:
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14003953C(int *a1)
{
  int v1; // edx
  _WORD *v2; // rax
  int v4; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( *a1 && (unsigned int)(v1 - 1) > 2 )
  {
    v4 = 176;
    goto LABEL_18;
  }
  if ( !a1[4] && a1[23] )
  {
    v4 = 180;
    goto LABEL_18;
  }
  if ( (v1 == 2 || v1 == 3) && (a1[23] || *((_QWORD *)a1 + 3)) )
  {
    v4 = 185;
    goto LABEL_18;
  }
  if ( (unsigned int)a1[23] > 5 )
  {
    v4 = 188;
    goto LABEL_18;
  }
  v2 = (_WORD *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    if ( (unsigned int)a1[4] < 0x12 )
    {
      v4 = 193;
      goto LABEL_18;
    }
    if ( *v2 == 0xFFFE && (unsigned int)a1[4] < 0x28 )
    {
      v4 = 194;
      goto LABEL_18;
    }
  }
  if ( (unsigned int)a1[10] < 0x12 )
  {
    v4 = 198;
  }
  else if ( **((_WORD **)a1 + 6) == 0xFFFE && (unsigned int)a1[10] < 0x28 )
  {
    v4 = 199;
  }
  else
  {
    if ( !a1[22] || a1[22] == 3 )
      return 0LL;
    v4 = 202;
  }
LABEL_18:
  sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", -2147024809);
  return 2147942487LL;
}
