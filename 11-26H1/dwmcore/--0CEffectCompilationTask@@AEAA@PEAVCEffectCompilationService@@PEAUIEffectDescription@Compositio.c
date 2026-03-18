/*
 * XREFs of ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x18020F9BC
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??0?$atomic@K@std@@QEAA@K@Z @ 0x18020FA48 (--0-$atomic@K@std@@QEAA@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CEffectCompilationTask *__fastcall CEffectCompilationTask::CEffectCompilationTask(
        CEffectCompilationTask *this,
        struct CEffectCompilationService *a2,
        struct Windows::UI::Composition::IEffectDescription *a3)
{
  CComposition *CurrentFrameId; // rax
  void (__fastcall ***v5)(_QWORD); // r8
  __int64 v6; // rcx
  __int64 v7; // rdx

  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v6 + 8) = CurrentFrameId;
  *(_QWORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_DWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 56) = v5;
  if ( v5 )
    (**v5)(v5);
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  std::atomic<unsigned long>::atomic<unsigned long>((char *)this + 100);
  return this;
}
