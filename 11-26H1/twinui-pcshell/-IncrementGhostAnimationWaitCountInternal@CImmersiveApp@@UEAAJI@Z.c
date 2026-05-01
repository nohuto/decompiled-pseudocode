/*
 * XREFs of ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1802FE150
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005CB4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005D1D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1802FDBE0 (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1803002B4 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 */

__int64 __fastcall CImmersiveApp::IncrementGhostAnimationWaitCountInternal(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection *v1; // rbx
  int v2; // edx
  int v3; // r8d

  v1 = (CImmersiveApp *)((char *)this + 176);
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 176)) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v1, 0LL, 4LL);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v1) )
  {
    CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted(v1);
    if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v1, v2, v3) )
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v1);
  }
  return 2147947423LL;
}
