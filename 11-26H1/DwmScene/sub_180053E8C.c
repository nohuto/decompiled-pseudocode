/*
 * XREFs of sub_180053E8C @ 0x180053E8C
 * Callers:
 *     sub_1800262D4 @ 0x1800262D4 (sub_1800262D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 */

__int64 __fastcall sub_180053E8C(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int *v11; // r10
  unsigned int v12; // r9d
  unsigned int v13; // r11d
  _BYTE v15[1024]; // [rsp+60h] [rbp-418h] BYREF

  switch ( a2 )
  {
    case 0:
LABEL_16:
      v7 = -1;
      goto LABEL_17;
    case 1:
      v7 = -8355712;
      v8 = 25132927;
      goto LABEL_10;
    case 2:
      v7 = -16777216;
      v8 = 0x1FFFFFF;
      goto LABEL_10;
  }
  if ( a2 != 3 && a2 != 4 )
  {
    if ( a2 == 5 )
    {
      v7 = -8421377;
LABEL_20:
      v9 = -7372801;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  v7 = -65305;
LABEL_17:
  v8 = 0xFFFFFF - v7;
  if ( a2 == 4 )
  {
    v9 = v8 | 0xFFFFFF;
    goto LABEL_11;
  }
  if ( a2 == 5 )
    goto LABEL_20;
LABEL_10:
  v9 = v8 | 0xFF000000;
LABEL_11:
  v10 = 0;
  v11 = (unsigned int *)v15;
  do
  {
    v12 = (v10 & 0xF) + 1;
    v13 = v7;
    if ( (v10 >> 4) + 1 <= 8 )
    {
      if ( v12 <= 8 )
        goto LABEL_23;
LABEL_22:
      v13 = v9;
      goto LABEL_23;
    }
    if ( v12 <= 8 )
      goto LABEL_22;
LABEL_23:
    *v11 = v13;
    ++v10;
    ++v11;
  }
  while ( v10 < 0x100 );
  return sub_180053894(a1, 16, 16, 0, 16, 0, 1, (__int64)v15, 0x400u, a4);
}
