/*
 * XREFs of VfTargetDriversGetCounters @ 0x140C2F054
 * Callers:
 *     VfSuspectDriversGetVerifierInformation @ 0x140C4C400 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x140C28028 (VfAvlEnumerateNodes.c)
 *     VfTargetDriversGetZeroCounters @ 0x140C2F0C8 (VfTargetDriversGetZeroCounters.c)
 */

__int64 __fastcall VfTargetDriversGetCounters(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r8d
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+34h] [rbp-24h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v12 = 0LL;
  v10 = 0;
  v11 = 0LL;
  VfTargetDriversGetZeroCounters(a2, (unsigned int)a3, a3, a1);
  v8[0] = v3;
  v8[1] = v4;
  v9 = v5;
  VfAvlInitializeLockContext((__int64)&v11, 1);
  VfAvlEnumerateNodes(v6, (__int64)&v11, (__int64)ViTargetAddCountersCallback, (__int64)v8);
  return VfAvlCleanupLockContext((__int64)&v11);
}
