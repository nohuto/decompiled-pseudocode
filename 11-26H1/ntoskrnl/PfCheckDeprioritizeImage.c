/*
 * XREFs of PfCheckDeprioritizeImage @ 0x140A94254
 * Callers:
 *     PfProcessCreateNotification @ 0x1409E9D20 (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1404B2990 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404B5064 (PfLockSharedRelease.c)
 */

__int64 __fastcall PfCheckDeprioritizeImage(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  int v8; // r10d
  __int64 i; // rdx
  __int64 v10; // r10
  __int64 *v11; // rax

  v4 = 0;
  v5 = a1;
  if ( !a1 )
    return 0LL;
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E66B30.KcsanThread, a2, a3, a4);
  if ( HIDWORD(stru_140E66B30.KernelAbEntries) )
  {
    v8 = 442596621 * (unsigned __int8)v5
       + 37 * (BYTE6(v5) + 37 * (BYTE5(v5) + 37 * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * BYTE1(v5))))))
       + HIBYTE(v5)
       - 877075889;
    for ( i = 0LL; ; v8 = i + v10 )
    {
      v10 = (HIDWORD(stru_140E66B30.KernelAbEntries) - 1) & (unsigned int)v8;
      v11 = (__int64 *)((char *)stru_140E66B30.SchedulerSharedSwappablePage
                      + (v10 << SLOBYTE(stru_140E66B30.AutoBoostThreadState)));
      if ( !*v11 || *v11 == (unsigned int)v5 )
        break;
      if ( !i )
      {
        i = 2654435761LL * (unsigned int)v5 + 1;
        if ( ((-79 * (_BYTE)v5) & 1) != 0 )
          i = 2654435761LL * (unsigned int)v5;
      }
    }
    v6 = *v11;
  }
  else
  {
    v6 = 0LL;
  }
  LOBYTE(v4) = v6 != 0;
  PfLockSharedRelease((struct _KTHREAD *)&stru_140E66B30.KcsanThread);
  return v4;
}
