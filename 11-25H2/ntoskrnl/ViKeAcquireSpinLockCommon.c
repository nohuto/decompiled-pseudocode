/*
 * XREFs of ViKeAcquireSpinLockCommon @ 0x140B860E0
 * Callers:
 *     VerifierPortKeAcquireSpinLock @ 0x140B85E90 (VerifierPortKeAcquireSpinLock.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B7BC34 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140B97EEC (VfDriverIsKernelImageAddress.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140B97F88 (ViKeIrqlLogAndTrimMemory.c)
 */

int __fastcall ViKeAcquireSpinLockCommon(ULONG_PTR a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  ULONG_PTR v6; // rsi
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int result; // eax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v6 = a1;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(a1, 8uLL, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140F03A88;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( ViTargetUpdateTreeAllowed() && !(unsigned int)VfDriverIsKernelImageAddress(a2, a2, a3, v7) )
      {
        VfAvlInitializeLockContext((__int64)&v12, 1);
        v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v12, a2, 1LL);
        if ( v8 )
        {
          v10 = v8[8];
          if ( v10 )
            _InterlockedAdd((volatile signed __int32 *)(v10 + 164), 1u);
        }
        VfAvlCleanupLockContext((__int64)&v12, v9);
      }
    }
    LOBYTE(a1) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(a1, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v6);
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
