/*
 * XREFs of VidSchRemoveNativeFenceUmdHandle @ 0x140056DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchRemoveNativeFenceUmdHandle(__int64 a1, __int64 a2, char *a3)
{
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v5, (unsigned __int64 *)(a1 + 2016), 1, 0);
  RtlAvlRemoveNode(a2 + 1976, a3 + 16);
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
  ExFreePoolWithTag(a3, 0);
}
