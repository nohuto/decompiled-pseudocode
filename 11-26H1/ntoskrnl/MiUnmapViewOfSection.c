/*
 * XREFs of MiUnmapViewOfSection @ 0x140994C10
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x140777C90 (MiFinalizeLagePageImageMapping.c)
 *     IopCloseIoRing @ 0x14079A900 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x140994870 (MmUnmapViewOfSection.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140AEDE30 (PspSchedulerSharedDataRegionDelete.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140B0F800 (EtwpCoverageEnsureUserModeView.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B481A8 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpSuppressDbgMsg @ 0x14078D460 (DbgkpSuppressDbgMsg.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiLogMapFileEvent @ 0x140AD3354 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapViewOfSection(struct _KPROCESS *a1, int a2, __int64 a3, int a4)
{
  int v7; // r15d
  int v8; // ebx
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // rcx
  __int64 v11; // rsi
  struct _KTHREAD *v12; // rdx
  __int64 v14; // rbx
  ULONG_PTR v15; // rax
  __int64 v16; // r12
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r10
  struct _KTHREAD *v19; // rcx
  __int64 Teb; // rcx
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v23[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  _BYTE v28[216]; // [rsp+90h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  BugCheckParameter2 = 0LL;
  v23[0] = 0LL;
  v21 = 0LL;
  if ( a1 != KeGetCurrentThread()->ApcState.Process )
  {
    KeStackAttachProcess(a1, &ApcState);
    v7 = 1;
  }
  v8 = MiUnmapViewOfSectionPrepare((_DWORD)a1, a2, a4, (unsigned int)&BugCheckParameter2, (__int64)&v21, (__int64)v23);
  if ( v8 >= 0 )
  {
    v9 = BugCheckParameter2;
    if ( (MiReadVadFlags(BugCheckParameter2) & 0x1C) != 4 )
    {
      if ( (MiReadVadFlags2(v10) & 2) != 0 )
      {
        v14 = **(_QWORD **)(v9 + 80);
        v15 = MiReferenceControlAreaFile(v14);
        v16 = *(_QWORD *)(v15 + 24);
        MiDereferenceControlAreaFile(v14, v15);
        CurrentThread = KeGetCurrentThread();
        Process = CurrentThread->ApcState.Process;
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
          PfCheckDeprioritizeFile(
            CurrentThread->ApcState.Process,
            HIDWORD(Process[1].CpuPartitionList.Blink),
            v16,
            (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
          - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
          + 1);
      }
      if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(v9 + 80) )
        MiLogMapFileEvent(v9, 1062LL);
      v10 = v9;
    }
    MiDeleteVad(v10);
    v8 = 0;
  }
  if ( v7 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v8 >= 0 )
  {
    v11 = v23[0];
    if ( v23[0] )
    {
      memset_0(v28, 0, sizeof(v28));
      if ( KeGetCurrentThread()->PreviousMode )
      {
        v12 = KeGetCurrentThread();
        if ( (*(_DWORD *)(&v12[1].SwapListEntry + 1) & 4) == 0 )
        {
          if ( a1[1].UserTime )
          {
            v19 = KeGetCurrentThread();
            if ( (v19->MiscFlags & 0x400) != 0
              || v19->ApcStateIndex == 1
              || (Teb = (__int64)v19->Teb) == 0
              || a1 != v12->Process
              || !(unsigned int)DbgkpSuppressDbgMsg(Teb) )
            {
              v23[3] = 0LL;
              v24 = 0LL;
              v25 = 0LL;
              v26 = 6LL;
              v27 = v11;
              v23[2] = 0x800380010LL;
              DbgkpSendApiMessage(a1);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
