/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180018310
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800180D0 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800182B0 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180019DF0 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001793C (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180017FC0 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibility(CWindowData *this)
{
  __int64 v1; // rax
  bool v3; // al

  v1 = *((_QWORD *)this + 75);
  v3 = v1 && *(char *)(v1 + 737) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR(this);
  if ( (*((_BYTE *)this + 738) & 1) != v3 )
    CWindowData::UpdateOwnerLists(this, !(*((_BYTE *)this + 738) & 1));
}
