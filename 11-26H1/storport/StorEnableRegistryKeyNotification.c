/*
 * XREFs of StorEnableRegistryKeyNotification @ 0x140050904
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 */

__int64 __fastcall StorEnableRegistryKeyNotification(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int *v4; // rdi
  int *v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  int *v10; // [rsp+48h] [rbp+10h] BYREF
  int *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v11 = 0LL;
  v10 = 0LL;
  if ( !a2 )
    return (unsigned int)-1056964602;
  RaidpPortGetAdapter(a1, &v11, &v10);
  v4 = v11;
  v5 = v10;
  if ( v11 )
  {
    v6 = RaidAcquireAdapterRemoveLock((__int64)v11);
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)v4 + 764);
      goto LABEL_10;
    }
    return (unsigned int)RaidNtStatusToStorStatus(v6);
  }
  if ( !v10 )
    return (unsigned int)-1056964602;
  v6 = NvmeAdapterAcquireRemoveLock((__int64)v10);
  if ( v6 < 0 )
    return (unsigned int)RaidNtStatusToStorStatus(v6);
  v7 = *((_QWORD *)v5 + 126);
LABEL_10:
  if ( v7 )
    *(_QWORD *)(*(_QWORD *)v7 + 8LL) = a2;
  if ( v4 )
    v8 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v4 + 42);
  else
    v8 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v5 + 19);
  ExReleaseRundownProtectionCacheAware(v8);
  return v2;
}
