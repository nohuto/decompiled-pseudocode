/*
 * XREFs of Xp10ComputeAndWriteCrc @ 0x180125778
 * Callers:
 *     Xp10CompressBuffer @ 0x1801519AC (Xp10CompressBuffer.c)
 * Callees:
 *     Xp10ComputeCrc32 @ 0x180151F80 (Xp10ComputeCrc32.c)
 */

__int64 __fastcall Xp10ComputeAndWriteCrc(unsigned __int16 *a1, unsigned __int8 **a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 *v6; // r11
  __int64 v7; // rcx
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  unsigned __int8 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // al
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx

  v3 = *(_DWORD *)(a3 + 8);
  if ( (v3 & 7) != 0 )
  {
    *(_DWORD *)(a3 + 8) = (v3 & 0xFFFFFFF8) + 8;
    v3 = (v3 & 0xFFFFFFF8) + 8;
  }
  if ( ((*a1 >> 14) & 1) == 0 )
  {
    if ( v3 + 64 <= *(_DWORD *)(a3 + 12) )
    {
      v9 = *((_DWORD *)a2 + 3);
      v10 = -1LL;
      if ( v9 )
      {
        v11 = *a2;
        v12 = v9;
        do
        {
          v13 = 8LL;
          v10 ^= *v11;
          do
          {
            v14 = v10;
            v15 = v10 >> 1;
            v10 = (v10 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
            if ( (v14 & 1) == 0 )
              v10 = v15;
            --v13;
          }
          while ( v13 );
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      v16 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)(((unsigned __int64)v16 >> 3) + *(_QWORD *)a3) = ~v10;
      *(_DWORD *)(a3 + 8) = v16 + 64;
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v3 + 32 > *(_DWORD *)(a3 + 12) )
    return 3221225507LL;
  v5 = Xp10ComputeCrc32(a2);
  v7 = *v6;
  *((_DWORD *)v6 + 2) = v3 + 32;
  *(_DWORD *)(((unsigned __int64)v3 >> 3) + v7) = v5;
  return 0LL;
}
