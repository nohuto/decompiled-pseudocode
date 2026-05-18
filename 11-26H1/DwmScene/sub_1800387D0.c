/*
 * XREFs of sub_1800387D0 @ 0x1800387D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_1800387D0(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  _BYTE *v5; // rdx
  bool v8; // cl
  bool v9; // al
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v5 = (_BYTE *)(a1 + 112);
  v8 = (a4 & 1) != 0 && (*v5 & 4) != 0;
  v9 = (a4 & 2) != 0 && (*v5 & 2) != 0;
  if ( v8 || v9 )
    goto LABEL_29;
  v10 = *a3 + a3[1];
  v11 = **(_QWORD **)(a1 + 56);
  if ( (*v5 & 2) != 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = **(_QWORD **)(a1 + 64);
    if ( v12 && *(_QWORD *)(a1 + 104) < v12 )
      *(_QWORD *)(a1 + 104) = v12;
  }
  v13 = **(_QWORD **)(a1 + 24);
  if ( v10 > (*(_QWORD *)(a1 + 104) - v13) >> 1 || v10 && ((a4 & 1) != 0 && !v11 || (a4 & 2) != 0 && !v12) )
  {
LABEL_29:
    *a2 = -1LL;
  }
  else
  {
    v14 = v13 + 2 * v10;
    if ( (a4 & 1) != 0 && v11 )
    {
      v15 = (*(_QWORD *)(a1 + 104) - v14) >> 1;
      **(_QWORD **)(a1 + 56) = v14;
      **(_DWORD **)(a1 + 80) = v15;
    }
    if ( (a4 & 2) != 0 && v12 )
    {
      v16 = **(int **)(a1 + 88);
      v17 = **(_QWORD **)(a1 + 64);
      **(_QWORD **)(a1 + 32) = v13;
      **(_QWORD **)(a1 + 64) = v14;
      **(_DWORD **)(a1 + 88) = (v17 + 2 * v16 - v14) >> 1;
    }
    *a2 = v10;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
