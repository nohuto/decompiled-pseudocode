/*
 * XREFs of MiUseSlabAllocator @ 0x140373DF4
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiGetHardFaultPages @ 0x140372958 (MiGetHardFaultPages.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetSlabAllocatorTypeByProtection @ 0x1404C9E3C (MiGetSlabAllocatorTypeByProtection.c)
 */

__int64 __fastcall MiUseSlabAllocator(__int64 a1, _DWORD *a2, __int16 a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // r8d

  v7 = *(_DWORD **)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x20) != 0 && (a3 & 0x400) != 0 )
  {
    v8 = (a2[8] >> 1) & 0x1F;
    if ( (v7[23] & 0xC0000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 && ((a2[8] & 0x20000) == 0 || (v8 & 5) != 4) )
      {
        if ( !_bittest64(&MiFlags, 0x22u)
          || (v8 & 2) != 0
          || (v7[23] & 0x20000) != 0 && (v7 += 32, a2 != v7) && (_DWORD)v8 == 1 )
        {
          *a5 = MiGetSlabAllocatorTypeByProtection(v7, v8, 1LL);
          return v9;
        }
      }
    }
    else if ( stru_140E2D150.SchedulerApcFill3[9]
           && *(_QWORD *)(56320LL * a4 + *(_QWORD *)(a1 + 16) + 16008)
            + *(_QWORD *)(*(_QWORD *)(56320LL * a4 + *(_QWORD *)(a1 + 16) + 15992) + 16LL) )
    {
      *a5 = 5;
      return 1LL;
    }
  }
  return 0LL;
}
