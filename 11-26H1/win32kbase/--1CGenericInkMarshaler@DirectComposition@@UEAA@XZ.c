/*
 * XREFs of ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140129050
 * Callers:
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140128FA0 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CGenericInkMarshaler *)((char *)this + 96));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CGenericInkMarshaler *)((char *)this + 56));
}
