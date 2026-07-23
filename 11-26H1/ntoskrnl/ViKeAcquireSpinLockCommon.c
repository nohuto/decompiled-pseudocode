/*
 * XREFs of ViKeAcquireSpinLockCommon @ 0x140C3A30C
 * Callers:
 *     VerifierPortKeAcquireSpinLock @ 0x140C3A030 (VerifierPortKeAcquireSpinLock.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     VfMiscCheckKernelAddress @ 0x1404F67A8 (VfMiscCheckKernelAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140C2F954 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 */

int __fastcall ViKeAcquireSpinLockCommon(ULONG_PTR a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  int result; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v6 = a1;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(a1, 8uLL, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F08A28;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(a2) )
      {
        VfAvlInitializeLockContext((__int64)&v10, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, a2, 1LL);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 64);
          if ( v8 )
            _InterlockedAdd((volatile signed __int32 *)(v8 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v10);
      }
    }
    LOBYTE(a1) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(a1, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v6, a2);
  *a3 = result;
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v3 )
    {
      result = KeGetPcr()->Prcb.Number;
      *(_WORD *)(v3 + 10) = result;
    }
  }
  return result;
}
