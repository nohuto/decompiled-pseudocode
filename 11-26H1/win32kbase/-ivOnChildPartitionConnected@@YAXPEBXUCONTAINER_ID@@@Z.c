/*
 * XREFs of ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021F4D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C628 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x140226A54 (-ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall ivOnChildPartitionConnected(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  const struct CONTAINER_ID *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const struct CONTAINER_ID *v9; // rdx
  IVForegroundSync *v10; // rcx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  EnterSharedCrit(1LL, 1LL, a3, a4);
  IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v11, v4);
  UserSessionSwitchLeaveCritWithNonPaged(v6, v5, v7, v8);
  IVForegroundSync::ivOnChildPartitionConnected(v10, v9);
}
