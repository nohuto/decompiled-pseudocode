/*
 * XREFs of InbvPortGetByte @ 0x14071E7B0
 * Callers:
 *     HdlspDispatch @ 0x140C4C320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140C4CAA8 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  __int64 v2; // rcx

  if ( a1 < 4 )
  {
    v2 = 5LL * a1;
    if ( *((_QWORD *)&WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Flink + v2) )
    {
      if ( *((_BYTE *)&WheapPfaLock.KernelShadowStackInitial + 8 * v2 + 1) )
      {
        *a2 = *((_BYTE *)&WheapPfaLock.KernelShadowStackInitial + 8 * v2);
        *((_BYTE *)&WheapPfaLock.KernelShadowStackInitial + 8 * v2 + 1) = 0;
        return 1;
      }
      if ( !(unsigned int)guard_dispatch_icall_no_overrides((char *)&WheapPfaLock.1008 + 8 * v2, a2) )
        return 1;
    }
  }
  return 0;
}
