/*
 * XREFs of VrpInitializeLoadedDifferencingHives @ 0x1408AC3E8
 * Callers:
 *     VRegSetup @ 0x1408AB680 (VRegSetup.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 VrpInitializeLoadedDifferencingHives()
{
  unsigned int v0; // ebx
  char *Pool2; // rax

  v0 = 0;
  *(_QWORD *)&gLoadedDiffHivesLock.Header.Lock = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    gLoadedDiffHivesLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0x40000000000LL;
    gLoadedDiffHivesLock.SListFaultAddress = Pool2;
    if ( (Pool2 + 256 >= Pool2 ? 0x20 : 0) != 0 )
      memset64(
        Pool2,
        (unsigned __int64)&gLoadedDiffHivesLock.Header.WaitListHead.Blink + 1,
        Pool2 + 256 >= Pool2 ? 0x20 : 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
