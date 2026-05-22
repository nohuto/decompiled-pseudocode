/*
 * XREFs of ?OnCacheTimer@InputSinkDataCache@@QEAAXXZ @ 0x18005ACD8
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180059444 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnCacheTimerStatic@InputSinkDataCache@@SAJPEAX@Z @ 0x18005ACC0 (-OnCacheTimerStatic@InputSinkDataCache@@SAJPEAX@Z.c)
 * Callees:
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005AD04 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 */

void __fastcall InputSinkDataCache::OnCacheTimer(InputSinkDataCache *this)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax

  *((_BYTE *)this + 104) = 0;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *))(*(_QWORD *)InputSiteHierarchyManager + 40LL))(InputSiteHierarchyManager);
}
