/*
 * XREFs of ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401C11D0
 * Callers:
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140138C80 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402407E0 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140240FB0 (-ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140244980 (-ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140138DF0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CWeakReferenceBase *v6; // rdx

  v6 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v6, a3, a4);
    *((_QWORD *)this + 9) = 0LL;
  }
  LOBYTE(a3) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CBaseExpressionMarshaler *)((char *)this + 104),
    (struct DirectComposition::CApplicationChannel *)a2,
    a3,
    a4);
}
