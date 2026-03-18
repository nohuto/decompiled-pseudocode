/*
 * XREFs of WheapLogIpmiSELEvent @ 0x140652440
 * Callers:
 *     WheaSelLogErrorPkt @ 0x14064F528 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x14064F614 (WheaSelLogEvent.c)
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140652418 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // edi
  size_t v6; // r8

  v4 = Size;
  if ( LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) )
  {
    memset_0(&unk_140EF8714, 0, 0xFECuLL);
    WheapSelBuffer = 1381192527;
    dword_140EF8704 = 1;
    v6 = 4075LL;
    dword_140EF870C = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    dword_140EF8710 = v6;
    dword_140EF8708 = v6 + 20;
    memmove(&unk_140EF8714, Src, v6);
    if ( WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
    {
      if ( LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)&WheapDispatchPtr.ActiveThreadCount);
      _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Dpc.SystemArgument2 + 1, 0);
    }
  }
}
