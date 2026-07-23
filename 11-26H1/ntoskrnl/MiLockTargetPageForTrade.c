/*
 * XREFs of MiLockTargetPageForTrade @ 0x1402948C0
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x140316C84 (MiPrepareToTradeUsingAccessedBit.c)
 *     MiCheckSameSlabType @ 0x14040A460 (MiCheckSameSlabType.c)
 */

__int64 __fastcall MiLockTargetPageForTrade(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbx
  unsigned int v5; // esi
  _WORD *v6; // rcx
  __int64 *v7; // r9
  __int64 v8; // rdx
  __int64 HasShadow; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int PfnSlabType; // eax
  int v18; // r8d
  int v19; // r9d

  v3 = *(_QWORD *)(a1 + 256);
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v3 + 32) & 0x40000000) != 0 && (*(_DWORD *)(a1 + 8) & 0x10000000) == 0 )
  {
    _InterlockedIncrement(&dword_140EF90CC);
LABEL_42:
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 1LL;
  }
  if ( (MiFlags & 0x10000) != 0 && (unsigned int)MiGetPagePrivilege(v3) )
    *(_DWORD *)(a1 + 16) |= 0x1000u;
  *(_QWORD *)(a1 + 272) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (unsigned __int16)*(_DWORD *)(v3 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedIncrement(&dword_140EF9020);
    return 1LL;
  }
  if ( ((*(_DWORD *)(v3 + 32) & 0x8000000) != 0 || (*(_QWORD *)v3 & 1) == 0)
    && *(_DWORD *)(a1 + 56) != 2
    && (*(_DWORD *)(a1 + 16) & 0x26) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedIncrement(&dword_140EF9024);
    return 1LL;
  }
  if ( (*(_BYTE *)(v3 + 34) & 7) != 6 || (v6 = *(_WORD **)(a1 + 216), ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FF) != *v6) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedIncrement(&dword_140EF902C);
    return 1LL;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 && (*(_DWORD *)(a1 + 8) & 0x410000) == 0x410000 )
  {
    MiGetPfnSlabType(*(_QWORD *)(a1 + 264));
    PfnSlabType = MiGetPfnSlabType(v3);
    if ( !(unsigned int)MiCheckSameSlabType(v3, PfnSlabType, v18, v19, 1) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedIncrement(&dword_140EF9030);
      return 1LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x20) == 0 )
  {
    v7 = *(__int64 **)(a1 + 192);
    v8 = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(v6, v8, *v7);
      if ( HasShadow )
      {
        v13 = *(_QWORD *)(HasShadow + 1288);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v11 |= 0x20uLL;
          v8 = v11 | 0x42;
          if ( (v14 & 0x42) == 0 )
            v8 = v11;
        }
      }
    }
    *(_QWORD *)(a1 + 272) = v8;
  }
  if ( *(_DWORD *)(a1 + 56) == 3 || (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(_DWORD *)(a1 + 208) != 1 )
  {
LABEL_16:
    if ( *(_DWORD *)(a1 + 56) == 2 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 16) & 0x20) == 0 )
      return 0LL;
    v15 = MiPrepareToTradeUsingAccessedBit(v3, *(_QWORD *)(a1 + 192));
    *(_QWORD *)(a1 + 272) = v15;
    if ( v15 )
      return 0LL;
    goto LABEL_42;
  }
  v16 = *(_DWORD *)(a1 + 16);
  if ( (v16 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 16) = v16 | 0x108;
    goto LABEL_16;
  }
  _InterlockedIncrement(&dword_140EF903C);
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
