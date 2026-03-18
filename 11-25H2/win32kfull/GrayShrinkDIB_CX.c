/*
 * XREFs of GrayShrinkDIB_CX @ 0x1401857B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  int v7; // r10d
  unsigned __int16 v8; // bp
  _WORD *v9; // rbx
  int v10; // r9d
  __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // r11
  __int64 v14; // rcx
  int v15; // r11d
  int v16; // r14d
  int v17; // rcx^4
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // r8d
  int v22; // eax
  int v23; // r8d
  unsigned int v24; // eax
  _BYTE v25[12]; // [rsp+0h] [rbp-28h]

  if ( a2 )
  {
    if ( *(_WORD *)(a1 + 14) )
    {
      v7 = *(unsigned __int16 *)(a1 + 14) * *a2;
      a2 += *(unsigned __int16 *)(a1 + 10);
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_WORD *)(a1 + 12);
    v9 = *(_WORD **)(a1 + 40);
    v10 = v8;
    v11 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      do
      {
        v12 = (unsigned __int16)*v9++;
        v13 = *a2;
        v14 = v11 + ((v12 >> 5) & 0x400);
        ++a2;
        if ( (v12 & 0x4000) != 0 )
        {
          v23 = v13 * (v12 & 0x3FFF);
          *(_DWORD *)&v25[8] = v23 + v7;
          v7 = *(_DWORD *)(v14 + 4 * v13) - v23;
          --v10;
          *(_QWORD *)v25 = *(_QWORD *)&v25[4];
        }
        else
        {
          v7 += *(_DWORD *)(v14 + 4 * v13);
        }
      }
      while ( v10 );
    }
    v15 = *(_DWORD *)v25;
    v16 = *(_DWORD *)&v25[4];
    if ( v8 == 1 )
      v15 = *(_DWORD *)&v25[4];
    v17 = *(_DWORD *)&v25[4];
    while ( 1 )
    {
      v18 = (unsigned __int16)*v9;
      if ( !*v9 )
        break;
      v19 = *a2;
      ++v9;
      v20 = v11 + ((v18 >> 5) & 0x400);
      if ( (v18 & 0x4000) != 0 )
      {
        v21 = v19 * (v18 & 0x3FFF);
        v22 = (6 * v16 - (v21 + v7) - v15) >> 15;
        if ( (v22 & 0xFF00) != 0 )
          LOBYTE(v22) = ~HIBYTE(v22);
        v17 = v21 + v7;
        *a3 = v22;
        v15 = *(_DWORD *)&v25[4];
        a3 += a5;
        *(_DWORD *)&v25[4] = v21 + v7;
        v16 = v21 + v7;
        v7 = *(_DWORD *)(v20 + 4LL * *a2) - v21;
      }
      else
      {
        v7 += *(_DWORD *)(v20 + 4 * v19);
      }
      ++a2;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v24 = (5 * v17 - v15) >> 15;
      if ( (v24 & 0xFF00) != 0 )
        v24 = ~HIBYTE(v24);
      *a3 = v24;
    }
  }
}
