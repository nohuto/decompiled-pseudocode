/*
 * XREFs of VfTargetDriversGetNode @ 0x1403B7A04
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403B7900 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403B796C (VfDifCaptureIoCallbacks.c)
 *     DifRegisterClassDriverPlugin @ 0x1406401C0 (DifRegisterClassDriverPlugin.c)
 *     VfUtilGetDriverBaseAddress @ 0x140C21740 (VfUtilGetDriverBaseAddress.c)
 *     VfUtilGetDriverImageSize @ 0x140C21790 (VfUtilGetDriverImageSize.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140C353F8 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C355E0 (ViThunkApplyWdmThunksCurrentSession.c)
 *     VfTargetDriversGetVerifierData @ 0x140C46B58 (VfTargetDriversGetVerifierData.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403B84FC (VfAvlCleanupLockContext.c)
 */

__int64 __fastcall VfTargetDriversGetNode(__int64 a1)
{
  __int64 v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v4 = 0LL;
    v3 = 0LL;
    v1 = ((__int64 (__fastcall *)(void *, __int128 *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           &v3,
           a1,
           1LL);
    VfAvlCleanupLockContext(&v3);
  }
  return v1;
}
