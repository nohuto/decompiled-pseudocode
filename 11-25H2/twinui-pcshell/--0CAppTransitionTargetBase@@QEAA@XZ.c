/*
 * XREFs of ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1804D2328
 * Callers:
 *     ??$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x1804D2030 (--$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationP.c)
 *     ??$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x1804D21A8 (--$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimat.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1804D2304 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CAppTransitionTargetBase *__fastcall CAppTransitionTargetBase::CAppTransitionTargetBase(CAppTransitionTargetBase *this)
{
  CAppTransitionTargetBase *result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>(this);
  *((_QWORD *)this + 1) = &CAppTransitionTargetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITaggableTarget,CWRLObjectWithSite>::`vftable'{for `ITaggableTarget'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAppTransitionTargetBase::`vftable'{for `ITaggableTarget'};
  *((_QWORD *)this + 1) = &CAppTransitionTargetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  result = this;
  *((_QWORD *)this + 5) = 4095LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 39) = -1;
  *((_WORD *)this + 76) = 0;
  *((_BYTE *)this + 154) = 1;
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *(_QWORD *)((char *)this + 228) = 0LL;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  return result;
}
