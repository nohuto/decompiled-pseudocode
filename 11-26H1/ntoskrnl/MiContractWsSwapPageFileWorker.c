/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x140708F20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiUnlockWsSwapExclusive @ 0x1403FE2C8 (MiUnlockWsSwapExclusive.c)
 *     MiWsSwapPageFileNumber @ 0x1403FE86C (MiWsSwapPageFileNumber.c)
 *     MiLockWsSwapExclusive @ 0x1403FE9A4 (MiLockWsSwapExclusive.c)
 *     MiQueuePageFileExtension @ 0x1404DFC08 (MiQueuePageFileExtension.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  _BYTE v9[24]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v10; // [rsp+50h] [rbp+Fh]
  __int64 v11; // [rsp+58h] [rbp+17h]
  __int64 v12; // [rsp+60h] [rbp+1Fh]
  __int16 Object; // [rsp+70h] [rbp+2Fh] BYREF
  char v14; // [rsp+72h] [rbp+31h]
  int v15; // [rsp+74h] [rbp+33h]
  _QWORD v16[2]; // [rsp+78h] [rbp+37h] BYREF
  char v17; // [rsp+8Ch] [rbp+4Bh]

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 22304);
  memset_0(v9, 0, 0x60uLL);
  v10 = a1;
  v11 = -1LL;
  v6 = *(_BYTE *)(v5 + 172);
  v12 = 0x10000LL;
  v17 = v6 & 0xF;
  v16[1] = v16;
  v16[0] = v16;
  Object = 0;
  v14 = 6;
  v15 = 0;
  MiLockWsSwapExclusive((__int64)CurrentThread, a1, v7, v8);
  MiQueuePageFileExtension((__int64)v9, 0x11u);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  MiUnlockWsSwapExclusive((__int64)CurrentThread, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 1272), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 256));
}
