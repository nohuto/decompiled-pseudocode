/*
 * XREFs of PspCheckAllocateAndQueryNotificationChannel @ 0x140779E14
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspUnlockJobAndRootShared @ 0x14077DBEC (PspUnlockJobAndRootShared.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 *     PspLockJobAndRootShared @ 0x140B6D224 (PspLockJobAndRootShared.c)
 */

__int64 __fastcall PspCheckAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v7[80]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v8[80]; // [rsp+70h] [rbp-58h] BYREF

  memset_0(v8, 0, 0x48uLL);
  memset_0(v7, 0, 0x48uLL);
  result = PspCheckEnableNotificationChannel((PVOID)a2);
  if ( (int)result >= 0 )
  {
    ExInitializeFastOwnerEntry((__int64)v8);
    ExInitializeFastOwnerEntry((__int64)v7);
    PspLockJobAndRootShared(a2, a1, v8, v7);
    *(_QWORD *)a3 = *(_QWORD *)(a2 + 1108);
    *(_OWORD *)(a3 + 8) = *(_OWORD *)(a2 + 1120);
    *(_OWORD *)(a3 + 24) = *(_OWORD *)(a2 + 1136);
    *(_OWORD *)(a3 + 40) = *(_OWORD *)(a2 + 1152);
    *(_QWORD *)(a3 + 56) = *(_QWORD *)(a2 + 1168);
    PspUnlockJobAndRootShared(a2, a1, v8, v7);
    return 0LL;
  }
  return result;
}
