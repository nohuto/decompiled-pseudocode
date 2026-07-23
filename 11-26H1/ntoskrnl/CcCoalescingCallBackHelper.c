/*
 * XREFs of CcCoalescingCallBackHelper @ 0x1403E3670
 * Callers:
 *     CcCoalescingCallBack @ 0x140259D70 (CcCoalescingCallBack.c)
 * Callees:
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140218F44 (CcRescheduleLazyWriteScanOnVolume.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     CcRescheduleLazyWriteScan @ 0x1403E429C (CcRescheduleLazyWriteScan.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, _BYTE *a2, int *a3)
{
  _BYTE *v4; // rsi
  int v5; // ecx
  _BYTE *v6; // r14
  _BYTE *v8; // r15
  int v9; // ecx
  char v10; // al
  bool v11; // zf
  int v13; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2 + 1172;
  v5 = *a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (_BYTE *)(a1 + 1292);
  v8 = a2 + 1172;
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (_BYTE *)(a1 + 1292);
  v9 = v5 - 1;
  if ( v9 )
  {
    v13 = v9 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
      v11 = CcEnablePerVolumeLazyWriter == 0;
      goto LABEL_8;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    *v8 = 0;
    if ( CcEnablePerVolumeLazyWriter )
      CcRescheduleLazyWriteScanOnVolume(a2, 0LL);
    else
      CcRescheduleLazyWriteScan(a1);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    v10 = CcEnablePerVolumeLazyWriter;
    *v8 = 1;
    if ( v10 )
      a2[985] = 0;
    else
      *(_BYTE *)(a1 + 1049) = 0;
    if ( *(_QWORD *)(a1 + 1056) >= 0x2000uLL )
    {
      v11 = v10 == 0;
LABEL_8:
      if ( v11 )
      {
        CcNotifyWriteBehindInternal(a1, *v6 != 0 ? 16 : 4);
        if ( !*v6 )
          *(_BYTE *)(a1 + 1049) = 1;
      }
      else
      {
        CcNotifyWriteBehindVolume(a2, *v4 != 0 ? 16 : 4);
        if ( !*v4 )
          a2[985] = 1;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1;
}
