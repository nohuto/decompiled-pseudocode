/*
 * XREFs of MiSharePagesYield @ 0x1402E9160
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiRelinkDeferredCrcEntries @ 0x1402E9630 (MiRelinkDeferredCrcEntries.c)
 *     MiFreeDeferredCrcPages @ 0x1402E9880 (MiFreeDeferredCrcPages.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiSharePagesYield(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  unsigned int v6; // ecx
  __int64 v7; // rsi
  int v8; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx

  v2 = a1[1];
  v4 = *a1;
  v6 = *((_DWORD *)a1 + 5) & 0xFFFFFFEF;
  v7 = *(_QWORD *)(v2 + 32);
  *((_DWORD *)a1 + 5) = v6;
  if ( (v6 & 4) != 0 )
  {
    v6 &= ~4u;
    *(__int64 *)((char *)a1 + 20) = v6;
    LOBYTE(v8) = 0;
  }
  else
  {
    v8 = *((_DWORD *)a1 + 6) + 1;
    *((_DWORD *)a1 + 6) = v8;
  }
  if ( !*(_QWORD *)(v4 + 296) || *(_QWORD *)(v4 + 312) > 1uLL )
    goto LABEL_21;
  if ( (v6 & 8) != 0 )
  {
    v6 &= ~8u;
LABEL_21:
    *((_DWORD *)a1 + 5) = v6 | 0x10;
    goto LABEL_7;
  }
  if ( (v8 & 7) == 0
    && ((unsigned int)MiWorkingSetIsContended(v7)
     || (v12 = a1[7]) != 0 && (unsigned int)MiPageTableLockIsContended(v7, v12)) )
  {
    *((_DWORD *)a1 + 5) |= 0x10u;
  }
LABEL_7:
  if ( (*((_DWORD *)a1 + 5) & 0x10) == 0 && KeShouldYieldProcessor() )
    *((_DWORD *)a1 + 5) |= 0x10u;
  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x10) == 0 )
      return 0LL;
  }
  else
  {
    ++*((_DWORD *)a1 + 7);
  }
  a1[5] = MiRelinkDeferredCrcEntries(v4, a1 + 17, a1[14], a2);
  v10 = a1[14];
  if ( v10 )
  {
    *(_DWORD *)(v10 + 20) &= ~0x80u;
    MiFlushTbList(a1[14]);
    MiReleaseProcessorFlushList();
    a1[14] = 0LL;
    a1[15] = 0LL;
  }
  v11 = a1[7];
  *((_DWORD *)a1 + 32) = 0;
  if ( v11 )
  {
    MiUnlockPageTableInternal(v7, v11);
    a1[7] = 0LL;
  }
  LOBYTE(v11) = *((_BYTE *)a1 + 48);
  MiUnlockWorkingSetShared(v7, v11);
  *((_DWORD *)a1 + 5) &= ~0x20u;
  MiFreeDeferredCrcPages(a1 + 17);
  if ( a1[5] )
  {
    a1[17] = 0LL;
    return 3221226029LL;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    *((_DWORD *)a1 + 5) &= ~2u;
    return 3221225738LL;
  }
}
