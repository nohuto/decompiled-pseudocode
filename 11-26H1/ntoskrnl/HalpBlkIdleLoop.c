/*
 * XREFs of HalpBlkIdleLoop @ 0x140C827E0
 * Callers:
 *     HalpBlkProcessorStartup @ 0x140C82870 (HalpBlkProcessorStartup.c)
 * Callees:
 *     HalpBlkIdleHalt @ 0x140C828C0 (HalpBlkIdleHalt.c)
 *     HalpBlkIdlePortReadHalt @ 0x140C828D0 (HalpBlkIdlePortReadHalt.c)
 *     HalpBlkIdlePortRead @ 0x140C828E0 (HalpBlkIdlePortRead.c)
 *     HalpBlkIdleMonitorMWait @ 0x140C828F0 (HalpBlkIdleMonitorMWait.c)
 */

void __noreturn HalpBlkIdleLoop()
{
  _EXCEPTION_REGISTRATION_RECORD *i; // rdi
  unsigned __int64 v1; // rbx

  for ( i = KeGetPcr()->NtTib.ExceptionList; ; _InterlockedIncrement64((volatile signed __int64 *)&i[8].Handler + v1) )
  {
    v1 = ((unsigned __int64)i[141].Next >> 52) & 0xF;
    if ( v1 >= 4 || !v1 )
      break;
    if ( v1 == 1 )
      HalpBlkIdlePortReadHalt(LOWORD(i[141].Next));
    if ( v1 == 2 )
      HalpBlkIdlePortRead(LOWORD(i[141].Next));
    else
      HalpBlkIdleMonitorMWait(&i[160], 0LL, LODWORD(i[141].Next));
  }
  HalpBlkIdleHalt();
}
