/*
 * XREFs of ??1CNaturalAnimationScalarForceAdapter@@EEAA@XZ @ 0x18028ECFC
 * Callers:
 *     ??_GCNaturalAnimationScalarForceAdapter@@EEAAPEAXI@Z @ 0x18027B350 (--_GCNaturalAnimationScalarForceAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNaturalAnimationScalarForceAdapter::~CNaturalAnimationScalarForceAdapter(
        CNaturalAnimationScalarForceAdapter *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNaturalAnimationScalarForceAdapter::`vftable';
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
