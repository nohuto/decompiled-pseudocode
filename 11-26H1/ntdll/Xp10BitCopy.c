/*
 * XREFs of Xp10BitCopy @ 0x1800FA6B8
 * Callers:
 *     Xp10ScatteredCopyBits @ 0x1800FA4B4 (Xp10ScatteredCopyBits.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

void __fastcall Xp10BitCopy(char *a1, int a2, unsigned __int8 *a3, unsigned int a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rdi
  _BYTE *v6; // rbx
  int v7; // r15d
  _BYTE *v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // r8
  char v16; // dl
  char v17; // al
  char v18; // dl
  _BYTE *v19; // rax
  bool v20; // cf
  unsigned __int64 v21; // rbp
  unsigned int v22; // edi
  int v23; // r8d
  char v24; // dl

  v5 = a5;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a5 )
  {
    LOBYTE(v9) = a4;
    v10 = 8 - a4;
    if ( a2 )
    {
      v11 = 8 - a2;
      v12 = (unsigned int)a5;
      if ( v11 <= a5 )
        v12 = v11;
      v13 = *a3 >> a4;
      if ( (unsigned int)v12 <= v10 )
      {
        v14 = v12 + a4;
      }
      else
      {
        v6 = a3 + 1;
        LOBYTE(v13) = (a3[1] << v10) | v13;
        v14 = v12 - v10;
      }
      v15 = (unsigned int)v12;
      v9 = v14 - 8;
      v16 = byte_180181FE0[4 * v12];
      v5 = a5 - v15;
      v17 = v16 << v7;
      v18 = ((unsigned __int8)v13 & (unsigned __int8)v16) << v7;
      v7 = 0;
      *a1 = v18 | *a1 & ~v17;
      v8 = a1 + 1;
      v19 = v6 + 1;
      if ( v14 < 8 )
        v9 = v14;
      v10 = 8 - v9;
      v20 = v14 < 8;
      a4 = v9;
      if ( v20 )
        v19 = v6;
      v6 = v19;
    }
    v21 = v5 >> 3;
    if ( v5 >> 3 )
    {
      if ( v7 == a4 )
      {
        memmove(v8, v6, v5 >> 3);
        v8 += v21;
        v6 += v21;
      }
      else
      {
        do
        {
          v24 = *v6++ >> v9;
          *v8 = v24;
          *v8++ = v24 | (*v6 << v10);
          --v21;
        }
        while ( v21 );
      }
    }
    v22 = v5 & 7;
    if ( v22 )
    {
      v23 = (unsigned __int8)*v6 >> v9;
      if ( v22 > v10 )
        LOBYTE(v23) = (v6[1] << v10) | v23;
      *v8 = (((unsigned __int8)v23 & (unsigned __int8)byte_180181FE0[4 * v22]) << v7) | *v8 & ~(byte_180181FE0[4 * v22] << v7);
    }
  }
}
