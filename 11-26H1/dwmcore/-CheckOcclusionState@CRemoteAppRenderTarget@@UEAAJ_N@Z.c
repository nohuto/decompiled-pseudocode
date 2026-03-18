/*
 * XREFs of ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180255A00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x1801261F8 (-IsVailContainer@@YA_NXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255B18 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180256610 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802566B4 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CheckOcclusionState(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v1; // rdi

  v1 = (CRemoteAppRenderTarget *)((char *)this - 96);
  if ( *((_BYTE *)this + 2092) )
    CRemoteAppRenderTarget::UpdateTransformAndTreeBounds((CRemoteAppRenderTarget *)((char *)this - 96));
  if ( *(int *)(*((_QWORD *)this - 9) + 6256LL) >= 5
    && *((_DWORD *)this + 6)
    && *((_DWORD *)this + 7)
    && (int)CRemoteAppRenderTarget::EnsureSwapChain(v1) >= 0
    && *(_DWORD *)(*((_QWORD *)this - 9) + 6256LL) == 7 )
  {
    if ( *((_BYTE *)this + 2093) )
    {
      IsVailContainer();
      *((_BYTE *)this + 2093) = 0;
    }
    if ( *((_BYTE *)this + 2094) )
      CRemoteAppRenderTarget::SendCompSurfHandle(v1);
  }
  return 142213121LL;
}
