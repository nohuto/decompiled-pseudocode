/*
 * XREFs of PopEnlargeHiberFile @ 0x1407D0204
 * Callers:
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1404AF740 (MmGetNumberOfPhysicalPages.c)
 *     PopResizeHiberFile @ 0x140B0143C (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  volatile unsigned __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  stru_140F11D08.ThreadLock = qword_140F0FD70;
  v5 = 0LL;
  v6 = 0LL;
  v2 = MmGetNumberOfPhysicalPages(0) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    *(_QWORD *)&stru_140F11D08.CurrentRunTime = v5;
    stru_140F11D08.KernelStack = v6;
    stru_140F11D08.CycleTime = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
