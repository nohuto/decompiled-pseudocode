/*
 * XREFs of KeSrcuFree @ 0x1405F7980
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405F8054 (KiSrcuNotifyWorkerAcquire.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F81D8 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeSrcuFree(PVOID **P)
{
  KIRQL v2; // al
  PVOID *v3; // r8
  PVOID *v4; // rdx
  int v5; // ecx
  __int64 v6; // r14
  int i; // esi
  ULONG_PTR v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  char *v10; // [rsp+30h] [rbp-10h]

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F14FB0);
  v3 = *P;
  if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  KeReleaseSpinLock(&qword_140F14FB0, v2);
  KeRemoveQueueDpcEx((int *)P + 22, 1);
  v5 = *((_DWORD *)P + 39);
  v6 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  for ( i = 1 << v5; (unsigned int)v6 < *((_DWORD *)P + 38); v6 = (unsigned int)(v6 + 1) )
  {
    v8 = (ULONG_PTR)&P[20][10 * v6];
    KiSrcuNotifyWorkerAcquire(v8, 2LL, (unsigned int)(i - 1));
    LOWORD(v9) = 263;
    v10 = (char *)&v9 + 8;
    BYTE2(v9) = 6;
    *((_QWORD *)&v9 + 1) = (char *)&v9 + 8;
    DWORD1(v9) = 0;
    KiSrcuNotifyWorkerSelectAndQueue(v8);
    KeWaitForGate((__int64)&v9, 42LL);
  }
  ExFreePoolWithTag(P, 0x75635253u);
}
