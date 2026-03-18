/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140C33120
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140C32250 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140C322B0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140C32350 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140C32560 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140C325A0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140C325E0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140C32620 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140C32680 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140C326D0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140C32720 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140C32770 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140C327C0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140C32820 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140C32920 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140C329F0 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140C32B10 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140C32B50 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140C32BA0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140C32BF0 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140C32C40 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140C32E10 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140C32FF0 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckUnicodeString @ 0x140C33170 (ViZwCheckUnicodeString.c)
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
