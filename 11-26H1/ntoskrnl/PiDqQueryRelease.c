/*
 * XREFs of PiDqQueryRelease @ 0x14098FF78
 * Callers:
 *     PiDqDispatch @ 0x14098EE00 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140990358 (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14049E704 (McTemplateK0p_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x140990044 (PiDqQueryFreeActiveData.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( byte_140EF3DCA < 0 )
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
