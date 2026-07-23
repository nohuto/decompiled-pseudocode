/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x140CC468C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x14048D948 (PnpDiagnosticTrace.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E0328 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  char v0; // di
  __int64 *v1; // rbx

  v0 = 0;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Start, 0, 0LL);
  v1 = IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
  if ( v1 )
  {
    v0 = 1;
    do
    {
      ++*(_DWORD *)(*(_QWORD *)(v1[2] + 48) + 16LL);
      *(_DWORD *)(v1[2] + 16) &= ~0x20u;
      guard_dispatch_icall_no_overrides(v1[2], v1[4]);
      ObfDereferenceObjectWithTag((PVOID)v1[2], 0x746C6644u);
      ExFreePoolWithTag(v1, 0);
      v1 = IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
    }
    while ( v1 );
  }
  IopBootDriverReinitCompleted = 1;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Stop, 0, 0LL);
  return v0;
}
