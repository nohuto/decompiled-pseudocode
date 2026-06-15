/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x18006F0DC
 * Callers:
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x18006EF3C (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 *     ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x18006EFA4 (--0CSharedStreamGroupProxy@@QEAA@XZ.c)
 * Callees:
 *     ??0CBaseStreamGroupProxy@@QEAA@XZ @ 0x18006F168 (--0CBaseStreamGroupProxy@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>(
        _QWORD *a1)
{
  CBaseStreamGroupProxy::CBaseStreamGroupProxy((CBaseStreamGroupProxy *)(a1 + 1));
  a1[47] = 1LL;
  *a1 = &CExclusiveStreamGroupProxy::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IStreamGroupProxy'};
  a1[2] = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  a1[44] = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  a1[45] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
