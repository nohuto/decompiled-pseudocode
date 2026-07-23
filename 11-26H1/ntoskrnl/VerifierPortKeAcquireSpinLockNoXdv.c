/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x140C3A050
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     VfMiscCheckKernelAddress @ 0x1404F67A8 (VfMiscCheckKernelAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(ULONG_PTR SpinLock, KIRQL *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  KIRQL result; // al
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v6 = (KSPIN_LOCK *)SpinLock;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(SpinLock, 8uLL, a3);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F08A28;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(a3) )
      {
        VfAvlInitializeLockContext((__int64)&v10, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, a3, 1LL);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 64);
          if ( v8 )
            _InterlockedAdd((volatile signed __int32 *)(v8 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v10);
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
