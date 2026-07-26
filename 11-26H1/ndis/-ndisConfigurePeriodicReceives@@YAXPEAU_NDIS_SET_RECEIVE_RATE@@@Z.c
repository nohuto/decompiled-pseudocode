/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140034820
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1401907A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ndisSwitchMiniportReceiveFunction @ 0x14001BBA0 (ndisSwitchMiniportReceiveFunction.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140033910 (NdisAcquireRWLockWrite.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C502C (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C5268 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1400C54F0 (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 1) == -1 )
    {
      if ( byte_14011D401 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        DueTime.QuadPart = 0LL;
        dword_14011D404 = -1;
        if ( dword_14011D40C )
          byte_14011D401 = 0;
        ndisSwitchMiniportReceiveFunction(7);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_14011D40C )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_14011D401 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_14011EFA0) )
      {
        LOBYTE(v2) = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
          0LL,
          v2,
          *((unsigned int *)a1 + 1),
          (LARGE_INTEGER)DueTime.QuadPart);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_14011D404;
      DueTime = *(LARGE_INTEGER *)((char *)a1 + 8);
      dword_14011D404 = *((_DWORD *)a1 + 1);
      byte_14011D401 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6);
      goto LABEL_10;
    }
  }
  else
  {
    DueTime.QuadPart = 0LL;
    dword_14011D404 = -1;
    if ( !dword_14011D40C && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_14011D401 = 1;
LABEL_10:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
