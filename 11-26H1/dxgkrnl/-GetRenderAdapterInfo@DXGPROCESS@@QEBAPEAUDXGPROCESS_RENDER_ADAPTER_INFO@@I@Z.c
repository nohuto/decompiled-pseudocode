/*
 * XREFs of ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4
 * Callers:
 *     ?GetProcessRenderAdapterInfo@DXGDEVICE@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@XZ @ 0x14003797C (-GetProcessRenderAdapterInfo@DXGDEVICE@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@XZ.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401F6364 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     DxgkSetStablePowerState @ 0x1401F8F00 (DxgkSetStablePowerState.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x140213EB4 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403717C0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A1ADC (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

struct DXGPROCESS_RENDER_ADAPTER_INFO *__fastcall DXGPROCESS::GetRenderAdapterInfo(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v6; // edx
  int v7; // r8d

  v2 = 0LL;
  v3 = a2;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          2650,
          v6,
          v7,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v3 < DXGGLOBAL::GetMaximumGlobalAdapterCount(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal) )
    return *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)(*((_QWORD *)this + 6) + 8 * v3);
  return (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v2;
}
