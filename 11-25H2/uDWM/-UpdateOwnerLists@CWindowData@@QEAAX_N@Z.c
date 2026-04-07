/*
 * XREFs of ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001C264
 * Callers:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180018AB0 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18001B438 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800535D8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowData::UpdateOwnerLists(CWindowData *this, bool a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = 0LL;
  v3 = *((_QWORD *)this + 75);
  *((_BYTE *)this + 674) = a2 | *((_BYTE *)this + 674) & 0xFE;
  if ( *(_DWORD *)(v3 + 520) )
  {
    v6 = v3;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 496) + 8 * v2);
      if ( *(_QWORD *)(v7 + 64) == v3 && *(_DWORD *)(v7 + 72) == 1 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
          (CSecondaryWindowRepresentation *)v7,
          this,
          a2);
      v6 = *((_QWORD *)this + 75);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(v6 + 520) );
  }
}
