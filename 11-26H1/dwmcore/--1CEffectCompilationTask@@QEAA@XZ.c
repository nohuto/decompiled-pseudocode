/*
 * XREFs of ??1CEffectCompilationTask@@QEAA@XZ @ 0x180245048
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1801BB6C0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     ??0EffectDescriptionKey@@QEAA@PEBUIEffectDescription@Composition@UI@Windows@@@Z @ 0x1801C776C (--0EffectDescriptionKey@@QEAA@PEBUIEffectDescription@Composition@UI@Windows@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18021EC2C (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ??$_Erase@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUEffectDescriptionKey@@@Z @ 0x18022EB94 (--$_Erase@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectComp.c)
 *     ??1?$unique_ptr@VCCompiledEffectCache@@U?$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA@XZ @ 0x180244FB0 (--1-$unique_ptr@VCCompiledEffectCache@@U-$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180245118 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(OLECHAR **this)
{
  OLECHAR *v2; // rsi
  const struct Windows::UI::Composition::IEffectDescription **v3; // rdi
  const struct Windows::UI::Composition::IEffectDescription *v4; // rcx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *this = (OLECHAR *)&CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread((CEffectCompilationTask *)this);
  v2 = this[2];
  v3 = (const struct Windows::UI::Composition::IEffectDescription **)(this + 7);
  if ( !*((_BYTE *)v2 + 240) )
  {
    EffectDescriptionKey::EffectDescriptionKey((EffectDescriptionKey *)v5, *v3);
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Erase<EffectDescriptionKey>(
      (_QWORD *)v2 + 12,
      v5);
    *((_BYTE *)v2 + 242) = 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(this + 11);
  std::unique_ptr<CCompiledEffectCache>::~unique_ptr<CCompiledEffectCache>(this + 10);
  v4 = *v3;
  if ( *v3 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(const struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 3));
}
