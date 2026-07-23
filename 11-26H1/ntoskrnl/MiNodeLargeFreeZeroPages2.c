/*
 * XREFs of MiNodeLargeFreeZeroPages2 @ 0x1407080F4
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages2(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rbp
  __int64 *v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 i; // rdx
  unsigned __int8 j; // r11
  __int64 v9; // rax
  __int64 v10; // r9

  v2 = 0LL;
  v3 = a2;
  v4 = MiPageSizes;
  v5 = 2LL;
  do
  {
    v6 = 0LL;
    for ( i = 0LL; i <= 1; ++i )
    {
      for ( j = 0; j < (unsigned __int8)byte_140E2D898; v6 += *(_QWORD *)(a1 + 8 * (2 * (i + 2 * (v3 + 23)) + v9)) )
        v9 = j++;
    }
    v10 = v6 * *v4;
    a1 += 1024LL;
    ++v4;
    v2 += v10;
    --v5;
  }
  while ( v5 );
  return v2;
}
