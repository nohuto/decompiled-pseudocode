/*
 * XREFs of ViZwCheckUnicodeString @ 0x140B84D00
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140B83C70 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140B83E20 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140B84020 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140B84050 (VfZwConnectPort_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140B841F0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140B84290 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140B842E0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140B84330 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140B843F0 (VfZwDeleteValueKey_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140B84780 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140B84870 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140B848E0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140B849E0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140B84A30 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140B84A70 (VfZwQueryValueKey_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140B84C10 (VfZwSetValueKey_Entry.c)
 *     ViZwCheckObjectAttributes @ 0x140B84CB0 (ViZwCheckObjectAttributes.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, a2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, a2);
    v5 = *BugCheckParameter3;
    if ( v4 + v5 < v4
      || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
      || (((unsigned __int16)v5 | v6) & 1) != 0 )
    {
      CarReportRuleViolationFromNt(196, 228LL, a2, (ULONG_PTR)BugCheckParameter3, 0LL, 8u, a2);
    }
  }
}
