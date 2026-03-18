/*
 * XREFs of KeSetCpuSetWorkloadClassThread @ 0x1405F3EB8
 * Callers:
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadCpuSets @ 0x1404631C0 (KiUpdateThreadCpuSets.c)
 */

__int64 __fastcall KeSetCpuSetWorkloadClassThread(__int64 a1, char a2)
{
  volatile signed __int32 **v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  struct _SINGLE_LIST_ENTRY v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v8.Next = 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, &v9);
  *(_BYTE *)(a1 + 959) = a2;
  KiUpdateThreadCpuSets(a1, &v8, v4);
  LOBYTE(v5) = v9;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v8, v5, v6);
}
