/*
 * XREFs of MiCloneAncillaryVadInfo @ 0x140961D0C
 * Callers:
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiIsVadLargePrivate @ 0x14030B6CC (MiIsVadLargePrivate.c)
 *     MiVadPureReserve @ 0x1403173B0 (MiVadPureReserve.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiCloneCaptureVadCommit @ 0x1404D9798 (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x14070FE54 (MiCloneImageVad.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiCloneLargeFileOnlyVad @ 0x14086CE70 (MiCloneLargeFileOnlyVad.c)
 *     MiReleaseVadEventBlocks @ 0x14095C4CC (MiReleaseVadEventBlocks.c)
 *     MiVadHasSharedCommit @ 0x140961F50 (MiVadHasSharedCommit.c)
 *     MiCloneNoChange @ 0x140961FAC (MiCloneNoChange.c)
 *     MiCloneDiscardVadCommit @ 0x140962060 (MiCloneDiscardVadCommit.c)
 *     MiInsertSharedCommitNode @ 0x1409C6360 (MiInsertSharedCommitNode.c)
 *     MiCreatePlaceholderStorage @ 0x1409C684C (MiCreatePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiCreateWriteWatchView @ 0x1409CF818 (MiCreateWriteWatchView.c)
 *     MiCreateLargePageEvent @ 0x140B3C9EC (MiCreateLargePageEvent.c)
 */

__int64 __fastcall MiCloneAncillaryVadInfo(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  int v6; // r12d
  int v7; // r15d
  int VadFlags; // ebx
  int v9; // ebx
  int PlaceholderStorage; // edi
  char v12; // cl
  int LargePageEvent; // eax
  _OWORD v14[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = 0;
  v7 = 0;
  if ( !(unsigned int)MiVadHasSharedCommit(a3) )
  {
LABEL_2:
    if ( MiVadPureReserve(a2)
      && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) < 0x7FFFFFFFDLL )
    {
      PlaceholderStorage = MiCloneCaptureVadCommit(a2);
      if ( PlaceholderStorage < 0 )
      {
LABEL_17:
        if ( v7 )
          MiRemoveSharedCommitNode(**(_QWORD **)(a2 + 80), BugCheckParameter1, 0LL);
        if ( v6 )
          MiCloneDiscardVadCommit(a2);
        goto LABEL_12;
      }
      v6 = 1;
    }
    VadFlags = MiReadVadFlags(a3);
    if ( (VadFlags & 2) == 0
      || (PlaceholderStorage = MiCloneNoChange(BugCheckParameter1, a3, a2), PlaceholderStorage >= 0) )
    {
      if ( !MiLocateLockedVadEvent(a3, 0x80u)
        || (PlaceholderStorage = MiCreatePlaceholderStorage((ULONG_PTR)BugCheckParameter1), PlaceholderStorage >= 0) )
      {
        if ( (VadFlags & 0x180000) != 0x180000
          || (PlaceholderStorage = MiCreateWriteWatchView((ULONG_PTR)BugCheckParameter1), PlaceholderStorage >= 0) )
        {
          if ( MiIsVadLargePrivate(a3) )
          {
            v12 = *(_BYTE *)(a3 + 34);
            *(_DWORD *)(a2 + 52) = *(_DWORD *)(a3 + 52);
            *(_BYTE *)(a2 + 34) = v12;
            LargePageEvent = MiCreateLargePageEvent((ULONG_PTR)BugCheckParameter1);
          }
          else
          {
            v9 = VadFlags & 0x1C;
            if ( v9 == 8 )
            {
              LargePageEvent = MiCloneImageVad((__int64)BugCheckParameter1, a2, a3);
            }
            else
            {
              if ( v9 != 20 || !*(_QWORD *)(**(_QWORD **)(a3 + 80) + 64LL) )
                return 0LL;
              LargePageEvent = MiCloneLargeFileOnlyVad(a3, 1);
            }
          }
          PlaceholderStorage = LargePageEvent;
          if ( LargePageEvent >= 0 )
            return 0LL;
        }
      }
    }
    goto LABEL_17;
  }
  PlaceholderStorage = MiInsertSharedCommitNode(**(_QWORD **)(a3 + 80), BugCheckParameter1, 0LL);
  if ( PlaceholderStorage >= 0 )
  {
    v7 = 1;
    goto LABEL_2;
  }
LABEL_12:
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v14);
  MiReleaseVadEventBlocks(a2);
  KiUnstackDetachProcess((__int64)v14, 0);
  return (unsigned int)PlaceholderStorage;
}
