/*
 * XREFs of ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800BEA18
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800BE9AC (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18007BAB8 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveVisualByIndex(CProjectionBorderManager *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rdi
  struct CVisual *v5; // rdx
  CContainerVisual *v6; // rcx
  CBaseObject *v7; // rcx

  if ( a2 != -1 && (signed int)a2 < *((_DWORD *)this + 106) )
  {
    v3 = 56LL * a2;
    v4 = (__int64 *)((char *)this + 400);
    if ( *(_QWORD *)(v3 + *((_QWORD *)this + 50)) )
    {
      _mm_lfence();
      v5 = *(struct CVisual **)(v3 + *v4);
      v6 = (CContainerVisual *)*((_QWORD *)v5 + 3);
      if ( v6 )
        CContainerVisual::RemoveChild(v6, v5);
      v7 = *(CBaseObject **)(v3 + *v4);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)(v3 + *v4) = 0LL;
      }
    }
    DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt(v4, a2);
  }
}
