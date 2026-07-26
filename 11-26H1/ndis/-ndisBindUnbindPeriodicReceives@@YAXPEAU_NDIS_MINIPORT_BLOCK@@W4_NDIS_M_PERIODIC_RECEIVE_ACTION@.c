/*
 * XREFs of ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x14008EEA0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisReceiveQueueingOff @ 0x14001BE70 (ndisReceiveQueueingOff.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140033910 (NdisAcquireRWLockWrite.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x14006ED90 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOn @ 0x140071110 (ndisReceiveQueueingOn.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(__int64 a1, int a2)
{
  __int64 v4; // rdx
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( ndisPeriodicReceives )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    switch ( a2 )
    {
      case 0:
      case 1:
      case 2:
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
        *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
        ++*(_DWORD *)(a1 + 3216);
        if ( !*(_DWORD *)(a1 + 464) && byte_14011D401 == 1 && dword_14011D404 != -1 && !*(_DWORD *)(a1 + 3168) )
          ndisReceiveQueueingOn(a1, v4);
        goto LABEL_17;
      case 3:
      case 4:
      case 5:
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
        CurrentThread = KeGetCurrentThread();
        v6 = (*(_DWORD *)(a1 + 3216))-- == 1;
        *(_QWORD *)(a1 + 3184) = CurrentThread;
        if ( !v6 || !*(_DWORD *)(a1 + 3168) )
          goto LABEL_17;
        ndisReceiveQueueingOff(a1);
        ndisEmptyPeriodicReceivesQueue((_QWORD *)a1, 1);
        v7 = qword_14011D418;
        if ( qword_14011D418 == (void *)a1 )
        {
          qword_14011D418 = (void *)*((_QWORD *)qword_14011D418 + 395);
          goto LABEL_16;
        }
        break;
      default:
        goto LABEL_18;
    }
    while ( v7 )
    {
      v8 = v7 + 395;
      v7 = (_QWORD *)v7[395];
      if ( v7 == (_QWORD *)a1 )
      {
        *v8 = v7[395];
        break;
      }
    }
LABEL_16:
    *(_QWORD *)(a1 + 3160) = 0LL;
LABEL_17:
    *(_QWORD *)(a1 + 3184) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 3176));
LABEL_18:
    NdisReleaseRWLock(Lock, &LockState);
  }
}
