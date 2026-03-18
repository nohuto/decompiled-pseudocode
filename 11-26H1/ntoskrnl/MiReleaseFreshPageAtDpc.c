/*
 * XREFs of MiReleaseFreshPageAtDpc @ 0x140295CA0
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiFillPageFileReadMdl @ 0x140372310 (MiFillPageFileReadMdl.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x14049504C (MiManageUltraSpacePageTable.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x14071245C (MiSoftFaultClusterTradeGetPage.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReleaseFreshPageAtDpc(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 result; // rax

  v3 = 0;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
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
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
  v6 = *(_DWORD *)(a1 + 32) & 0xD7C7FFFF;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_DWORD *)(a1 + 32) = v6;
  v7 = 0;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    v7 = *(_DWORD *)(a1 + 36) & 0x18000000;
  *(_DWORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 32) &= ~0x10000000u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_DWORD *)(a1 + 32) &= 0xFFFF0000;
  v8 = *(_QWORD *)(a1 + 16);
  LOBYTE(v3) = (v8 & 0x3E0) != 0;
  v9 = v3 + 1;
  if ( qword_140E2D740 && (*(_QWORD *)(a1 + 16) & 0x10) == 0 )
    HIDWORD(v8) &= HIDWORD(qword_140E2D748);
  v10 = v9;
  LODWORD(v10) = v9 | 0x400;
  if ( HIDWORD(v8) != -3 )
    v10 = v9;
  result = MiInsertPageInFreeOrZeroedList((a1 + 0x220000000000LL) / 48, v10);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
