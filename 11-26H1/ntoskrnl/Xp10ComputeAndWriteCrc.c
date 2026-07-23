/*
 * XREFs of Xp10ComputeAndWriteCrc @ 0x140811ED8
 * Callers:
 *     Xp10CompressBuffer @ 0x140811918 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ComputeAndWriteCrc(unsigned __int16 *a1, unsigned __int8 **a2, __int64 a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned __int8 *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r11
  char v11; // al
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  unsigned __int8 *v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r11
  char v21; // al
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx

  v4 = *(_DWORD *)(a3 + 8);
  if ( (v4 & 7) != 0 )
  {
    v5 = v4 & 0xFFFFFFF8;
    *(_DWORD *)(a3 + 8) = v5 + 8;
    v4 = v5 + 8;
  }
  if ( ((*a1 >> 14) & 1) == 0 )
  {
    if ( v4 + 64 <= *(_DWORD *)(a3 + 12) )
    {
      v16 = *((_DWORD *)a2 + 3);
      v17 = -1LL;
      if ( v16 )
      {
        v18 = *a2;
        v19 = v16;
        do
        {
          v20 = 8LL;
          v17 ^= *v18;
          do
          {
            v21 = v17;
            v22 = v17 >> 1;
            v17 = (v17 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
            if ( (v21 & 1) == 0 )
              v17 = v22;
            --v20;
          }
          while ( v20 );
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      v23 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)(((unsigned __int64)v23 >> 3) + *(_QWORD *)a3) = ~v17;
      v14 = v23 + 64;
      goto LABEL_23;
    }
    return 3221225507LL;
  }
  if ( v4 + 32 > *(_DWORD *)(a3 + 12) )
    return 3221225507LL;
  v6 = *((_DWORD *)a2 + 3);
  v7 = -1;
  if ( v6 )
  {
    v8 = *a2;
    v9 = v6;
    do
    {
      v10 = 8LL;
      v7 ^= *v8;
      do
      {
        v11 = v7;
        v12 = v7 >> 1;
        v7 = (v7 >> 1) ^ 0x82F63B78;
        if ( (v11 & 1) == 0 )
          v7 = v12;
        --v10;
      }
      while ( v10 );
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  v13 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(((unsigned __int64)v13 >> 3) + *(_QWORD *)a3) = ~v7;
  v14 = v13 + 32;
LABEL_23:
  *(_DWORD *)(a3 + 8) = v14;
  return 0LL;
}
