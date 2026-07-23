/*
 * XREFs of InbvPortGetByte @ 0x140723440
 * Callers:
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140C52AA8 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  __int64 v2; // rcx

  if ( a1 < 4 )
  {
    v2 = 5LL * a1;
    if ( WheapPfaLock.Spare35[v2 + 2] )
    {
      if ( *((_BYTE *)&WheapPfaLock.SchedulerSharedSwappablePage + 8 * v2 + 1) )
      {
        *a2 = *((_BYTE *)&WheapPfaLock.SchedulerSharedSwappablePage + 8 * v2);
        *((_BYTE *)&WheapPfaLock.SchedulerSharedSwappablePage + 8 * v2 + 1) = 0;
        return 1;
      }
      if ( !(unsigned int)guard_dispatch_icall_no_overrides(&WheapPfaLock.Spare35[v2 + 2], a2) )
        return 1;
    }
  }
  return 0;
}
