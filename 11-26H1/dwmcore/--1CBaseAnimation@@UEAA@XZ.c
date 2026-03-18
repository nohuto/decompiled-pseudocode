/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x18016A42C
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18016A32C (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1802465A0 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18027F408 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 80);
  CResource::~CResource(this);
}
