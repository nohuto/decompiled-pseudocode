/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1409115F0
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1404E3CDC (EtwGetProviderIdFromHandle.c)
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140911A40 (EtwpGetTraceGuidInfo.c)
 *     EtwpInitializeRegEntry @ 0x140912D44 (EtwpInitializeRegEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140913860 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpCreateUmReplyObject @ 0x140B14804 (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
