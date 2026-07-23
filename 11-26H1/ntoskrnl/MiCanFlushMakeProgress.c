/*
 * XREFs of MiCanFlushMakeProgress @ 0x1403E3EF4
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E3DAC (MiFlushAllStoreSwapPages.c)
 *     MiTrimDelayNeeded @ 0x1403E435C (MiTrimDelayNeeded.c)
 * Callees:
 *     MiIsStoreVirtualPagefileFull @ 0x1404D0E00 (MiIsStoreVirtualPagefileFull.c)
 */

__int64 __fastcall MiCanFlushMakeProgress(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // r11
  unsigned int v6; // ebp
  __int64 i; // rbx
  __int64 v8; // r14
  unsigned int v9; // edi
  char v10; // cl
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d

  v3 = 0LL;
  v5 = a1;
  if ( !a2 )
  {
    v3 = (*(_QWORD *)(a1 + 23248) - *(_QWORD *)(a1 + 23456)) & -(__int64)(*(_QWORD *)(a1 + 23456) < *(_QWORD *)(a1 + 23248));
    if ( v3 >= a3 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a1 + 22296);
  if ( v6 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v6 )
        return 0LL;
      v8 = *(_QWORD *)(v5 + 8 * i + 22304);
      v9 = *(_DWORD *)(v8 + 12);
      v10 = *(_WORD *)(v8 + 172);
      if ( (v10 & 0x40) != 0 )
      {
        if ( (unsigned int)MiIsStoreVirtualPagefileFull(v5) )
          continue;
        v14 = *(unsigned int *)(v5 + 1308);
        v15 = *(_DWORD *)v8;
        if ( ((*(_QWORD *)(v5 + 17224) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL) <= v14 )
          LODWORD(v14) = (*(_DWORD *)(v5 + 17224) + 0x3FFFF) & 0xFFFC0000;
        if ( (unsigned int)v14 > v15 )
          v9 += v14 - v15;
        v11 = *(_QWORD *)(88LL * (*(_WORD *)(v8 + 172) & 0xF) + v5 + 4624) + *(_QWORD *)(v5 + 4496);
        if ( v11 >= v9 )
          v11 = v9;
      }
      else
      {
        v11 = v9;
        if ( (v10 & 0x10) != 0 )
        {
          v13 = 88LL * (*(_WORD *)(v8 + 172) & 0xF);
          if ( *(_QWORD *)(v13 + v5 + 4624) < (unsigned __int64)v9 )
            v11 = *(_QWORD *)(v13 + v5 + 4624);
        }
      }
      v3 += v11;
      if ( v3 >= a3 )
        return 1LL;
    }
  }
  return 0LL;
}
