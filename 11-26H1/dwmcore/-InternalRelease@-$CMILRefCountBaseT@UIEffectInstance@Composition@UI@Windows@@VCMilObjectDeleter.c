/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2D40
 * Callers:
 *     ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1800E1290 (-Release@CRadialGradientEffect@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E147C (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ??4?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18027EAA4 (--4-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18027F27C (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800E2EC0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(
        __int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 8);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
    }
  }
  return v3;
}
