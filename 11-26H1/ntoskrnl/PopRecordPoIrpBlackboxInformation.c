/*
 * XREFs of PopRecordPoIrpBlackboxInformation @ 0x140613304
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1407E39E0 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     PopDiagGetDriverName @ 0x140486FD8 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopRecordPoIrpBlackboxInformation()
{
  __int64 v0; // rsi
  int v1; // r14d
  void *v2; // rdi
  unsigned __int64 v3; // rbx
  KIRQL v4; // al
  int v5; // r12d
  __int64 v6; // rcx
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  __int64 Pool2; // rax
  _DWORD *v10; // r14
  __int64 i; // rsi
  __int64 v12; // r12
  __int64 v13; // r15
  __int128 InputBuffer_8; // [rsp+38h] [rbp-99h] BYREF
  __int128 v15; // [rsp+48h] [rbp-89h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-79h] BYREF
  _WORD Src[64]; // [rsp+78h] [rbp-59h] BYREF

  InputBuffer_8 = 0LL;
  v15 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(qword_140F10540, &LockHandle);
  v0 = qword_140F10550;
  v1 = 0;
  stru_140F10070.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  v2 = 0LL;
  v3 = 64LL;
  while ( (__int64 *)v0 != &qword_140F10550 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v0 + 288));
    v5 = *(_DWORD *)(v0 + 296);
    if ( v5 == 1 )
      v6 = *(_QWORD *)(v0 + 48);
    else
      v6 = 0LL;
    *(_QWORD *)(v0 + 304) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(v0 + 288), v4);
    if ( v5 == 1 )
    {
      if ( (int)PopDiagGetDriverName(*(_QWORD *)(v0 + 32), Src) >= 0 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( Src[v8] );
        v7 = 2 * v8 + 26;
        if ( v7 < 0x18 )
          goto LABEL_14;
      }
      ++v1;
      if ( v3 + v7 < v3 )
        goto LABEL_14;
      v3 += v7;
    }
    v0 = *(_QWORD *)v0;
  }
  if ( !v1 )
  {
LABEL_14:
    v3 = 0LL;
    goto LABEL_26;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v2 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = v1;
    v10 = (_DWORD *)(Pool2 + 40);
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)Pool2 = v3;
    *(_QWORD *)(Pool2 + 16) = &qword_140F10550;
    *(_QWORD *)(Pool2 + 24) = &PopWeakChargerLock.WaitBlock[0].Object;
    *(_QWORD *)(Pool2 + 32) = ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Blink;
    for ( i = qword_140F10550; (__int64 *)i != &qword_140F10550; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 304) )
      {
        v10[2] = *(unsigned __int8 *)(i + 184);
        v10[3] = *(_DWORD *)(i + 188);
        v10[4] = *(_DWORD *)(i + 192);
        v12 = 24LL;
        v10[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)(i + 304)) / 0x2710uLL;
        if ( (int)PopDiagGetDriverName(*(_QWORD *)(i + 32), Src) >= 0 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( Src[v13] );
          v12 = 2 * v13 + 26;
          memmove(v10 + 5, Src, 2 * v13);
          *((_WORD *)v10 + v13 + 10) = 0;
        }
        *v10 = v12;
        v10 = (_DWORD *)((char *)v10 + v12);
      }
    }
  }
LABEL_26:
  stru_140F10070.ApcState.ApcListHead[1].Flink = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    DWORD2(v15) = 4;
    *(_QWORD *)&InputBuffer_8 = v2;
    *((_QWORD *)&InputBuffer_8 + 1) = (unsigned int)v3;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer_8, 0x20u, 0LL, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
