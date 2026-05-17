/*
 * XREFs of RtlExtractBitMap @ 0x18010D4C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned int v7; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r8
  unsigned int *v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  int *v17; // rsi
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // edx
  int v22; // ebx
  int v23; // r10d

  v5 = *a2;
  if ( a4 > *(_DWORD *)a1 - a3 )
    a4 = *(_DWORD *)a1 - a3;
  LOBYTE(v7) = a4;
  if ( a4 <= v5 )
    v5 = a4;
  if ( v5 )
  {
    v8 = (unsigned __int64)a3 >> 3;
    v9 = a3;
    if ( (a3 & 7) != 0 )
    {
      v14 = (unsigned int *)*((_QWORD *)a2 + 1);
      v15 = a3 & 0x1F;
      v16 = 32 - v15;
      v17 = (int *)(*(_QWORD *)(a1 + 8) + 4 * (v9 >> 5));
      if ( v5 < 0x20 )
      {
        v19 = v5;
      }
      else
      {
        v18 = v5 >> 5;
        v19 = v5 - 32 * (v5 >> 5);
        do
        {
          v20 = ~((1 << v15) - 1) & *v17++;
          v21 = v20 >> v15;
          *v14 = v21;
          v7 = v21 | ((((1 << v15) - 1) & *v17) << v16);
          *v14++ = v7;
          --v18;
        }
        while ( v18 );
        if ( !v19 )
          return v7;
      }
      v22 = *v17;
      v23 = *v14 & ~((1 << v19) - 1);
      if ( v19 > v16 )
      {
        v7 = (v22 & (unsigned int)(-1 << v15)) >> v15;
        *v14 = v23 | v7 | ((v17[1] & ((1 << (v19 + v15 - 32)) - 1)) << v16);
      }
      else
      {
        v7 = v23 | ((v22 & (unsigned int)(((1 << v19) - 1) << v15)) >> v15);
        *v14 = v7;
      }
      return v7;
    }
    v10 = (unsigned int)v5;
    v11 = v5 & 7;
    v12 = v10 >> 3;
    if ( v12 )
      LOBYTE(v7) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v8 + *(_QWORD *)(a1 + 8)), v12);
    if ( v11 )
    {
      v13 = *((_QWORD *)a2 + 1);
      LOBYTE(v7) = *(_BYTE *)(v13 + v12) & ~((1 << v11) - 1) | ((1 << v11) - 1) & *(_BYTE *)(v8
                                                                                           + *(_QWORD *)(a1 + 8)
                                                                                           + v12);
      *(_BYTE *)(v13 + v12) = v7;
    }
  }
  return v7;
}
