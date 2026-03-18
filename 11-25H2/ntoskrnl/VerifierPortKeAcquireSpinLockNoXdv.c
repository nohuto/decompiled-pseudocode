/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x140B85EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B7BC34 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140B97EEC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140B97F88 (ViKeIrqlLogAndTrimMemory.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(ULONG_PTR SpinLock, KIRQL *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v6; // rsi
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  KIRQL result; // al
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v6 = (KSPIN_LOCK *)SpinLock;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(SpinLock, 8uLL, a3);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03A88;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(a3, a2, a3, v7) )
      {
        VfAvlInitializeLockContext((__int64)&v12, 1);
        v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v12, a3, 1LL);
        if ( v8 )
        {
          v10 = v8[8];
          if ( v10 )
            _InterlockedAdd((volatile signed __int32 *)(v10 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v12, v9);
      }
    }
    LOBYTE(SpinLock) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(SpinLock, a2, a3);
  }
  result = KeAcquireSpinLockRaiseToDpc(v6);
  *a2 = result;
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v3 )
      *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
