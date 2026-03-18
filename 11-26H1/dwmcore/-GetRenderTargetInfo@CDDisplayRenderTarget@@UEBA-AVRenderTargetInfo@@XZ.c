/*
 * XREFs of ?GetRenderTargetInfo@CDDisplayRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180195A60
 * Callers:
 *     ?GetRenderTargetInfo@CDDisplayRenderTarget@@WEI@EBA?AVRenderTargetInfo@@XZ @ 0x180248900 (-GetRenderTargetInfo@CDDisplayRenderTarget@@WEI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@CDDisplayRenderTarget@@WFA@EBA?AVRenderTargetInfo@@XZ @ 0x180248910 (-GetRenderTargetInfo@CDDisplayRenderTarget@@WFA@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 32032);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 32016);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
