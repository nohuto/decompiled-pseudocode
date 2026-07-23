/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x18010E270
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunk @ 0x180163650 (LZNT1DecompressChunk.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(char *a1, int a2, __int16 *a3, unsigned int a4, int a5, int *a6)
{
  __int16 *v6; // r14
  char *v7; // r15
  int v8; // edi
  char *v9; // rsi
  __int16 v10; // bx
  unsigned __int64 v11; // r13
  int v12; // ecx
  __int16 *v13; // r12
  int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // rcx
  size_t v17; // r8
  char *v18; // r12
  int v20; // [rsp+70h] [rbp+40h]
  int v21; // [rsp+78h] [rbp+48h] BYREF
  int v22; // [rsp+88h] [rbp+58h] BYREF

  v20 = (int)a1;
  v6 = a3;
  v7 = &a1[a2];
  v21 = 0;
  v8 = 0;
  v9 = a1;
  v10 = *a3;
  v11 = (unsigned __int64)a3 + a4;
  while ( 1 )
  {
    v12 = v10 & 0xFFF;
    v13 = (__int16 *)((char *)v6 + (unsigned int)(v12 + 3));
    if ( (unsigned __int64)v13 > v11 )
      break;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)(v12 + 3) < 2 )
        break;
      v16 = (unsigned int)(v12 + 1);
      v21 = v16;
      if ( &v9[(unsigned int)v16] > v7 )
      {
        v16 = (unsigned int)((_DWORD)v7 - (_DWORD)v9);
        v21 = (_DWORD)v7 - (_DWORD)v9;
      }
      if ( (unsigned __int64)v6 + v16 + 2 > v11 )
        break;
      memmove(v9, v6 + 1, (unsigned int)v16);
      goto LABEL_14;
    }
    v14 = (_DWORD)v6 + v12 + 3;
    if ( !a5 )
    {
      v8 = LZNT1DecompressChunk((_DWORD)v9, (_DWORD)v7, (int)v6 + 2, v14, (__int64)&v21);
      if ( v8 < 0 )
      {
LABEL_8:
        *a6 = v21;
        return (unsigned int)v8;
      }
LABEL_14:
      v15 = v21;
      goto LABEL_15;
    }
    v22 = 0;
    v8 = LZNT1DecompressChunk((_DWORD)v9, (_DWORD)v7, (int)v6 + 2, v14, (__int64)&v22);
    if ( v8 < 0 )
      goto LABEL_8;
    v15 = a5;
    v21 = a5;
LABEL_15:
    v6 = v13;
    v9 += v15;
    if ( v9 == v7 || (unsigned __int64)v13 > v11 - 2 || (v10 = *v13) == 0 )
    {
LABEL_21:
      *a6 = (_DWORD)v9 - v20;
      return (unsigned int)v8;
    }
    if ( v15 < 0x1000 )
    {
      v17 = (int)(4096 - v15);
      v18 = &v9[v17];
      if ( &v9[v17] >= v7 )
        goto LABEL_21;
      memset_thunk_772440563353939046(v9, 0, v17);
      v9 = v18;
    }
  }
  v8 = -1073741246;
  *a6 = (int)v6;
  return (unsigned int)v8;
}
