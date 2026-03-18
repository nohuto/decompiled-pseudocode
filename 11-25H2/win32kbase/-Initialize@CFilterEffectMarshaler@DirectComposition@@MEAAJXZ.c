/*
 * XREFs of ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019CB70
 * Callers:
 *     ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1401577C0 (-Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1402312F0 (-Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140231920 (-Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140231C60 (-Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140232400 (-Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140232560 (-Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1402327E0 (-Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140232AA0 (-Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1402335B0 (-Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140233F30 (-Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140234150 (-Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x14019CBA0 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

int __fastcall DirectComposition::CFilterEffectMarshaler::Initialize(DirectComposition::CFilterEffectMarshaler *this)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(DirectComposition::CFilterEffectMarshaler *))(*(_QWORD *)this + 320LL))(this);
  return DirectComposition::CEffectInputSet::Initialize(
           (DirectComposition::CFilterEffectMarshaler *)((char *)this + 72),
           v2);
}
