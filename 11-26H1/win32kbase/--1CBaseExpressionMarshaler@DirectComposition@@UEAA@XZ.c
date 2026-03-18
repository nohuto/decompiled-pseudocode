/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x140137118
 * Callers:
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1401370E0 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CConditionalExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C201C (--1CConditionalExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CKeyframeAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C39C4 (--1CKeyframeAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022A960 (--_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z @ 0x140137154 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  v5 = (char *)*((_QWORD *)this + 11);
  if ( v5 )
    GreDeleteFastMutex(v5, a2, a3, a4);
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CBaseExpressionMarshaler *)((char *)this + 104), 0);
}
