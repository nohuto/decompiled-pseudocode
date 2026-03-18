/*
 * XREFs of ?ProcessSetRoot@CRemoteAppRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x180249920
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x180252C70 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetRoot(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETROOT *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = CRenderTarget::ProcessSetRoot(this, a2, a3);
  v5 = *((_QWORD *)this + 14);
  if ( v5 && *(_DWORD *)(*((_QWORD *)this + 3) + 6256LL) == 7 )
    *(_BYTE *)(v5 + 2629) = 1;
  *((_BYTE *)this + 2188) = 1;
  return result;
}
