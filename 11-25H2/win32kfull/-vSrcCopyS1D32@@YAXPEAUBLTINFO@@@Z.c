/*
 * XREFs of ?vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z @ 0x14014FD60
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D32(struct BLTINFO *a1)
{
  unsigned int v1; // ebx
  int v2; // r15d
  unsigned int v4; // r12d
  int *v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  _BYTE *v8; // rsi
  _DWORD *v9; // r14
  _BYTE *v10; // r8
  _DWORD *v11; // rax
  unsigned int v12; // r9d
  char v13; // r10
  unsigned __int64 v14; // r11
  _BYTE *v15; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // [rsp+28h] [rbp+8h]
  int v20; // [rsp+2Ch] [rbp+Ch]

  LOBYTE(v1) = 0;
  v2 = *((_DWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 7);
  v5 = *(int **)(*(_QWORD *)a1 + 16LL);
  v19 = *v5;
  v6 = v5[1];
  v7 = *((int *)a1 + 12);
  v20 = v6;
  v8 = (_BYTE *)(*((_QWORD *)a1 + 1) + (v7 >> 3));
  v9 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  if ( v2 )
  {
    while ( 1 )
    {
      --v2;
      v10 = v8;
      v11 = v9;
      v12 = v4;
      v13 = v7 & 7;
      if ( (v7 & 7) != 0 )
        LOBYTE(v1) = *v8 << v13;
      else
        v10 = v8 - 1;
      if ( v4 )
        break;
LABEL_14:
      v8 += *((int *)a1 + 10);
      v9 = (_DWORD *)((char *)v9 + *((int *)a1 + 11));
      if ( !v2 )
        return;
    }
    while ( 1 )
    {
      if ( !v13 )
      {
        ++v10;
        if ( v12 >= 8 )
        {
          v14 = (unsigned __int64)v12 >> 3;
          do
          {
            v1 = (unsigned __int8)*v10;
            v15 = v10;
            v16 = (unsigned __int64)(unsigned __int8)*v10 >> 7;
            v17 = *v10++ & 1;
            v12 -= 8;
            *v11 = *(&v19 + v16);
            v11[1] = *(&v19 + ((v1 >> 6) & 1));
            v11[2] = *(&v19 + ((v1 >> 5) & 1));
            v11[3] = *(&v19 + ((v1 >> 4) & 1));
            v11[4] = *(&v19 + ((v1 >> 3) & 1));
            v11[5] = *(&v19 + ((v1 >> 2) & 1));
            v11[6] = *(&v19 + ((v1 >> 1) & 1));
            v11[7] = *(&v19 + v17);
            v11 += 8;
            --v14;
          }
          while ( v14 );
          v10 = v15;
          goto LABEL_12;
        }
        LOBYTE(v1) = *v10;
      }
      v18 = (unsigned __int64)(unsigned __int8)v1 >> 7;
      LOBYTE(v1) = 2 * v1;
      v13 = (v13 + 1) & 7;
      *v11++ = *(&v19 + v18);
      --v12;
LABEL_12:
      if ( !v12 )
      {
        LOBYTE(v7) = *((_BYTE *)a1 + 48);
        goto LABEL_14;
      }
    }
  }
}
