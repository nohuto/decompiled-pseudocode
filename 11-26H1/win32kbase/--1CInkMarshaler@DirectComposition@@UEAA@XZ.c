/*
 * XREFs of ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140128F7C
 * Callers:
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022A9A0 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CInkMarshaler::~CInkMarshaler(DirectComposition::CInkMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CInkMarshaler *)((char *)this + 112));
}
