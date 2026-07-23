/*
 * XREFs of PopRundownThermalRequests @ 0x140AC33FC
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC37E0 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC398C (PopDiagTraceThermalRequest.c)
 */

__int64 __fastcall PopRundownThermalRequests(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 i; // rbx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock, a2, a3, a4);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32), v4, v5, v6);
      PopDiagTraceCoolingExtension(i, POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
          PopDiagTraceThermalRequest(j, POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((struct _KTHREAD *)(i + 32));
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopCoolingExtensionLock);
}
