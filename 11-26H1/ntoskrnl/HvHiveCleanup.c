/*
 * XREFs of HvHiveCleanup @ 0x1408BF5E0
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpFreeBootRegistry @ 0x1406E7E00 (CmpFreeBootRegistry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     HvpFreeMap @ 0x1408BDF90 (HvpFreeMap.c)
 *     HvpFreeHiveFreeDisplay @ 0x1408BE23C (HvpFreeHiveFreeDisplay.c)
 *     HvpViewMapCleanup @ 0x1408BE2D0 (HvpViewMapCleanup.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408BF824 (HvpMapEntryIsPoolBacked.c)
 *     CmpFree @ 0x1408BFBF0 (CmpFree.c)
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

_UNKNOWN **__fastcall HvHiveCleanup(__int64 a1)
{
  int v2; // r12d
  unsigned int v3; // r14d
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned int v6; // r13d
  unsigned int i; // r15d
  __int64 CellMap; // rax
  __int64 v9; // rdi
  _ULARGE_INTEGER v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  void *v14; // rdi
  __int64 v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  *(_DWORD *)(a1 + 160) &= ~1u;
  v2 = *(_DWORD *)(a1 + 160) & 0x10;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = 632LL * v3;
    v6 = v4 + *(_DWORD *)(a1 + v5 + 280);
    if ( *(_QWORD *)(a1 + v5 + 288) && v6 != v4 )
    {
      for ( i = v4; i < v6; i += *(_DWORD *)(v9 + 16) )
      {
        CellMap = HvpGetCellMap(a1, i);
        v9 = CellMap;
        if ( !*(_QWORD *)(CellMap + 8) )
          break;
        if ( (unsigned __int8)HvpMapEntryIsDiscardable(CellMap) )
        {
          v11 = *(_QWORD **)v9;
          if ( *(_QWORD *)v9 )
          {
            v12 = *v11;
            if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
              __fastfail(3u);
            *v13 = v12;
            *(_QWORD *)(v12 + 8) = v13;
            guard_dispatch_icall_no_overrides((__int64)v11, 24LL);
          }
        }
        if ( (unsigned __int8)HvpMapEntryIsPoolBacked(v9) )
        {
          HvpFreeBin(a1, *(_DWORD *)(v9 + 16), *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        else
        {
          v10.QuadPart = *(unsigned int *)(v9 + 16);
          if ( v10.QuadPart > PspSiloMonitorLock.Timer.DueTime.QuadPart )
            KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
          _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.Timer.DueTime, -v10.LowPart);
        }
      }
      v14 = *(void **)(a1 + v5 + 288);
      HvpFreeMap(a1, (__int64)v14, 0, (unsigned int)((*(_DWORD *)(a1 + v5 + 280) >> 12) - 1) >> 9);
      if ( v14 != (void *)(v5 + a1 + 296) )
        CmpFree(v14);
      *(_QWORD *)(a1 + v5 + 288) = 0LL;
      *(_DWORD *)(a1 + v5 + 280) = 0;
    }
    ++v3;
    v4 += 0x80000000;
  }
  while ( v3 < 2 );
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)&WheapPfaLock.CycleTime, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
  {
    guard_dispatch_icall_no_overrides(v15, *(unsigned int *)(a1 + 132));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    CmpFree(v16);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v17 = *(void **)(a1 + 120);
  if ( v17 )
  {
    CmpFree(v17);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  HvpViewMapCleanup(a1 + 224);
  return HvpFreeHiveFreeDisplay(a1);
}
