/*
 * XREFs of ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1401E14F0
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D24(struct BLTINFO *a1)
{
  unsigned int v2; // r12d
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ecx
  __int64 v8; // r10
  unsigned int v9; // r13d
  int v10; // r12d
  unsigned int v11; // r13d
  int v12; // r9d
  __int64 v13; // r8
  unsigned __int8 *v14; // rdx
  unsigned int i; // r11d
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned int v18; // r11d
  int v19; // esi
  unsigned __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // ebx
  int v23; // r11d
  bool v24; // zf
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  _BYTE *v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // ecx
  int v33; // [rsp+38h] [rbp+8h]
  unsigned int v34; // [rsp+40h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v7 = v2;
  v8 = *(_QWORD *)(v4 + 16);
  v33 = v3;
  if ( ((unsigned __int8)v6 & 3u) <= v2 )
    v7 = v6 & 3;
  v34 = v7;
  v9 = v2 - v7;
  v10 = (v2 - v7) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = v6;
    v14 = (unsigned __int8 *)v5;
    for ( i = v7; i; --i )
    {
      v25 = *v14;
      if ( (v12 & 1) != 0 )
      {
        v26 = v25 & 0xF;
        ++v14;
      }
      else
      {
        v26 = v25 >> 4;
      }
      v27 = *(_DWORD *)(v8 + 4 * v26);
      LOBYTE(v12) = v12 + 1;
      *(_WORD *)v13 = v27;
      *(_BYTE *)(v13 + 2) = BYTE2(v27);
      v13 += 3LL;
    }
    v16 = v11;
    if ( v11 )
    {
      do
      {
        v17 = *v14 & 0xF;
        if ( (v12 & 1) != 0 )
        {
          v28 = v14[1];
          v14 += 2;
          v19 = *(_DWORD *)(v8 + 4 * v17);
          v18 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)v28 >> 4));
          v22 = *(_DWORD *)(v8 + 4LL * (v28 & 0xF));
          v21 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)*v14 >> 4));
        }
        else
        {
          v18 = *(_DWORD *)(v8 + 4 * v17);
          v19 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)*v14 >> 4));
          v20 = v14[1];
          v14 += 2;
          v21 = *(_DWORD *)(v8 + 4 * (v20 & 0xF));
          v22 = *(_DWORD *)(v8 + 4 * (v20 >> 4));
        }
        LOBYTE(v12) = v12 + 4;
        *(_DWORD *)v13 = v19 | (v18 << 24);
        *(_DWORD *)(v13 + 8) = HIWORD(v22) | (v21 << 8);
        *(_DWORD *)(v13 + 4) = (v18 >> 8) | (v22 << 16);
        v13 += 12LL;
        --v16;
      }
      while ( v16 );
      v3 = v33;
    }
    v23 = v10;
    if ( v10 )
    {
      v29 = (_BYTE *)(v13 + 2);
      do
      {
        v30 = *v14;
        if ( (v12 & 1) != 0 )
        {
          v31 = v30 & 0xF;
          ++v14;
        }
        else
        {
          v31 = v30 >> 4;
        }
        v32 = *(_DWORD *)(v8 + 4 * v31);
        LOBYTE(v12) = v12 + 1;
        *((_WORD *)v29 - 1) = v32;
        *v29 = BYTE2(v32);
        v29 += 3;
        --v23;
      }
      while ( v23 );
    }
    v24 = v3-- == 1;
    v33 = v3;
    if ( v24 )
      break;
    v7 = v34;
    v5 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
