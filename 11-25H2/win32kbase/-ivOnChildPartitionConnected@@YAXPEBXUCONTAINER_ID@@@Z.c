/*
 * XREFs of ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021AB60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401ABFC0 (--0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021B978 (-ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C15C (-ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall ivOnChildPartitionConnected(__int64 a1, int a2)
{
  const struct CONTAINER_ID *v2; // rdx
  __int64 v3; // rdx
  const struct CONTAINER_ID *v4; // rdx
  IVForegroundSync *v5; // rcx
  const struct CONTAINER_ID *v6; // rdx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1u, 1u);
  IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v7, v2);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v3);
  IVForegroundSync::ivOnChildPartitionConnected(v5, v4);
  IVContentRectsSync::ivOnChildPartitionConnected((IVContentRectsSync *)&v7, v6);
}
