/*
 * XREFs of MiDbgUnmapPhysicalAddress @ 0x14070393C
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     KeFlushSingleCurrentTb @ 0x1405F35E0 (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405F3764 (KeFlushSingleTb.c)
 *     MiUnfreezeIoPfnNode @ 0x1406F9AAC (MiUnfreezeIoPfnNode.c)
 */

void __fastcall MiDbgUnmapPhysicalAddress(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile __int64 *v4; // rdx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx

  v4 = (volatile __int64 *)*((_QWORD *)a1 + 12);
  v6 = a1[22];
  if ( v4 )
  {
    v7 = (_QWORD)v4 << 25;
    _InterlockedExchange64(v4, *(__int64 *)&CLFS_LSN_NULL_EXT);
    v8 = *a1;
    v9 = v7 >> 16;
    if ( (v8 & 4) != 0 )
    {
      if ( (v6 & 0x12) != 0 )
        KeFlushSingleTb(v9);
      else
        KeFlushSingleCurrentTb(v9, v8, a3, a4);
    }
    else
    {
      MiFlushSingleTbEntry(v9, 2LL);
    }
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( (v6 & 4) == 0 )
  {
    if ( (v6 & 1) != 0 || (v6 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 13) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v6 & 0x18) != 0 )
    {
      MiUnfreezeIoPfnNode((__int64 *)a1 + 14);
    }
  }
  v10 = *((unsigned __int8 *)a1 + 92);
  if ( (_BYTE)v10 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
}
