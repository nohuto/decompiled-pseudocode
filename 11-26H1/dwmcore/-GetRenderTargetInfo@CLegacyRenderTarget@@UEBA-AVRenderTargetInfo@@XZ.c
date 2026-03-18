/*
 * XREFs of ?GetRenderTargetInfo@CLegacyRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180195A90
 * Callers:
 *     ?GetRenderTargetInfo@CLegacyRenderTarget@@WEI@EBA?AVRenderTargetInfo@@XZ @ 0x180248920 (-GetRenderTargetInfo@CLegacyRenderTarget@@WEI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@CLegacyRenderTarget@@WFA@EBA?AVRenderTargetInfo@@XZ @ 0x180248930 (-GetRenderTargetInfo@CLegacyRenderTarget@@WFA@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 32024);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 32008);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
