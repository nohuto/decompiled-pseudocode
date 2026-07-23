/*
 * XREFs of MiCloneAncillaryVadInfo @ 0x140A07A00
 * Callers:
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCloneCaptureVadCommit @ 0x1404D2E78 (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x140714B50 (MiCloneImageVad.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiCloneLargeFileOnlyVad @ 0x140873250 (MiCloneLargeFileOnlyVad.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     MiCreateWriteWatchView @ 0x1409A07F8 (MiCreateWriteWatchView.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiVadHasSharedCommit @ 0x140A07C44 (MiVadHasSharedCommit.c)
 *     MiCloneNoChange @ 0x140A07CA0 (MiCloneNoChange.c)
 *     MiCloneDiscardVadCommit @ 0x140A07D54 (MiCloneDiscardVadCommit.c)
 *     MiCreateLargePageEvent @ 0x140B3EC6C (MiCreateLargePageEvent.c)
 */

__int64 __fastcall MiCloneAncillaryVadInfo(_KPROCESS *BugCheckParameter4, __int64 a2, __int64 a3)
{
  int v6; // r12d
  int v7; // r15d
  int VadFlags; // ebx
  int v9; // ebx
  int PlaceholderStorage; // edi
  struct _KLOCK_ENTRIES *v12; // r9
  char v13; // cl
  int LargePageEvent; // eax
  _OWORD v15[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v15, 0, sizeof(v15));
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
          MiRemoveSharedCommitNode(**(_QWORD **)(a2 + 80), (unsigned __int64)BugCheckParameter4, 0, v12);
        if ( v6 )
          MiCloneDiscardVadCommit(a2);
        goto LABEL_12;
      }
      v6 = 1;
    }
    VadFlags = MiReadVadFlags(a3);
    if ( (VadFlags & 2) == 0
      || (PlaceholderStorage = MiCloneNoChange(BugCheckParameter4, a3, a2), PlaceholderStorage >= 0) )
    {
      if ( !MiLocateLockedVadEvent(a3, 0x80u)
        || (PlaceholderStorage = MiCreatePlaceholderStorage((ULONG_PTR)BugCheckParameter4), PlaceholderStorage >= 0) )
      {
        if ( (VadFlags & 0x180000) != 0x180000
          || (PlaceholderStorage = MiCreateWriteWatchView((ULONG_PTR)BugCheckParameter4, a2), PlaceholderStorage >= 0) )
        {
          if ( MiIsVadLargePrivate(a3) )
          {
            v13 = *(_BYTE *)(a3 + 34);
            *(_DWORD *)(a2 + 52) = *(_DWORD *)(a3 + 52);
            *(_BYTE *)(a2 + 34) = v13;
            LargePageEvent = MiCreateLargePageEvent((ULONG_PTR)BugCheckParameter4);
          }
          else
          {
            v9 = VadFlags & 0x1C;
            if ( v9 == 8 )
            {
              LargePageEvent = MiCloneImageVad((__int64)BugCheckParameter4, a2, a3);
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
  PlaceholderStorage = MiInsertSharedCommitNode(**(_QWORD **)(a3 + 80), (unsigned __int64)BugCheckParameter4, 0);
  if ( PlaceholderStorage >= 0 )
  {
    v7 = 1;
    goto LABEL_2;
  }
LABEL_12:
  KiStackAttachProcess(BugCheckParameter4, 0, (__int64)v15);
  MiReleaseVadEventBlocks(a2);
  KiUnstackDetachProcess((__int64)v15, 0);
  return (unsigned int)PlaceholderStorage;
}
