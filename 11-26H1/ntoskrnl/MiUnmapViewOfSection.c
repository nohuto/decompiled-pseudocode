/*
 * XREFs of MiUnmapViewOfSection @ 0x1409C3C30
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x140774C90 (MiFinalizeLagePageImageMapping.c)
 *     IopCloseIoRing @ 0x140797DD0 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     AlpcViewDestroyProcedure @ 0x1409C1BF0 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x1409C3890 (MmUnmapViewOfSection.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140AEB060 (PspSchedulerSharedDataRegionDelete.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140B0E0B0 (EtwpCoverageEnsureUserModeView.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B46178 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeImageViewExtension @ 0x140CFA084 (MmInitializeImageViewExtension.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     DbgkpSuppressDbgMsg @ 0x14078A930 (DbgkpSuppressDbgMsg.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     PfCheckDeprioritizeFile @ 0x1409C4504 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140AD6354 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapViewOfSection(struct _KPROCESS *a1, int a2, int a3, int a4)
{
  int v8; // r15d
  int v9; // ebx
  ULONG_PTR v10; // rsi
  int v11; // r14d
  ULONG_PTR v12; // rcx
  __int64 v13; // rsi
  struct _KTHREAD *v14; // rdx
  __int64 v16; // rbx
  ULONG_PTR v17; // rax
  __int64 v18; // r12
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r10
  struct _KTHREAD *v21; // rcx
  __int64 Teb; // rcx
  ULONG_PTR v23; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+88h] [rbp-80h]
  _BYTE v31[216]; // [rsp+90h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v8 = 0;
  BugCheckParameter2 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  if ( a1 != KeGetCurrentThread()->ApcState.Process )
  {
    KeStackAttachProcess(a1, &ApcState);
    v8 = 1;
  }
  v9 = MiUnmapViewOfSectionPrepare((_DWORD)a1, a2, a4, (unsigned int)&BugCheckParameter2, (__int64)&v23, (__int64)&v25);
  if ( v9 >= 0 )
  {
    v10 = BugCheckParameter2;
    v11 = a3 | 0x40000000;
    if ( (MiReadVadFlags(BugCheckParameter2) & 0x1C) != 4 )
    {
      if ( (MiReadVadFlags2(v12) & 2) != 0 )
      {
        v16 = **(_QWORD **)(v10 + 80);
        v17 = MiReferenceControlAreaFile(v16);
        v18 = *(_QWORD *)(v17 + 24);
        MiDereferenceControlAreaFile(v16, v17);
        CurrentThread = KeGetCurrentThread();
        Process = CurrentThread->ApcState.Process;
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
        {
          if ( (unsigned int)PfCheckDeprioritizeFile(
                               CurrentThread->ApcState.Process,
                               HIDWORD(Process[1].CpuPartitionList.Blink),
                               v18,
                               (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
                             - (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
                             + 1) )
            v11 |= 0x80000000;
        }
      }
      if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 && *(_QWORD *)(v10 + 80) )
        MiLogMapFileEvent(v10, 1062LL);
      v12 = v10;
    }
    MiDeleteVad(v12, v23, v11);
    v9 = 0;
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v9 >= 0 )
  {
    v13 = v25;
    if ( v25 )
    {
      memset_0(v31, 0, sizeof(v31));
      if ( KeGetCurrentThread()->PreviousMode )
      {
        v14 = KeGetCurrentThread();
        if ( (*(_DWORD *)(&v14[1].SwapListEntry + 1) & 4) == 0 )
        {
          if ( a1[1].UserTime )
          {
            v21 = KeGetCurrentThread();
            if ( (v21->MiscFlags & 0x400) != 0
              || v21->ApcStateIndex == 1
              || (Teb = (__int64)v21->Teb) == 0
              || a1 != v14->Process
              || !(unsigned int)DbgkpSuppressDbgMsg(Teb) )
            {
              v26[1] = 0LL;
              v27 = 0LL;
              v28 = 0LL;
              v29 = 6LL;
              v30 = v13;
              v26[0] = 0x800380010LL;
              DbgkpSendApiMessage(a1, 1, (__int64)v26);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
