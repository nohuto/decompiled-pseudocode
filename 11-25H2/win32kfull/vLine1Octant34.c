/*
 * XREFs of vLine1Octant34 @ 0x1401CE4B0
 * Callers:
 *     vDrawLine @ 0x14006A358 (vDrawLine.c)
 * Callees:
 *     <none>
 */

char __fastcall vLine1Octant34(unsigned int *a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _BYTE *v9; // rdx
  int v10; // r11d
  int v11; // r8d
  char v12; // cl
  bool v13; // zf
  _BYTE *v14; // rax
  char v15; // cl
  bool v16; // sf
  char v17; // cl

  v4 = a1[6];
  v5 = a1[4];
  v6 = a1[5];
  v7 = a3;
  v8 = (unsigned __int64)a1[1] >> 3;
  v9 = (_BYTE *)(v8 + a2);
  v10 = 128 >> (a1[1] & 7);
  v11 = a1[3] - 1;
  v12 = *v9;
  if ( a4 )
  {
    for ( *v9 = v10 | v12; v11; --v11 )
    {
      v13 = 2 * (_BYTE)v10 == 0;
      v8 = (unsigned __int64)(v9 - 1);
      v17 = 2 * v10;
      LOBYTE(v10) = 2 * v10;
      if ( v13 )
        LOBYTE(v10) = 1;
      if ( v17 )
        v8 = (unsigned __int64)v9;
      v16 = (int)(v6 + v4) < 0;
      v4 += v6;
      v9 = (_BYTE *)v8;
      if ( !v16 )
      {
        v4 -= v5;
        v9 = (_BYTE *)(v8 + v7);
      }
      *v9 |= v10;
    }
  }
  else
  {
    LOBYTE(v8) = v12 & ~(_BYTE)v10;
    for ( *v9 = v8; v11; --v11 )
    {
      v13 = 2 * (_BYTE)v10 == 0;
      v14 = v9 - 1;
      v15 = 2 * v10;
      LOBYTE(v10) = 2 * v10;
      if ( v13 )
        LOBYTE(v10) = 1;
      if ( v15 )
        v14 = v9;
      v16 = (int)(v6 + v4) < 0;
      v4 += v6;
      v9 = v14;
      if ( !v16 )
      {
        v4 -= v5;
        v9 = &v14[v7];
      }
      LOBYTE(v8) = ~(_BYTE)v10;
      *v9 &= ~(_BYTE)v10;
    }
  }
  return v8;
}
