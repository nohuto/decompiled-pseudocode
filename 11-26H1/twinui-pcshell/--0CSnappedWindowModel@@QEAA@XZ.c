/*
 * XREFs of ??0CSnappedWindowModel@@QEAA@XZ @ 0x1800E4674
 * Callers:
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x1800E44F8 (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCo.c)
 *     ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1805A4EC0 (--$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIAppl_ea_1805A4EC0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CSnappedWindowModel *__fastcall CSnappedWindowModel::CSnappedWindowModel(CSnappedWindowModel *this)
{
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISnappedWindowModel>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CSnappedWindowModel::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
