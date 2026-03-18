/*
 * XREFs of VidSchCancelDeviceCommand @ 0x14003AFC8
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 * Callees:
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400319F0 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 */

__int64 __fastcall VidSchCancelDeviceCommand(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a2 + 40) != 3 )
    return 3221225485LL;
  v6 = *(_QWORD **)(a2 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a4 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 40) + 2016LL), &LockHandle);
  v7 = v6 + 94;
  v8 = v6[94];
  if ( v8 )
  {
    if ( *(_QWORD **)(v8 + 8) != v7 || (v10 = (_QWORD *)v6[95], (_QWORD *)*v10 != v7) )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    *v7 = 0LL;
    v6[95] = 0LL;
    if ( a3 )
      VidMmOfferAllocationCallback(v6);
    else
      _InterlockedDecrement((volatile signed __int32 *)(v6[12] + 12LL));
  }
  if ( !a4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
