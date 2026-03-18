/*
 * XREFs of ViFaultsInjectionNotification @ 0x140B86C0C
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B7BC34 (ViTargetUpdateTreeAllowed.c)
 *     VfDriverIsKernelImageAddress @ 0x140B97EEC (VfDriverIsKernelImageAddress.c)
 */

__int16 __fastcall ViFaultsInjectionNotification(int a1)
{
  int updated; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  PVOID *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  LOWORD(updated) = ++dword_140F03AAC;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    updated = ViTargetUpdateTreeAllowed();
    if ( updated )
    {
      updated = VfDriverIsKernelImageAddress(v4, v3, v4, v5);
      if ( !updated )
      {
        VfAvlInitializeLockContext((__int64)&v12, 1);
        v7 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v12, v6, 1LL);
        if ( v7 )
        {
          v9 = v7[8];
          if ( v9 )
            _InterlockedAdd((volatile signed __int32 *)(v9 + 180), 1u);
        }
        LOWORD(updated) = VfAvlCleanupLockContext((__int64)&v12, v8);
      }
    }
  }
  if ( ViFaultTraces )
  {
    v10 = (PVOID *)((char *)ViFaultTraces
                  + 72 * (_InterlockedIncrement(&ViFaultTracesIndex) & (unsigned int)(ViFaultTracesLength - 1)));
    *v10 = KeGetCurrentThread();
    LOWORD(updated) = RtlCaptureStackBackTrace(a1 + 1, 8u, v10 + 1, 0LL);
    if ( (unsigned __int16)updated < 8u )
      v10[(unsigned __int16)updated + 1] = 0LL;
  }
  return updated;
}
