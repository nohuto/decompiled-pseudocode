/*
 * XREFs of PspSecureThreadStartup @ 0x140955DE0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     VslStartSecureThread @ 0x140955D78 (VslStartSecureThread.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 */

__int64 PspSecureThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // r8
  unsigned int started; // eax
  __int64 v3; // r8

  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  PspNotifyThreadCreation(CurrentThread);
  started = VslStartSecureThread();
  LOBYTE(v3) = 1;
  return PspTerminateThreadByPointer(CurrentThread, started, v3);
}
