/*
 * XREFs of CcAdjustThrottleForPartition @ 0x1405B32D4
 * Callers:
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcAdjustThrottleForPartition(_QWORD *a1, __int64 *a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // r11d
  __int64 v7; // r15
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  bool v17; // cc
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v27; // rcx

  v5 = a1[145];
  v6 = *((_DWORD *)a2 + 4) - a4;
  v7 = *((unsigned int *)a3 + 6);
  v8 = *a3;
  v9 = a3[1];
  v10 = a3[2];
  v11 = *a2;
  v12 = a2[1];
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFF || v6 <= v5 )
      v6 = 0;
    else
      v6 -= *((_DWORD *)a1 + 290);
    a1[145] = 0LL;
  }
  v13 = v6;
  v14 = (unsigned int)v8;
  if ( v6 < 0x200 )
    v13 = 512;
  v15 = v13 >> 2;
  if ( v15 <= v8 )
    v14 = (unsigned int)v15;
  if ( v11 >= v7 + ((3 * (v8 - v7)) >> 2) )
  {
    v16 = v8 - (unsigned int)v14;
    v8 = v10;
    v17 = v16 <= v10;
LABEL_13:
    if ( !v17 )
      v8 = v16;
    goto LABEL_31;
  }
  if ( v9 >= v8 )
  {
    if ( v11 >= v8 - v14 || v12 > v8 )
      goto LABEL_31;
    v18 = v9 - v8;
    v19 = (v8 - v11) >> 3;
    if ( v19 <= v14 )
    {
      if ( v18 > v14 )
        v8 += v14;
      else
        v8 = v9;
      goto LABEL_31;
    }
    v16 = v19 + v8;
    v17 = v18 <= v19;
    v8 = v9;
    goto LABEL_13;
  }
  v20 = v8 - v9;
  if ( v6 >= 0x200 )
  {
    v22 = (unsigned int)v14;
    v23 = v8 - (unsigned int)v14;
    v21 = v8 - v9;
    if ( v23 >= v9 )
      v21 = v22;
  }
  else
  {
    v21 = v20 >> 2;
    if ( v20 >> 2 <= 0x5000 )
      v21 = v8 - v9;
  }
  v8 -= v21;
LABEL_31:
  a3[1] = v9;
  v24 = (v8 >> 1) + (v8 >> 2);
  a3[2] = v10;
  *a3 = v8;
  if ( v24 > 0xFFFFFFFF )
    LODWORD(v24) = -1;
  *((_DWORD *)a3 + 6) = v24;
  v25 = (unsigned __int8)dword_140FBF22C;
  result = (a1[143] + a1[144]) >> 1;
  a3[1] = result;
  v27 = result >> 2;
  a3[2] = result >> 2;
  if ( result >> 2 < 0x200 )
  {
    a3[2] = 512LL;
    v27 = 512LL;
  }
  if ( result >= v27 && v25 || (a3[1] = v27, v25) )
  {
    if ( (unsigned int)CcAzure_TopBottomDPTEqual <= 1 )
    {
      a3[2] = result;
      a3[1] = result;
    }
  }
  return result;
}
