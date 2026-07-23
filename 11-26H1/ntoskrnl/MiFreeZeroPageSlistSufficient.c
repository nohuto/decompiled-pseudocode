/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x140288E00
 * Callers:
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 * Callees:
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 */

__int64 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r12d
  unsigned int Cache; // eax
  __int64 v7; // r11
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned int v12; // r12d
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp+8h]

  v4 = a3;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x10) != 0 )
    return 1LL;
  v5 = a2 >> 8;
  Cache = MiColorGetCache(a2);
  if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v4 + 13856) + 16LL * Cache) >= *(int *)(v7 + 17368) )
    return 1LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (_DWORD)v4 != 0;
  v12 = v5 & 1;
  v13 = a1 + 736 + 8LL * v12;
  do
  {
    if ( (unsigned __int8)byte_140E2D898 > 1u )
      v14 = *(_QWORD *)(a1 + 8 * (v10 + 2LL * v12) + 14064);
    else
      v14 = *(_QWORD *)(a1 + 8 * v10 + 3080);
    v15 = 0LL;
    v25 = v14 + v9;
    v16 = MiPageSizes;
    v17 = (__int64 *)v13;
    v18 = 3LL;
    do
    {
      v19 = 0LL;
      v20 = v17;
      v21 = 2LL;
      do
      {
        v22 = *v20;
        v20 += 4;
        v19 += v22;
        --v21;
      }
      while ( v21 );
      v23 = v19 * *v16++;
      v17 += 128;
      v15 += v23;
      --v18;
    }
    while ( v18 );
    ++v10;
    v9 = v15 + v25;
    v13 += 16LL;
  }
  while ( v10 <= v11 );
  LOBYTE(v8) = v9 <= 0x40;
  return v8;
}
