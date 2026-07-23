/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x180151290
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunk @ 0x180163650 (LZNT1DecompressChunk.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        size_t Size,
        __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        __int64 a8)
{
  unsigned int v8; // esi
  char *v9; // r15
  int v10; // r11d
  int v11; // ebx
  __int16 v12; // ax
  __int64 v14; // rcx
  __int16 *v15; // rcx
  __int64 v16; // r13
  char *v17; // rdi
  int v18; // r12d
  __int16 *v19; // r14
  unsigned int v20; // ecx
  int v21; // r8d
  unsigned int v22; // eax
  char *v23; // rdx
  void *v24; // rcx
  size_t v25; // r8
  unsigned int v26; // r9d
  bool v27; // zf
  int v29; // [rsp+30h] [rbp-18h]
  int v30; // [rsp+90h] [rbp+48h]
  int v31; // [rsp+98h] [rbp+50h]
  int v32; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp+60h] BYREF

  v31 = Size;
  v30 = (int)a1;
  v8 = a5;
  v9 = (char *)a3 + a4;
  v10 = (_DWORD)a1 + Size;
  v11 = 0;
  v12 = *a3;
  v33 = 0;
  v29 = (_DWORD)a1 + Size;
  do
  {
    v32 = 4096;
    v14 = (v12 & 0xFFFu) + 3;
    if ( v8 < 0x1000 )
    {
      v16 = a8;
      v17 = a1;
      v18 = a6;
      while ( 1 )
      {
        v19 = (__int16 *)((char *)a3 + (unsigned int)v14);
        if ( v19 > (__int16 *)v9 )
          goto LABEL_32;
        v20 = 4096 - v8;
        if ( 4096 - v8 >= (unsigned int)Size )
          v20 = Size;
        v33 = v20;
        if ( v12 >= 0 )
          break;
        if ( v8 || v20 != 4096 )
        {
          v11 = LZNT1DecompressChunk(v16, (int)v16 + 4096, (int)a3 + 2, (_DWORD)v19, (__int64)&v32);
          v22 = v32;
          if ( v11 < 0 )
            goto LABEL_19;
          v23 = (char *)(v16 + v8);
          v24 = v17;
          if ( v32 - v8 < v33 )
          {
            memmove(v17, v23, v32 - v8);
            LODWORD(v17) = v32 - v8 + (_DWORD)v17;
LABEL_31:
            *a7 = (_DWORD)v17 - v30;
            return (unsigned int)v11;
          }
          v25 = v33;
          goto LABEL_25;
        }
        v21 = (_DWORD)a3 + 2;
        if ( v18 )
        {
          a5 = 0;
          v11 = LZNT1DecompressChunk((_DWORD)v17, v10, v21, (_DWORD)v19, (__int64)&a5);
          if ( v11 < 0 )
            goto LABEL_18;
          v33 = v18;
        }
        else
        {
          v11 = LZNT1DecompressChunk((_DWORD)v17, v10, v21, (_DWORD)v19, (__int64)&v33);
          if ( v11 < 0 )
          {
LABEL_18:
            v22 = v33;
LABEL_19:
            *a7 = v22;
            return (unsigned int)v11;
          }
        }
LABEL_26:
        v8 = 0;
        v17 += v33;
        v27 = v31 == v33;
        LODWORD(Size) = v31 - v33;
        v31 -= v33;
        if ( v27 )
          goto LABEL_31;
        a3 = v19;
        if ( v19 > (__int16 *)v9 - 1 )
          goto LABEL_31;
        v12 = *v19;
        if ( !*v19 )
          goto LABEL_31;
        v10 = v29;
        v32 = 4096;
        LODWORD(v14) = (v12 & 0xFFF) + 3;
      }
      v26 = v20;
      if ( (char *)a3 + v20 + v8 + 2 > v9 )
        goto LABEL_32;
      v24 = v17;
      v23 = (char *)a3 + v8 + 2;
      v25 = v26;
LABEL_25:
      memmove(v24, v23, v25);
      goto LABEL_26;
    }
    v15 = (__int16 *)((char *)a3 + v14);
    if ( v15 > (__int16 *)v9 )
    {
LABEL_32:
      v11 = -1073741246;
      *a7 = (unsigned int)a3;
      return (unsigned int)v11;
    }
    v8 -= 4096;
    a3 = v15;
    if ( v15 > (__int16 *)v9 - 1 )
      break;
    v12 = *v15;
  }
  while ( *v15 );
  *a7 = 0;
  return (unsigned int)v11;
}
