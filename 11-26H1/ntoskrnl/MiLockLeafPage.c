/*
 * XREFs of MiLockLeafPage @ 0x140298370
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1404B7CFC (MiMakeImageReadOnly.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiEliminateOverlappingExtents @ 0x1406FE3B4 (MiEliminateOverlappingExtents.c)
 *     MiEnableLargeSubsection @ 0x1406FE68C (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406FEA80 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
      if ( !v6 || !qword_140E2D8C0 || (qword_140E2D8C0 & v6) != 0 )
      {
        v7 = *a1;
        if ( qword_140E2D8C0 )
        {
          v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
          if ( (v6 & 0x10) == 0 )
            v7 = v6 & qword_140E2D8C8;
        }
LABEL_9:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        v9 = 6 * v8;
        if ( v8 <= qword_140E2D920 && (*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
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
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
  {
    v14 = a2 & 1 | 2u;
    if ( (a2 & 2) == 0 )
      v14 = a2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v10, v14, v4);
  }
  return v10;
}
