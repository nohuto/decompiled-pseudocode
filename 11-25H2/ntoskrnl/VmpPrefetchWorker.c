/*
 * XREFs of VmpPrefetchWorker @ 0x140790190
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     VmpPrefetchVirtualAddresses @ 0x14042AA98 (VmpPrefetchVirtualAddresses.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  struct _KPROCESS *v2; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = (struct _KPROCESS *)*((_QWORD *)P + 4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v2, &ApcState);
  VmpPrefetchVirtualAddresses(*(PEX_SPIN_LOCK *)(*((_QWORD *)P + 4) + 1648LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
