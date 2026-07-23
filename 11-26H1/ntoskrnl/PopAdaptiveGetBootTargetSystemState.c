/*
 * XREFs of PopAdaptiveGetBootTargetSystemState @ 0x140B3ABDC
 * Callers:
 *     PopSystemIdleEventHandler @ 0x140B3AB80 (PopSystemIdleEventHandler.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveGetBootTargetSystemState(_DWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v5 = 0;
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( !LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
    goto LABEL_2;
  *a2 = 0;
  v7 = ExpPlatformBinaryLock.Timer.Processor & 7;
  if ( (ExpPlatformBinaryLock.Timer.Processor & 7) == 1 )
  {
    *a1 = 2;
    goto LABEL_3;
  }
  if ( (ExpPlatformBinaryLock.Timer.Processor & 7) == 2
    || (ExpPlatformBinaryLock.Timer.Processor & 7) == 3
    || (ExpPlatformBinaryLock.Timer.Processor & 7) == 4
    || (ExpPlatformBinaryLock.Timer.Processor & 7u) - 5 <= 1 )
  {
    *a1 = 10;
    *a2 = PopAdaptiveBootstateToSystemPowerState[v7];
  }
  else
  {
LABEL_2:
    v5 = -1073741275;
  }
LABEL_3:
  PopReleaseAdaptiveLock();
  return v5;
}
