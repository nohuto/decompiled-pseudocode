/*
 * XREFs of ObpPushStackInfo @ 0x140264F60
 * Callers:
 *     MiStoreFreeWriteSupport @ 0x14020A1E8 (MiStoreFreeWriteSupport.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ExReturnPoolQuota @ 0x1402640A0 (ExReturnPoolQuota.c)
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopCallDriverReference @ 0x140264810 (IopCallDriverReference.c)
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PfSnGetFileInformation @ 0x140265260 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140268D80 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269180 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpFreeOwnerEntry @ 0x140304B10 (ExpFreeOwnerEntry.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     CcUnmapAndPurge @ 0x14039BE28 (CcUnmapAndPurge.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DEF10 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403E0C70 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403E1A1C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x140445B10 (ExpAddCurrentThreadToThreadHistory.c)
 *     RtlpQueryLowBoxId @ 0x14045AF90 (RtlpQueryLowBoxId.c)
 *     IopBoostThreadCallback @ 0x1404774E0 (IopBoostThreadCallback.c)
 *     ObDereferenceObjectExWithTag @ 0x1404776D0 (ObDereferenceObjectExWithTag.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ObpEnableObjectRefTrace @ 0x1407C7B14 (ObpEnableObjectRefTrace.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 *     ObRetagReferences @ 0x140A68380 (ObRetagReferences.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x1402623C0 (MmCanThreadFault.c)
 *     EtwTraceObjectOperation @ 0x14042D490 (EtwTraceObjectOperation.c)
 *     ObpDeferPushRefDerefInfo @ 0x1404EDF50 (ObpDeferPushRefDerefInfo.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpPushRefDerefInfo @ 0x1407731CC (ObpPushRefDerefInfo.c)
 */

__int64 __fastcall ObpPushStackInfo(__int64 a1, __int16 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 result; // rax
  USHORT v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r14d
  signed __int32 v12; // ebp
  BOOL CanThreadFault; // eax
  signed __int32 v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rcx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+B0h] [rbp-28h]

  v4 = a2;
  memset_0(BackTrace, 0, 0x88uLL);
  if ( (xmmword_140FC0C10 & 0x80u) != 0LL )
  {
    v15 = v4;
    if ( (v4 & 0x8000u) != 0 )
    {
      v15 = -v4;
      v16 = 4403LL;
    }
    else
    {
      v16 = 4402LL;
    }
    EtwTraceObjectOperation(v16, a1, v15, a3);
  }
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0xF3) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    v7 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    v11 = v7;
    if ( v7 < 0x10u )
      memset_0(&BackTrace[v7], 0, 8LL * (16 - (unsigned int)v7));
    v18 = v11;
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&ObpStackTraceLock.SchedulerApcFill5[80], 1u);
    CanThreadFault = MmCanThreadFault(v9, v8, v10);
    v14 = v12 + 1;
    if ( CanThreadFault )
      return ObpPushRefDerefInfo(a1, (unsigned __int16)v4, v14, (unsigned int)BackTrace, a3);
    else
      return ObpDeferPushRefDerefInfo(a1, (unsigned __int16)v4, v14, (unsigned int)BackTrace, a3);
  }
  return result;
}
