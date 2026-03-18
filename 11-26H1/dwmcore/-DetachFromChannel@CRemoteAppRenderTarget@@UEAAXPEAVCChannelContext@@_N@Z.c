/*
 * XREFs of ?DetachFromChannel@CRemoteAppRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180255AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18020613C (-DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRemoteAppRenderTarget::DetachFromChannel(struct CChannelContext **this, struct CChannelContext *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[7] || ((_BYTE)this[5] & 2) != 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\remoteapprendertarget.cpp",
      (const char *)0x8007029CLL);
  if ( this[271] )
    CRemoteAppRenderTarget::DestroyWindow((CRemoteAppRenderTarget *)this);
  CNotificationResource::DetachFromChannel((CNotificationResource *)this, a2);
}
