/*
 * XREFs of InbvPortPollOnly @ 0x1407235F4
 * Callers:
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140C52AA8 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortPollOnly(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 *v2; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  v2 = &WheapPfaLock.Spare35[5 * a1 + 2];
  if ( !*v2 )
    return 0;
  result = *((_BYTE *)&WheapPfaLock.SchedulerSharedSwappablePage + 8 * v1 + 1);
  if ( !result )
  {
    result = (unsigned int)guard_dispatch_icall_no_overrides(v2, v2 + 4) == 0;
    *((_BYTE *)&WheapPfaLock.SchedulerSharedSwappablePage + 8 * v1 + 1) = result;
  }
  return result;
}
