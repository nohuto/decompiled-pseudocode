/*
 * XREFs of ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x180125EE4
 * Callers:
 *     ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x180125E40 (-DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ.c)
 * Callees:
 *     ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ @ 0x180125F40 (-HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DirtyOnNewData(CVisual *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 31);
  if ( v2
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 143LL)
    && CSynchronousSuperWetInk::HasNewData(*((CSynchronousSuperWetInk **)this + 31)) )
  {
    CVisual::PropagateFlags((__int64)this, 5u);
  }
}
