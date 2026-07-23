/*
 * XREFs of PiDqQueryRelease @ 0x1409509D8
 * Callers:
 *     PiDqDispatch @ 0x14094F860 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140950DB8 (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140498254 (McTemplateK0p_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x140950AA4 (PiDqQueryFreeActiveData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( byte_140EF412A < 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)P, (__int64)KMPnPEvt_DevQuery_QueryStop, *((_QWORD *)P + 3), P);
    PiDqQueryFreeActiveData(P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
