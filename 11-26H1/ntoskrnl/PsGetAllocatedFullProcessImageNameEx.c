/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1409FABB0
 * Callers:
 *     SeAuditFipsCryptoSelftests @ 0x1408127E0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1408129B0 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140812B38 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140813228 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14085B480 (CmpReportAuditVirtualizationEvent.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     SeAuditTransactionStateChange @ 0x1409F8C00 (SeAuditTransactionStateChange.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x1409FBF48 (SepQueryNameString.c)
 *     SepAdtTokenRightAdjusted @ 0x140A4325C (SepAdtTokenRightAdjusted.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 Pool2; // rax
  __int64 v5; // rbx

  if ( *(_QWORD *)(a1 + 1600) && (_QWORD)xmmword_140F0A060 )
    return guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  v3 = *(_QWORD *)(a1 + 848);
  if ( !v3 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_OWORD *)Pool2 = *(_OWORD *)v3;
  if ( *(_QWORD *)(Pool2 + 8) )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
    memmove((void *)(Pool2 + 16), *(const void **)(v3 + 8), *(unsigned __int16 *)(v3 + 2));
  }
  *a2 = v5;
  return 0LL;
}
