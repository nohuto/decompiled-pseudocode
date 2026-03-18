/*
 * XREFs of InbvPortPollOnly @ 0x14071E964
 * Callers:
 *     HdlspDispatch @ 0x140C4C320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140C4CAA8 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortPollOnly(unsigned int a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY **v2; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  v2 = &WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Flink + 5 * a1;
  if ( !*v2 )
    return 0;
  result = *((_BYTE *)&WheapPfaLock.KernelShadowStackInitial + 8 * v1 + 1);
  if ( !result )
  {
    result = (unsigned int)guard_dispatch_icall_no_overrides(v2, v2 + 4) == 0;
    *((_BYTE *)&WheapPfaLock.KernelShadowStackInitial + 8 * v1 + 1) = result;
  }
  return result;
}
