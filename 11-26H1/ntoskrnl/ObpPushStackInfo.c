/*
 * XREFs of ObpPushStackInfo @ 0x1402659F0
 * Callers:
 *     MiStoreFreeWriteSupport @ 0x14020A108 (MiStoreFreeWriteSupport.c)
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140264A20 (ObFastDereferenceObjectDeferDelete.c)
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopCallDriverReference @ 0x1402652A0 (IopCallDriverReference.c)
 *     ObDereferenceObjectDeferDelete @ 0x140265670 (ObDereferenceObjectDeferDelete.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PfSnGetFileInformation @ 0x140265CF0 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140269810 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269C10 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026CAD0 (IoReferenceIoAttributionFromThread.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpFreeOwnerEntry @ 0x1402B9E50 (ExpFreeOwnerEntry.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402C2960 (ExpLeaveWorkerFactoryAwayMode.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037D550 (IopProcessWorkItem.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     CcUnmapAndPurge @ 0x14039A0C8 (CcUnmapAndPurge.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403DDA80 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403DE82C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     FsRtlpClearOwner @ 0x1403FCCBC (FsRtlpClearOwner.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x14044D9E0 (ExpAddCurrentThreadToThreadHistory.c)
 *     RtlpQueryLowBoxId @ 0x140461FD0 (RtlpQueryLowBoxId.c)
 *     IopBoostThreadCallback @ 0x14047DB70 (IopBoostThreadCallback.c)
 *     ObDereferenceObjectExWithTag @ 0x14047DD60 (ObDereferenceObjectExWithTag.c)
 *     ObDereferenceObjectExWithTag2 @ 0x14047F848 (ObDereferenceObjectExWithTag2.c)
 *     ObpEnableObjectRefTrace @ 0x1407C4AB4 (ObpEnableObjectRefTrace.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     ObRetagReferences @ 0x140966310 (ObRetagReferences.c)
 *     PsQueryProcessAttributes @ 0x1409675B0 (PsQueryProcessAttributes.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A36CC0 (EtwpGetSidExtendedHeaderItem.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x140262E50 (MmCanThreadFault.c)
 *     EtwTraceObjectOperation @ 0x14043ABE0 (EtwTraceObjectOperation.c)
 *     ObpDeferPushRefDerefInfo @ 0x1404F4970 (ObpDeferPushRefDerefInfo.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpPushRefDerefInfo @ 0x1407701CC (ObpPushRefDerefInfo.c)
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
  if ( (xmmword_140FBFC10 & 0x80u) != 0LL )
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
    v12 = _InterlockedExchangeAdd(dword_140F13260, 1u);
    CanThreadFault = MmCanThreadFault(v9, v8, v10);
    v14 = v12 + 1;
    if ( CanThreadFault )
      return ObpPushRefDerefInfo(a1, (unsigned __int16)v4, v14, (unsigned int)BackTrace, a3);
    else
      return ObpDeferPushRefDerefInfo(a1, (unsigned __int16)v4, v14, (unsigned int)BackTrace, a3);
  }
  return result;
}
