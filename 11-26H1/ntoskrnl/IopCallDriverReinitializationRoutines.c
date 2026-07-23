/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x140A39684
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140527E20 (PnpCompleteSystemStartProcess.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E0328 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall IopCallDriverReinitializationRoutines(char a1)
{
  char v1; // si
  char v2; // bl
  __int64 *v4; // rdi

  v1 = 0;
  v2 = a1;
  if ( !a1 && !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  while ( 1 )
  {
    v4 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
    if ( v4 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*(_QWORD *)(v4[2] + 48) + 16LL);
        *(_DWORD *)(v4[2] + 16) &= ~8u;
        guard_dispatch_icall_no_overrides(v4[2], v4[4]);
        ObfDereferenceObject((PVOID)v4[2]);
        ExFreePoolWithTag(v4, 0);
        v4 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
      }
      while ( v4 );
    }
    if ( v2 != 1 )
      break;
    IopInitSystemCompletedEnoughForReInitRoutines = 1;
    v2 = 0;
  }
  return v1;
}
