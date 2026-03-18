/*
 * XREFs of TintAngle @ 0x1402F5A24
 * Callers:
 *     pDCIAdjClr @ 0x14013DCBC (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TintAngle(int a1, __int64 a2, int *a3, int *a4)
{
  __int64 result; // rax
  int v7; // edi
  int v8; // r8d
  int v9; // r11d
  int v10; // ebp
  int v11; // r8d
  int v12; // r9d
  int v13; // r9d

  result = (unsigned int)(a1 + 100);
  if ( (unsigned int)result > 0xC8 )
  {
    a1 = 100;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  if ( a1 > 0 )
    goto LABEL_3;
  a1 = -a1;
  v7 = 1;
  if ( !a1 )
  {
    *a4 = 0;
    *a3 = 0;
    return result;
  }
LABEL_4:
  v8 = 6 * a1;
  if ( 6 * a1 >= 900 )
    v8 = 6 * (300 - a1);
  v9 = v8 / 10;
  v10 = v8 / 10 + 1;
  v11 = v8 % 10;
  v12 = SinNumber[v9];
  if ( v11 )
    v12 += (v11 * (SinNumber[v10] - v12) + 5) / 10;
  if ( !v7 )
    v12 = -v12;
  *a3 = v12;
  if ( v11 )
  {
    v9 = v10;
    v11 = 10 - v11;
  }
  v13 = SinNumber[90 - v9];
  if ( v11 )
    v13 += (v11 * (SinNumber[90 - v9 + 1] - v13) + 5) / 10;
  result = (unsigned int)-v13;
  if ( 6 * a1 >= 900 )
    v13 = -v13;
  *a4 = v13;
  return result;
}
