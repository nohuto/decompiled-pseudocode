/*
 * XREFs of IoFreeIrp @ 0x140268860
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026B1B0 (IopBuildDeviceIoControlRequest.c)
 *     PopFreeIrp @ 0x1403B5EEC (PopFreeIrp.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x1404937E0 (PnpDeviceCompletionRoutine.c)
 *     IopCompletePageWrite @ 0x1404A0A70 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 *     PopFxDestroyDeviceDpm @ 0x1404EF894 (PopFxDestroyDeviceDpm.c)
 *     IopCancelIrpsInFileObjectList @ 0x14051B53C (IopCancelIrpsInFileObjectList.c)
 *     FsRtlGetFileExtents @ 0x1405B5170 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405DD020 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405DD080 (PnpDiagnosticCompletionRoutine.c)
 *     DifIoFreeIrpWrapper @ 0x14065BE70 (DifIoFreeIrpWrapper.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790C90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790D30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopCancelPendingEject @ 0x1407B2760 (IopCancelPendingEject.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CA744 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x1407CB760 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x1407D746C (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1407D7B84 (PopPolicyDeviceRemove.c)
 *     CmpGetVolumeClusterSize @ 0x1408B685C (CmpGetVolumeClusterSize.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     WmipSendWmiIrp @ 0x140A0E708 (WmipSendWmiIrp.c)
 *     FsRtlSetKernelEaFile @ 0x140A199F0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A1A550 (FsRtlQueryKernelEaFile.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     IopFreeCompletionListPackets @ 0x140A7A574 (IopFreeCompletionListPackets.c)
 *     CmpFileFlushAndPurge @ 0x140AAAF1C (CmpFileFlushAndPurge.c)
 *     IopUserRundown @ 0x140AAFB70 (IopUserRundown.c)
 *     FsRtlQueryInformationFile @ 0x140AB4A90 (FsRtlQueryInformationFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140AFE0E0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140B05420 (FsRtlMdlReadEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0BA58 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipGetFilePDO @ 0x140B2E4D8 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140B49CFC (WmipSetTraceNotify.c)
 *     VfIrpSendSynchronousIrp @ 0x140C2C5F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     IopFreeIrpExtension @ 0x140268930 (IopFreeIrpExtension.c)
 *     IopFreeReserveIrp @ 0x14050D934 (IopFreeReserveIrp.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  bool v2; // zf
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  UCHAR AllocationFlags; // al
  USHORT v6; // r8
  ULONG_PTR Size; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  UCHAR v11; // al

  if ( IopDispatchFreeIrp )
  {
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  }
  else
  {
    if ( Irp->Type != 6 )
      KeBugCheckEx(0x44u, (ULONG_PTR)Irp, 0x2845uLL, 0LL, 0LL);
    v2 = (Irp->AllocationFlags & 0x40) == 0;
    Irp->Type = 0;
    if ( !v2 )
      IopFreeIrpExtension(Irp, 0xFFFFFFFFLL, 1);
    if ( (Irp->AllocationFlags & 0x21) == 0x21 )
    {
      IopFreeReserveIrp(Irp);
    }
    else
    {
      v3 = *(&Irp->Size + 1);
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0
        || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3]) == 0LL) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
      }
      AllocationFlags = Irp->AllocationFlags;
      if ( (AllocationFlags & 8) != 0 )
      {
        Irp->AllocationFlags = AllocationFlags ^ 8;
        _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      }
      if ( (Irp->AllocationFlags & 4) != 0
        && (((__int64)IopSessionNotificationLock.Timer.Header.WaitListHead.Blink & 3) == 0
         || (v6 = Irp->Size, v6 == 72 * SBYTE4(IopSessionNotificationLock.SchedulerSharedSwappablePage) + 208)
         || v6 == 72 * SLOBYTE(IopSessionNotificationLock.SchedulerSharedSwappablePage) + 208
         || v6 == 280) )
      {
        Size = Irp->Size;
        if ( (unsigned __int16)Size < (unsigned __int16)(72
                                                       * SBYTE4(IopSessionNotificationLock.SchedulerSharedSwappablePage)
                                                       + 208) )
        {
          if ( (unsigned __int16)Size < (unsigned __int16)(72
                                                         * SLOBYTE(IopSessionNotificationLock.SchedulerSharedSwappablePage)
                                                         + 208) )
          {
            v8 = 2112LL;
            v9 = 2120LL;
          }
          else
          {
            v8 = 2128LL;
            v9 = 2136LL;
          }
        }
        else
        {
          v8 = 2144LL;
          v9 = 2152LL;
        }
        Irp->IoStatus.Information = Size;
        v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v8);
        ++*(_DWORD *)(v10 + 28);
        if ( *(_WORD *)v10 < *(_WORD *)(v10 + 16)
          || (++*(_DWORD *)(v10 + 32),
              v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9),
              ++*(_DWORD *)(v10 + 28),
              *(_WORD *)v10 < *(_WORD *)(v10 + 16)) )
        {
          v11 = Irp->AllocationFlags;
          if ( (v11 & 1) != 0 )
          {
            Irp->AllocationFlags = v11 ^ 1;
            ExReturnPoolQuota((ULONG_PTR)Irp);
          }
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)v10, (PSLIST_ENTRY)Irp);
        }
        else
        {
          ++*(_DWORD *)(v10 + 32);
          ExFreePoolWithTag(Irp, 0);
        }
      }
      else
      {
        ExFreePoolWithTag(Irp, 0);
      }
    }
  }
}
