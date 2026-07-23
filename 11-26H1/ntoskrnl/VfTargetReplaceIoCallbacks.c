/*
 * XREFs of VfTargetReplaceIoCallbacks @ 0x14064527C
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 VfTargetReplaceIoCallbacks()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 Pool2; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v0 = 0;
  if ( ViTargetInitialized )
  {
    VfAvlInitializeLockContext((__int64)&v9, 1);
    v3 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v9, v1, v2);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 40);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 48);
        if ( v6 )
        {
          if ( !*(_QWORD *)(v6 + 64) )
          {
            Pool2 = ExAllocatePool2(0x40uLL);
            *(_QWORD *)(v6 + 64) = Pool2;
            if ( !Pool2 )
            {
              v0 = -1073741801;
              goto LABEL_12;
            }
            *(_QWORD *)(v4 + 48) = Pool2;
          }
          if ( !VfDifCaptureIoCallbacks(v5) )
          {
            ExFreePoolWithTag(*(PVOID *)(v6 + 64), 0);
            *(_QWORD *)(v6 + 64) = 0LL;
            *(_QWORD *)(v4 + 48) = 0LL;
            v0 = -1073738634;
          }
        }
      }
    }
    else
    {
      v0 = -1073741632;
    }
  }
LABEL_12:
  VfAvlCleanupLockContext((__int64)&v9);
  return v0;
}
