/*
 * XREFs of ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180286888
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x180286260 (--1CVisualCapture@@UEAA@XZ.c)
 *     ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x18028631C (-CheckForRenderCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180286810 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180148E64 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // rax
  int ChannelCallbackId; // eax
  __int16 v4; // dx
  __int64 v5; // r10
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp-8h]

  if ( *((_DWORD *)this + 608) != 3 )
  {
    v2 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 608) = 3;
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 6384) + 72LL))(*(_QWORD *)(v2 + 6384), 11LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      CoreUICallSend(v5, &v6, 2LL, 11LL, v4, &unk_1802F5AD3, ChannelCallbackId, *((unsigned int *)this + 18), v7);
    }
    CRenderTarget::RemoveFromRenderTargetManager(this);
  }
}
