/*
 * XREFs of SrkYDIB_SrkCX @ 0x1400EE800
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1400EDBF0 (ShrinkDIB_CY_SrkCX.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall SrkYDIB_SrkCX(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  __int64 v4; // rdi
  int v6; // r15d
  int v7; // r12d
  int v8; // r13d
  _WORD *v9; // rsi
  __int64 v10; // r14
  unsigned int v11; // ebx
  __int16 v12; // cx
  __int64 v13; // rbp
  int v14; // ebx
  int v15; // r10d
  int v16; // r11d
  __int64 v17; // rcx
  _BYTE *v18; // [rsp+50h] [rbp+20h]

  result = (unsigned __int8 *)*(unsigned __int16 *)(a1 + 14);
  v4 = (__int64)a2;
  if ( *(_WORD *)(a1 + 14) )
  {
    v17 = *(unsigned __int16 *)(a1 + 10);
    v6 = (_DWORD)result * a2[2];
    v7 = (_DWORD)result * a2[1];
    v8 = (_DWORD)result * *a2;
    result = &a2[v17];
    v4 = (__int64)&a2[2 * v17 + v17];
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  v9 = *(_WORD **)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = (unsigned __int16)*v9;
  if ( *v9 )
  {
    v18 = (_BYTE *)(a3 + 1);
    do
    {
      v12 = *(_WORD *)v4;
      ++v9;
      v13 = *(unsigned __int8 *)(v4 + 2);
      v4 += 3LL;
      result = (unsigned __int8 *)(v10 + ((v11 >> 5) & 0x400));
      if ( (v11 & 0x4000) != 0 )
      {
        v14 = v11 & 0x3FFF;
        v15 = v14 * HIBYTE(v12);
        v16 = v14 * (unsigned __int8)v12;
        v18[1] = (unsigned int)(v14 * v13 + v6 + 4096) >> 13;
        *v18 = (unsigned int)(v15 + v7 + 4096) >> 13;
        *(v18 - 1) = (unsigned int)(v16 + v8 + 4096) >> 13;
        v6 = *(_DWORD *)&result[4 * v13] - v14 * v13;
        v7 = *(_DWORD *)&result[4 * HIBYTE(v12)] - v15;
        v8 = *(_DWORD *)&result[4 * (unsigned __int8)v12] - v16;
        v18 += 3;
      }
      else
      {
        v6 += *(_DWORD *)&result[4 * v13];
        v7 += *(_DWORD *)&result[4 * HIBYTE(v12)];
        v8 += *(_DWORD *)&result[4 * (unsigned __int8)v12];
      }
      v11 = (unsigned __int16)*v9;
    }
    while ( *v9 );
  }
  return result;
}
