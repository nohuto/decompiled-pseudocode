/*
 * XREFs of ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x180245FE0
 * Callers:
 *     ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x1802469B0 (--_GCLegacyAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CLegacyAnimationTrigger::~CLegacyAnimationTrigger(CLegacyAnimationTrigger *this)
{
  *(_QWORD *)this = &CLegacyAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 72);
  CResource::~CResource(this);
}
