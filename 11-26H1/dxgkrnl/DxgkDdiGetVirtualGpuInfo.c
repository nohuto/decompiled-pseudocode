/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x140217498
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140083820 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGAUTOEXPUSHLOCK@@QEAAXXZ @ 0x1400838F0 (-AcquireExclusive@DXGAUTOEXPUSHLOCK@@QEAAXXZ.c)
 *     DpiGetGpuVirtualizationLock @ 0x1400856B0 (DpiGetGpuVirtualizationLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x140214AC0 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(__int64 *a1, unsigned int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  int v9; // r8d
  unsigned int VirtualGpuInfo; // ebx
  unsigned int v12; // [rsp+28h] [rbp-F0h]
  _BYTE v13[8]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 GpuVirtualizationLock; // [rsp+38h] [rbp-E0h]
  int v15; // [rsp+40h] [rbp-D8h]
  _BYTE v16[144]; // [rsp+50h] [rbp-C8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, (struct DXGADAPTER *const)a1, 0LL);
  GpuVirtualizationLock = DpiGetGpuVirtualizationLock(a1[27]);
  v15 = v9;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL) < 0 )
    {
      VirtualGpuInfo = -1073741130;
      goto LABEL_7;
    }
    DXGAUTOEXPUSHLOCK::AcquireExclusive((DXGAUTOEXPUSHLOCK *)v13);
  }
  VirtualGpuInfo = ADAPTER_RENDER::GetVirtualGpuInfo(a1[396], a2, a3, a4, a5);
  if ( bTracingEnabled )
  {
    v12 = *a3;
    VgpuTrace(1, VirtualGpuInfo, a1, L"DxgkDdiGetVirtualGpuInfo", (wchar_t *)L"%d", v12);
  }
LABEL_7:
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v13);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  return VirtualGpuInfo;
}
