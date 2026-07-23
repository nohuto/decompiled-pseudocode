/*
 * XREFs of PiProcessQueryAndCancelRemoval @ 0x1409B568C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1407BB8E4 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407BB964 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1409B4610 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140B3FCBC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PnpFinalizeVetoedRemove @ 0x140B61B54 (PnpFinalizeVetoedRemove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessQueryAndCancelRemoval(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        PVOID **a5,
        unsigned int *Interval,
        const void **a7)
{
  unsigned int *v9; // r12
  _WORD *v10; // rbp
  int v11; // ebx
  __int64 v12; // rcx
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  _WORD *CriticalMemory; // rax
  _WORD *v17; // rdx
  unsigned int v19[18]; // [rsp+30h] [rbp-48h] BYREF

  v9 = Interval + 2;
  v19[0] = 0;
  v10 = 0LL;
  v11 = PnpNotifyUserModeDeviceRemoval(
          a2,
          *a7,
          (__int128 *)&GUID_TARGET_DEVICE_QUERY_REMOVE,
          (__int64)Interval,
          (__int64)(Interval + 2),
          v19);
  if ( v11 >= 0 )
  {
    if ( (int)PipSendTargetDeviceQueryRemoveNotification(a2, a5, a4, Interval) >= 0 )
    {
      v11 = PipSendQueryRemoveIrpAndCheckOpenHandles(a1, a2, a3, a4, a5, (LARGE_INTEGER)Interval);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      PiSendTargetDeviceRemoveCanceledNotification((__int64)a5, a4);
    }
    else
    {
      v11 = -2147483608;
    }
    PnpFinalizeVetoedRemove(a2, *Interval, v9);
    v17 = *a7;
  }
  else
  {
    PnpFinalizeVetoedRemove(a2, *Interval, v9);
    if ( !v19[0] )
      return (unsigned int)v11;
    v12 = v19[0];
    v13 = (char *)*a7;
    do
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)&v13[2 * v14] );
      v13 += 2 * v14 + 2;
      --v12;
    }
    while ( v12 );
    v15 = (v13 - (_BYTE *)*a7) >> 1;
    CriticalMemory = (_WORD *)PnpAllocateCriticalMemory(a1, 0x100uLL);
    v10 = CriticalMemory;
    if ( !CriticalMemory )
      return (unsigned int)-1073741670;
    memmove(CriticalMemory, *a7, 2LL * (unsigned int)v15);
    v17 = v10;
    v10[(unsigned int)(v15 + 1) - 1] = 0;
  }
  PnpNotifyUserModeDeviceRemoval(a2, v17, (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL, 0LL);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x4B706E50u);
  return (unsigned int)v11;
}
