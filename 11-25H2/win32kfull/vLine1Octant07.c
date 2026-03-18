/*
 * XREFs of vLine1Octant07 @ 0x1401CB180
 * Callers:
 *     vDrawLine @ 0x14006A358 (vDrawLine.c)
 * Callees:
 *     <none>
 */

char __fastcall vLine1Octant07(unsigned int *a1, __int64 a2, int a3, int a4)
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
  _BYTE *v13; // rax
  char v14; // cl
  bool v15; // sf
  char v16; // cl

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
      LOBYTE(v10) = (unsigned __int8)v10 >> 1;
      v8 = (unsigned __int64)(v9 + 1);
      v16 = v10;
      if ( !(_BYTE)v10 )
        LOBYTE(v10) = 0x80;
      if ( v16 )
        v8 = (unsigned __int64)v9;
      v15 = (int)(v6 + v4) < 0;
      v4 += v6;
      v9 = (_BYTE *)v8;
      if ( !v15 )
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
      LOBYTE(v10) = (unsigned __int8)v10 >> 1;
      v13 = v9 + 1;
      v14 = v10;
      if ( !(_BYTE)v10 )
        LOBYTE(v10) = 0x80;
      if ( v14 )
        v13 = v9;
      v15 = (int)(v6 + v4) < 0;
      v4 += v6;
      v9 = v13;
      if ( !v15 )
      {
        v4 -= v5;
        v9 = &v13[v7];
      }
      LOBYTE(v8) = ~(_BYTE)v10;
      *v9 &= ~(_BYTE)v10;
    }
  }
  return v8;
}
