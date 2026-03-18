/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140935A40
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1404EA92C (EtwGetProviderIdFromHandle.c)
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140935E90 (EtwpGetTraceGuidInfo.c)
 *     EtwpInitializeRegEntry @ 0x1409371A4 (EtwpInitializeRegEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140937CC0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpCreateUmReplyObject @ 0x140B12A84 (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 i; // rdx
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  for ( i = *(_QWORD *)(BugCheckParameter2 + 32); ; i = v2 )
  {
    if ( !i )
      return 0;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), i + 1, i);
    if ( i == v2 )
      break;
  }
  if ( i < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
