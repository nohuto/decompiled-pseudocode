/*
 * XREFs of ??1CScrollAnimation@@MEAA@XZ @ 0x180200004
 * Callers:
 *     ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1801A1678 (--1CInteractionTrackerPositionAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18013E998 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  __int64 v2; // rcx

  CScrollAnimation::Stop(this);
  v2 = *((_QWORD *)this + 37);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 37) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 344);
  CBaseExpression::~CBaseExpression(this);
}
