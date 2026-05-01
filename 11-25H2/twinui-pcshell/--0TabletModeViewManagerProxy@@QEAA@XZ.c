/*
 * XREFs of ??0TabletModeViewManagerProxy@@QEAA@XZ @ 0x18048D4FC
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeViewManagerProxy@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeViewManagerProxy@@@Z @ 0x1802335A4 (--$MakeAndInitialize@VTabletModeViewManagerProxy@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTablet.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1801E6194 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
TabletModeViewManagerProxy *__fastcall TabletModeViewManagerProxy::TabletModeViewManagerProxy(
        TabletModeViewManagerProxy *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeViewManagerProxy,ITabletModeViewManager>::`vftable'{for `ITabletModeViewManagerProxy'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeViewManagerProxy,ITabletModeViewManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeViewManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &TabletModeViewManagerProxy::`vftable'{for `ITabletModeViewManagerProxy'};
  *((_QWORD *)this + 1) = &TabletModeViewManagerProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeViewManager>'};
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
