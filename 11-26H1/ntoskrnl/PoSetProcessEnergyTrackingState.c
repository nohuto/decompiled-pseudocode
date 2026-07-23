/*
 * XREFs of PoSetProcessEnergyTrackingState @ 0x140AFDCC0
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEtEnergyContextSetState @ 0x1409CC484 (PopEtEnergyContextSetState.c)
 */

__int64 __fastcall PoSetProcessEnergyTrackingState(__int64 a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  unsigned int i; // ecx
  int v8; // ebx

  v4 = *(_QWORD *)(a1 + 1640);
  if ( !v4 )
    return (unsigned int)-1073741637;
  if ( a2[2] || (*a2 & 0xFFFFFFEF) != 0 || (~*a2 & a2[1]) != 0 )
    return (unsigned int)-1073741811;
  if ( (a2[3] & 1) != 0 )
  {
    for ( i = 0; i < 0x40; ++i )
    {
      if ( !*((_WORD *)a2 + i + 8) )
        goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
LABEL_12:
  PopAcquireRwLockExclusive((unsigned __int64 *)(v4 + 440), (__int64)a2, a3, a4);
  v8 = PopEtEnergyContextSetState(a1, a2);
  if ( v8 >= 0 )
    v8 = 0;
  PopReleaseRwLock((struct _KTHREAD *)(v4 + 440));
  return (unsigned int)v8;
}
