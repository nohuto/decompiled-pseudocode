/*
 * XREFs of MiLockLeafPage @ 0x140298E10
 * Callers:
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 *     MiFlushSubsection @ 0x1403C1390 (MiFlushSubsection.c)
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404AE73C (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1404BE4AC (MiMakeImageReadOnly.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140507310 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiEliminateOverlappingExtents @ 0x1406F96E4 (MiEliminateOverlappingExtents.c)
 *     MiEnableLargeSubsection @ 0x1406F99BC (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406F9DB0 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, char a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebp
  unsigned int v13; // ebp
  __int64 v14; // rdx

  while ( 2 )
  {
    v4 = 0x40000000000000LL;
    v5 = 0xFFFFDE0000000028uLL;
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_9;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( !v6 || !qword_140E2D740 || (qword_140E2D740 & v6) != 0 )
      {
        v7 = *a1;
        if ( qword_140E2D740 )
        {
          v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
          if ( (v6 & 0x10) == 0 )
            v7 = v6 & qword_140E2D748;
        }
LABEL_9:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        v9 = 6 * v8;
        if ( v8 <= qword_140E2D7A0 && (*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v10 = 48 * v8 - 0x220000000000LL;
    if ( (a2 & 1) != 0 )
    {
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, v5, v4) )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    else
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, v5, v4) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    if ( *a1 != v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
  {
    v14 = a2 & 1 | 2u;
    if ( (a2 & 2) == 0 )
      v14 = a2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v10, v14, v4);
  }
  return v10;
}
