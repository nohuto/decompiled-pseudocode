/*
 * XREFs of IoFreeIrp @ 0x140267DD0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 *     PopFreeIrp @ 0x1403BFDEC (PopFreeIrp.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x14048D330 (PnpDeviceCompletionRoutine.c)
 *     IopCompletePageWrite @ 0x14049A5C0 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     PopFxDestroyDeviceDpm @ 0x1404E8E74 (PopFxDestroyDeviceDpm.c)
 *     IopCancelIrpsInFileObjectList @ 0x140515BDC (IopCancelIrpsInFileObjectList.c)
 *     FsRtlGetFileExtents @ 0x1405B7980 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405DF990 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405DF9F0 (PnpDiagnosticCompletionRoutine.c)
 *     DifIoFreeIrpWrapper @ 0x14065FA50 (DifIoFreeIrpWrapper.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407937C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140793860 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopCancelPendingEject @ 0x1407B57C0 (IopCancelPendingEject.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CD7E4 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x1407CE800 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1407DB1A4 (PopPolicyDeviceRemove.c)
 *     CmpGetVolumeClusterSize @ 0x1408BCE30 (CmpGetVolumeClusterSize.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     FsRtlSetKernelEaFile @ 0x140A23020 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A23B80 (FsRtlQueryKernelEaFile.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     IopFreeCompletionListPackets @ 0x140A824B4 (IopFreeCompletionListPackets.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     IopUserRundown @ 0x140AAD7C0 (IopUserRundown.c)
 *     FsRtlQueryInformationFile @ 0x140AB5E30 (FsRtlQueryInformationFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140B00150 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140B07030 (FsRtlMdlReadEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0D1A8 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipGetFilePDO @ 0x140B30428 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140B4BA8C (WmipSetTraceNotify.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x1402640A0 (ExReturnPoolQuota.c)
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     IopFreeReserveIrp @ 0x1405073A4 (IopFreeReserveIrp.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
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
      KeBugCheckEx(0x44u, (ULONG_PTR)Irp, 0x2839uLL, 0LL, 0LL);
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
        && ((IopIrpStackProfilerFlags & 3) == 0
         || (v6 = Irp->Size, v6 == 72 * SLOBYTE(IopPerfIoTrackingLock.AffinityVersion) + 208)
         || v6 == 72 * SBYTE4(IopPerfIoTrackingLock.AffinityVersion) + 208
         || v6 == 280) )
      {
        Size = Irp->Size;
        if ( (unsigned __int16)Size < (unsigned __int16)(72 * SLOBYTE(IopPerfIoTrackingLock.AffinityVersion) + 208) )
        {
          if ( (unsigned __int16)Size < (unsigned __int16)(72 * SBYTE4(IopPerfIoTrackingLock.AffinityVersion) + 208) )
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
