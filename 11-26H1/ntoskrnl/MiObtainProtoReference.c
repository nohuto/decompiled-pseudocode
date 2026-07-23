/*
 * XREFs of MiObtainProtoReference @ 0x1402C7BB0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiInitializePageFileInPageSupport @ 0x140375F68 (MiInitializePageFileInPageSupport.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiPfPrepareForPageFileRead @ 0x1406FBBF0 (MiPfPrepareForPageFileRead.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAreChargesNeededToLockPage @ 0x1402C7DC0 (MiAreChargesNeededToLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r9
  __int64 result; // rax
  bool v7; // di
  __int64 v8; // rax
  ULONG *v9; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v12; // ett
  int v13; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
LABEL_5:
    *(_DWORD *)(a1 + 32) = (*(_DWORD *)(a1 + 32) + 1) ^ (*(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) + 1)) & 0xFFFF0000;
    goto LABEL_6;
  }
  v7 = 0;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v5 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      v7 = (*(_BYTE *)(a1 + 35) & 0x20) != 0;
    }
  }
  v8 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
  v9 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v8);
  if ( !v7 || (unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v8), 1LL, 4LL, v5) )
  {
    if ( v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v12 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v12 == CachedResidentAvailable )
          goto LABEL_5;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v9, 1LL, 0xFFFFFFFFLL) )
      goto LABEL_5;
    if ( v7 )
      MiReturnCommit(v9, 1LL, 0LL);
  }
LABEL_6:
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
