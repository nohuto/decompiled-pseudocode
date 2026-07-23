/*
 * XREFs of PopFxNotifyPostDIrpCompletion @ 0x14046A938
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxNextParentRelationSafe @ 0x14046A9F0 (PopFxNextParentRelationSafe.c)
 */

void __fastcall PopFxNotifyPostDIrpCompletion(__int64 a1, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != 1 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1280);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
    v9 = 0LL;
    v6 = 0LL;
    v7 = a1 + 1304;
    while ( (unsigned __int8)PopFxNextParentRelationSafe(v7, v6, &v9) )
    {
      v8 = v9;
      if ( a2 >= ((*(_DWORD *)(v9 + 16) >> 4) & 3) )
      {
        PopFxIdleComponent(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 80LL), *(unsigned int *)(*(_QWORD *)(v9 + 24) + 16LL), 2);
        *(_DWORD *)(v8 + 16) &= ~2u;
      }
      v6 = v8;
    }
    KeReleaseSpinLock(v2, v5);
  }
}
