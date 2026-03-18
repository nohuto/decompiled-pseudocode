/*
 * XREFs of Do5225 @ 0x1400EFBE0
 * Callers:
 *     FastExpAA_CY @ 0x1400EE960 (FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Do5225(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // esi
  int i; // ebp
  int v10; // r9d
  int v11; // r8d
  int v12; // r10d
  __int64 result; // rax
  signed __int64 v14; // rbx
  signed __int64 v15; // r11
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // r9d
  int v19; // r10d

  v7 = a5 >> 2;
  for ( i = a5 & 3; v7; --v7 )
  {
    *a1 = (*a2 + *a4 + 2 * (*a3 + 2 * (*a2 + *a3 + *a4 + 4 * ((unsigned int)*a3 + 1)))) >> 5;
    a1[1] = (a2[1] + a4[1] + 2 * (a3[1] + 2 * (a2[1] + a3[1] + a4[1] + 4 * ((unsigned int)a3[1] + 1)))) >> 5;
    a1[2] = (a2[2] + a4[2] + 2 * (a3[2] + 2 * (a2[2] + a3[2] + a4[2] + 4 * ((unsigned int)a3[2] + 1)))) >> 5;
    v10 = a3[3];
    a3 += 4;
    v11 = a4[3];
    a4 += 4;
    v12 = a2[3];
    a2 += 4;
    result = (unsigned int)(v10 + 2 * (v12 + v10 + v11 + 4 * (v10 + 1)));
    a1[3] = (unsigned int)(v12 + v11 + 2 * result) >> 5;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v14 = a3 - a2;
    v15 = a4 - a2;
    v16 = a1 - a2;
    do
    {
      v17 = a2[v14];
      v18 = *a2;
      v19 = (a2++)[v15];
      result = (unsigned int)(v17 + 2 * (v19 + v17 + v18 + 4 * (v17 + 1)));
      a2[v16 - 1] = (unsigned int)(v19 + v18 + 2 * result) >> 5;
      --i;
    }
    while ( i );
  }
  return result;
}
