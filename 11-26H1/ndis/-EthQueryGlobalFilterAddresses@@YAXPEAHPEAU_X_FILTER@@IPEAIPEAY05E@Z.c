/*
 * XREFs of ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1400758E0
 * Callers:
 *     ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140075850 (-ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall EthQueryGlobalFilterAddresses(
        int *a1,
        struct _X_FILTER *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 (*a5)[6])
{
  unsigned int MiniportNumAddresses; // edx
  unsigned int v10; // eax
  unsigned __int8 *v11; // rcx
  unsigned __int8 *MiniportMCastAddressBuf; // rdx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+18h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockRead(a2->BindListLock, &LockState, 0);
  MiniportNumAddresses = a2->MiniportNumAddresses;
  v10 = 6 * MiniportNumAddresses;
  if ( a3 >= 6 * MiniportNumAddresses )
  {
    v11 = (unsigned __int8 *)a5;
    *a4 = MiniportNumAddresses;
    MiniportMCastAddressBuf = (unsigned __int8 *)a2->MiniportMCastAddressBuf;
    *a1 = 0;
    memmove(v11, MiniportMCastAddressBuf, v10);
  }
  else
  {
    *a1 = -1073741823;
    *a4 = 0;
  }
  NdisReleaseRWLock(a2->BindListLock, &LockState);
}
