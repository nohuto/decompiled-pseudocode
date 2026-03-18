/*
 * XREFs of WbSetWowTrapFrame @ 0x14090A858
 * Callers:
 *     sub_140907938 @ 0x140907938 (sub_140907938.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(_DWORD *a1, _DWORD *a2)
{
  __int16 ProcessMachine; // bp
  unsigned int v5; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  int ContextThread; // ebx

  ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessMachine == 332 )
  {
    v5 = 716;
  }
  else
  {
    if ( ProcessMachine != 452 )
      return (unsigned int)-1073741637;
    v5 = 416;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ProcessMachine == 332 )
    v7 = 65537;
  else
    v7 = 2097153;
  a1[12] = v7;
  ContextThread = PspWow64GetContextThread(KeGetCurrentThread(), a1 + 12, v5, 0LL);
  if ( ContextThread >= 0 )
  {
    if ( ProcessMachine == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread());
  }
  KeLeaveGuardedRegion();
  return (unsigned int)ContextThread;
}
