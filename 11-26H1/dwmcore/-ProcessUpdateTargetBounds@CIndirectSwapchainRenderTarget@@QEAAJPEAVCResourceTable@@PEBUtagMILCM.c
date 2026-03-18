/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x18021E344
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x18005F7B0 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  _DWORD *v3; // rdx

  v3 = (_DWORD *)((char *)this + 2484);
  if ( *((_DWORD *)this + 620) != *((_DWORD *)a3 + 4) || *v3 != *((_DWORD *)a3 + 5) )
    *((_BYTE *)this + 2449) = 1;
  *((_DWORD *)this + 50) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
  *((_DWORD *)this + 51) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
  *((_DWORD *)this + 620) = *((_DWORD *)a3 + 4);
  *v3 = *((_DWORD *)a3 + 5);
  COffScreenRenderTarget::UpdateTransformAndTreeBounds(this);
  return 0LL;
}
