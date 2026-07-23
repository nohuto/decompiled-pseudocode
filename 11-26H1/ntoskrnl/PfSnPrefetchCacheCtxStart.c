/*
 * XREFs of PfSnPrefetchCacheCtxStart @ 0x140B57A28
 * Callers:
 *     PfSnPrefetchCacheEntryGet @ 0x1409D2508 (PfSnPrefetchCacheEntryGet.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnPrefetchCacheCtxStart(__int64 a1)
{
  char *Pool2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  __int64 v12; // [rsp+48h] [rbp+10h]

  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  v3 = 0;
  if ( Pool2 )
  {
    if ( (Pool2 + 256 >= Pool2 ? 0x20 : 0) != 0 )
      memset64(Pool2, a1 | 1, Pool2 + 256 >= Pool2 ? 0x20 : 0);
    v4 = 0;
    v5 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v6 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v7 = *(_QWORD **)(v6 + 8LL * v4);
          if ( ((unsigned __int8)v7 & 1) != 0 )
            break;
          *(_QWORD *)(v6 + 8LL * v4) = *v7;
          v12 = v5 & v7[1];
          v8 = (HIBYTE(v12)
              + 13 * (_BYTE)v12
              + 3 * (3 * BYTE1(v12) - BYTE4(v12))
              + 5 * (BYTE6(v12) - 3 * BYTE3(v12) + 3)
              - 7 * BYTE5(v12)
              - 11 * BYTE2(v12)) & 0x1F;
          *v7 = *(_QWORD *)&Pool2[8 * v8];
          *(_QWORD *)&Pool2[8 * v8] = v7;
        }
        ++v4;
      }
      while ( v4 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    *(_QWORD *)(a1 + 8) = Pool2;
    v9 = (_QWORD *)((unsigned __int64)(Pool2 + 263) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0x1F | 0x400;
    v10 = &v9[15 * ((unsigned int)((_DWORD)Pool2 - (_DWORD)v9 + 4096) / 0x78uLL)];
    while ( v9 < v10 )
    {
      *v9 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v9;
      v9 += 15;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
