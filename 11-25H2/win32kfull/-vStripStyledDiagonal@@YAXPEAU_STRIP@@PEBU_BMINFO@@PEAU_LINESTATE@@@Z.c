/*
 * XREFs of ?vStripStyledDiagonal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401C6A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  int v4; // r10d
  int *v5; // r11
  int v6; // r13d
  int v7; // edi
  int v8; // r15d
  int v9; // r9d
  int v10; // ebp
  int v11; // r10d
  __int64 v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  int v17; // [rsp+38h] [rbp+8h]
  char *v18; // [rsp+48h] [rbp+18h]

  v3 = (char *)a1 + 28;
  v4 = *((_DWORD *)a1 + 6);
  v5 = (int *)*((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 20);
  v18 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v17 = *(_DWORD *)a3;
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v9 = *((_DWORD *)a3 + 5);
  do
  {
    v10 = *(_DWORD *)v3;
    while ( 1 )
    {
      if ( !v7 )
        *v5 = v6 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4) ^ *v5 & (v17 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4));
      if ( !--v10 )
        break;
      v9 -= *((_DWORD *)a3 + 4);
      if ( v9 <= 0 )
      {
        v13 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v13;
        if ( (unsigned __int64)v13 > *((_QWORD *)a3 + 6) )
        {
          v13 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v13;
        }
        v9 += *v13;
        v7 = v7 == 0;
      }
      v11 = v4 + 1;
      v12 = v11;
      v4 = *((_DWORD *)a2 + 7) & v11;
      v5 = (int *)((char *)v5 + 4 * (v12 >> *((_DWORD *)a2 + 6)) + v8);
    }
    v9 -= *((_DWORD *)a3 + 2);
    if ( v9 <= 0 )
    {
      v14 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v14;
      if ( (unsigned __int64)v14 > *((_QWORD *)a3 + 6) )
      {
        v14 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v14;
      }
      v9 += *v14;
      v7 = v7 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v5 = (int *)((char *)v5 + v8);
    }
    else
    {
      v15 = v4 + 1;
      v16 = (__int64)v15 >> *((_DWORD *)a2 + 6);
      v4 = *((_DWORD *)a2 + 7) & v15;
      v5 += v16;
    }
    v3 += 4;
  }
  while ( v3 < v18 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 20) = v7;
  *((_DWORD *)a3 + 5) = v9;
}
