/*
 * XREFs of SepAdtLogAuditRecord @ 0x140215728
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215470 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditBootConfiguration @ 0x14081818C (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x140818640 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140818810 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140818998 (SeAuditSystemTimeChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x140818B60 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x140818C54 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x140818E4C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140819088 (SepAuditAssignPrimaryToken.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED80 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140B16400 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 *     SeAuditTransactionStateChange @ 0x140B33F70 (SeAuditTransactionStateChange.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140B52518 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAdtMarshallAuditRecord @ 0x1402159B0 (SepAdtMarshallAuditRecord.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     SepQueueWorkItem @ 0x140216B84 (SepQueueWorkItem.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x1404D7174 (SepRmDispatchDataToLsa.c)
 *     SepAuditFailedRaisedIrql @ 0x1405354B0 (SepAuditFailedRaisedIrql.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepAdtLogAuditFailureEvent @ 0x140818C54 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
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
      _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue);
      if ( Src[1] == 521 )
        goto LABEL_16;
      v10 = (unsigned int)v8;
LABEL_12:
      SepAuditFailedRaisedIrql(v10);
LABEL_16:
      if ( RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v7 + 5) & 2) == 0 )
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
      if ( (unsigned __int8)SepQueueWorkItem(&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink, v5, v14) )
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
