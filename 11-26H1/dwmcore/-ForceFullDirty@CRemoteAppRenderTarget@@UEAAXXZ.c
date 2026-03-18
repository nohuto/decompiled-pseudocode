/*
 * XREFs of ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x180206340
 * Callers:
 *     ?ProcessSetClearColor@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180206310 (-ProcessSetClearColor@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE@@@Z @ 0x18021EED8 (-ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPREN.c)
 * Callees:
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x1802063B4 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 */

void __fastcall CRemoteAppRenderTarget::ForceFullDirty(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v2; // rcx
  __int64 v3; // rax

  v2 = (CRemoteAppRenderTarget *)((char *)this - 96);
  if ( *(_DWORD *)(*((_QWORD *)this - 9) + 6256LL) == 7 )
  {
    v3 = *((_QWORD *)v2 + 14);
    if ( v3 )
      *(_BYTE *)(v3 + 2629) = 1;
    *(_WORD *)((char *)this + 2093) = 257;
  }
  else
  {
    CRemoteAppRenderTarget::SetSize(v2, (const struct D2D_SIZE_U *)this + 3);
  }
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 184);
}
