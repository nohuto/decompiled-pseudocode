/*
 * XREFs of PopPowerLimitSxTransition @ 0x14052BF20
 * Callers:
 *     PopThermalSxEntry @ 0x14042408C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140516740 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x140606528 (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 */

__int64 __fastcall PopPowerLimitSxTransition(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 i; // rdi
  __int64 *j; // rbx
  unsigned int k; // esi
  unsigned int v11; // edx
  __int64 m; // r8
  __int64 v13; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, a2, a3, a4);
  for ( i = PopPowerLimitExtensionList; (__int64 *)i != &PopPowerLimitExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 48) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32), v5, v6, v7);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 16) )
        {
          if ( a1 )
          {
            for ( k = 0; k < *((_DWORD *)j + 8); ++k )
              PopUpdatePowerLimitTimeTracking(j, k);
            PopTracePowerLimitHistogram(j);
            *((_BYTE *)j + 48) = 0;
          }
          else
          {
            v11 = 0;
            for ( m = MEMORY[0xFFFFF78000000008]; v11 < *((_DWORD *)j + 8); *(_QWORD *)(104 * v13 + j[7]) = m )
              v13 = v11++;
            *((_BYTE *)j + 48) = 1;
          }
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)(i + 32));
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
}
