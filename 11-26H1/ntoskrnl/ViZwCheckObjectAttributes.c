/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140C39130
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140C38260 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140C382C0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140C38360 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140C38570 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140C385B0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140C385F0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140C38630 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140C38690 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140C386E0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140C38730 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140C38780 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140C387D0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140C38830 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140C38930 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140C38A00 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140C38B20 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140C38B60 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140C38BB0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140C38C00 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140C38C50 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140C38E20 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140C39000 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckUnicodeString @ 0x140C39180 (ViZwCheckUnicodeString.c)
 */

void __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, ULONG_PTR a2)
{
  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    ViZwCheckVirtualAddress(a1[5], a2);
  }
}
