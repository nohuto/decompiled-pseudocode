/*
 * XREFs of ??0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z @ 0x180198CB0
 * Callers:
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x180198B0C (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x1802A6050 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

RefreshRateInfo *__fastcall RefreshRateInfo::RefreshRateInfo(
        RefreshRateInfo *this,
        const struct DXGI_OUTPUT_DWM_DESC *a2)
{
  int v2; // r10d
  LONGLONG v4; // r8
  LONGLONG v5; // rax

  *(_QWORD *)this = 0x10000003CLL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = 1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = *((_QWORD *)a2 + 5);
  if ( (*((_DWORD *)a2 + 27) & 0x400) != 0 )
  {
    v4 = g_qpcFrequency.QuadPart * *((unsigned int *)a2 + 15) / *((unsigned int *)a2 + 14);
    v5 = g_qpcFrequency.QuadPart * *((unsigned int *)a2 + 13) / *((unsigned int *)a2 + 12);
    if ( v4 != v5 )
    {
      *((_QWORD *)this + 1) = v4;
      *((_QWORD *)this + 2) = v5;
      v2 = *((_DWORD *)a2 + 16);
    }
  }
  *((_DWORD *)this + 6) = v2;
  return this;
}
