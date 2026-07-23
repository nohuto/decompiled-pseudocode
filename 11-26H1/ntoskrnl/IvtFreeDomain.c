/*
 * XREFs of IvtFreeDomain @ 0x1405A8D60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x140530120 (ExtEnvCriticalFailure.c)
 */

void __fastcall IvtFreeDomain(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  KIRQL v6; // al
  _QWORD *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rdx

  v4 = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  *(_BYTE *)(a2 + 96) = v4;
  if ( *(_QWORD *)(a2 + 56) != a2 + 56 )
    ExtEnvCriticalFailure(v5, 0LL, a1, a2, 0LL);
  HalpReleaseHighLevelLock((KSPIN_LOCK *)(a2 + 88), v4);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr);
  v7 = (_QWORD *)(a2 + 72);
  v8 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr, v6);
}
