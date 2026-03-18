/*
 * XREFs of SepAdtLogAuditRecord @ 0x1402153F8
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215140 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditBootConfiguration @ 0x14081232C (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408127E0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1408129B0 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140812B38 (SeAuditSystemTimeChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x140812D00 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x140812DF4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x140812FEC (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140813228 (SepAuditAssignPrimaryToken.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     SeAuditTransactionStateChange @ 0x1409F8C00 (SeAuditTransactionStateChange.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409F9428 (SeAuditHandleDuplication.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     SepAdtTokenRightAdjusted @ 0x140A4325C (SepAdtTokenRightAdjusted.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140B14300 (SeAuditHardLinkCreationWithTransaction.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140B4FC88 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAdtMarshallAuditRecord @ 0x140215680 (SepAdtMarshallAuditRecord.c)
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     SepQueueWorkItem @ 0x140216854 (SepQueueWorkItem.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x1404DDA94 (SepRmDispatchDataToLsa.c)
 *     SepAuditFailedRaisedIrql @ 0x140533030 (SepAuditFailedRaisedIrql.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepAdtLogAuditFailureEvent @ 0x140812DF4 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v3; // rcx
  __int64 Pool2; // rax
  __int64 v5; // rbx
  void *CurrentServerSilo; // rax
  PVOID *v7; // rsi
  int v8; // ebp
  void *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  void *v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( !HIDWORD(SepRmCapTableLock.Header.WaitListHead.Flink) && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 64LL;
  if ( CurrentIrql != 2 )
    v3 = 256LL;
  Pool2 = ExAllocatePool2(v3);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 20) = 1;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v5 + 56) = CurrentServerSilo;
    if ( CurrentServerSilo )
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v9 = *(void **)(v5 + 56);
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.QueuedScb);
      if ( Src[1] == 521 )
        goto LABEL_16;
      v10 = (unsigned int)v8;
LABEL_12:
      SepAuditFailedRaisedIrql(v10);
LABEL_16:
      if ( LODWORD(RtlpBootStatHandleLock.QueuedScb) && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( HIDWORD(SepRmCapTableLock.Header.WaitListHead.Flink) || (*((_DWORD *)*v7 + 5) & 2) == 0 )
    {
      v11 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v11;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v11 <= 0x1D0 )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess((PRKPROCESS)PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Flink, &ApcState);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess(&ApcState, 0LL);
        }
        goto LABEL_16;
      }
      v14[0] = 0;
      if ( (unsigned __int8)SepQueueWorkItem(&RtlpBootStatHandleLock.SchedulerApcFill5[64], v5, v14) )
        goto LABEL_16;
      v13 = *(void **)(v5 + 56);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v14[0] )
        goto LABEL_16;
      v10 = 3221225473LL;
      goto LABEL_12;
    }
    v12 = *(void **)(v5 + 56);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
