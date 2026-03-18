/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140B84CB0
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140B83DC0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140B83E20 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140B83EC0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140B840D0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140B84110 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140B84150 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140B84190 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140B841F0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140B84240 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140B84290 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140B842E0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140B84330 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140B843C0 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140B844C0 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140B84590 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140B846A0 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140B846E0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140B84730 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140B84780 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140B847D0 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140B849A0 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140B84B80 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140B84D00 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
