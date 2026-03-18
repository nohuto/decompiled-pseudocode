/*
 * XREFs of PpmEventInitialize @ 0x140CD6358
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PpmEventInitialize()
{
  unsigned int v0; // ebx
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rdi
  NTSTATUS v2; // esi

  v0 = 0;
  Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(64LL, 0x3DDuLL, 0x704D5050u);
  if ( Pool2 )
  {
    v2 = EtwRegister(
           &PPM_ETW_PROVIDER,
           (PETWENABLECALLBACK)PpmEventTraceControlCallback,
           0LL,
           (PREGHANDLE)&PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0x704D5050u);
      return (unsigned int)v2;
    }
    else
    {
      PpmEtwRegistered = 1;
      PpmEventPerfCheckData = Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
