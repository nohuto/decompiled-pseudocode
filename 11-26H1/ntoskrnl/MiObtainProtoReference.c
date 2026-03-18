/*
 * XREFs of MiObtainProtoReference @ 0x1402E5B70
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiInitializePageFileInPageSupport @ 0x1403741B8 (MiInitializePageFileInPageSupport.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiPfPrepareForPageFileRead @ 0x1406F6F80 (MiPfPrepareForPageFileRead.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAreChargesNeededToLockPage @ 0x1402E5D80 (MiAreChargesNeededToLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // r9
  __int64 result; // rax
  bool v6; // di
  __int64 v7; // rax
  ULONG *v8; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v11; // ett
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v3);
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
  v6 = 0;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v4 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      v6 = (*(_BYTE *)(a1 + 35) & 0x20) != 0;
    }
  }
  v7 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
  v8 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v7);
  if ( !v6 || (unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v7), 1LL, 4LL, v4) )
  {
    if ( v8 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v11 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v11 == CachedResidentAvailable )
          goto LABEL_5;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v8, 1LL, 0xFFFFFFFFLL) )
      goto LABEL_5;
    if ( v6 )
      MiReturnCommit(v8, 1LL, 0LL);
  }
LABEL_6:
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
