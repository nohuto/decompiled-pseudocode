/*
 * XREFs of TmEnableCallbacks @ 0x1404F9C90
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmEnableCallbacks(
        PKRESOURCEMANAGER ResourceManager,
        PTM_RM_NOTIFICATION CallbackRoutine,
        PVOID RMKey)
{
  return __imp_TmEnableCallbacks(ResourceManager, CallbackRoutine, RMKey);
}
