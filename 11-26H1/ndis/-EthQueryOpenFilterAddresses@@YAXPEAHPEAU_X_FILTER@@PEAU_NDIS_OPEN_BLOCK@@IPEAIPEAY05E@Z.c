/*
 * XREFs of ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x140097C68
 * Callers:
 *     ?ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0F18 (-ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall EthQueryOpenFilterAddresses(
        int *a1,
        struct _X_FILTER *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 (*a6)[6])
{
  unsigned int NumAddresses; // r8d
  unsigned __int8 *v11; // rsi
  int v12; // ebx
  unsigned int i; // edi
  unsigned int *v14; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+58h] [rbp+20h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockRead(a2->BindListLock, &LockState, 0);
  NumAddresses = a3->NumAddresses;
  if ( a4 < 6 * NumAddresses )
  {
    NumAddresses = 0;
    v12 = -1073741823;
  }
  else
  {
    v11 = (unsigned __int8 *)a6;
    v12 = 0;
    for ( i = 0; i < NumAddresses; ++i )
    {
      memmove(v11, a3->MCastAddressBuf[i].MCastAddress, 6uLL);
      NumAddresses = a3->NumAddresses;
      v11 += 6;
    }
  }
  v14 = a5;
  *a1 = v12;
  *v14 = NumAddresses;
  NdisReleaseRWLock(a2->BindListLock, &LockState);
}
