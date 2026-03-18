/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140504F4C
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x140603CD0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

void __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  KIRQL v4; // di
  __int64 v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyStateNotify.Padding[1]);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << (LOBYTE(PopModernStandbyStateNotify.RealtimePriorityFloor)
             + LOBYTE(PopModernStandbyStateNotify.KernelShadowStack));
  if ( a1 )
  {
    PopModernStandbyStateNotify.KernelShadowStackInitial = (void *)((__int64)PopModernStandbyStateNotify.KernelShadowStackInitial | v5);
    v3 = 1;
    ++LODWORD(PopModernStandbyStateNotify.KernelShadowStack);
  }
  else
  {
    PopModernStandbyStateNotify.KernelShadowStackInitial = (void *)((__int64)PopModernStandbyStateNotify.KernelShadowStackInitial & ~v5);
    ++PopModernStandbyStateNotify.RealtimePriorityFloor;
  }
  if ( v3 != (xmmword_140F0C3B8 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140F0C3B8);
      LODWORD(xmmword_140F0C3B8) = xmmword_140F0C3B8 | 1;
    }
    else
    {
      LODWORD(xmmword_140F0C3B8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140F0C390, CriticalWorkQueue);
  }
  KeReleaseSpinLock(&PopModernStandbyStateNotify.Padding[1], v4);
}
