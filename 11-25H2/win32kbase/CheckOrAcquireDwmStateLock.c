/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x140057B20
 * Callers:
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140227130 (NtDCompositionSendDwmLpcMessage.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237FD4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140238788 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     GreIsDwmStateLocked @ 0x140057BF0 (GreIsDwmStateLocked.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl
  __int64 v1; // rcx

  v0 = 0;
  if ( !IS_USERCRIT_OWNED_AT_ALL() && !(unsigned int)GreIsDwmStateLocked() )
  {
    GreLockDwmState(v1);
    return 1;
  }
  return v0;
}
