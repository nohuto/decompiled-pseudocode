/*
 * XREFs of KiEntropyDpcRoutine @ 0x1404B2EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiEntropyDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // ebx

  v5 = ((unsigned __int8)(*DeferredContext >> 10) - 1) & 1;
  if ( v5 != DeferredContext[82] )
  {
    guard_dispatch_icall_no_overrides(
      &DeferredContext[32 * (unsigned __int64)(((unsigned __int8)(*DeferredContext >> 10) - 1) & 1) + 1],
      128LL);
    DeferredContext[82] = v5;
  }
}
