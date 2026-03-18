/*
 * XREFs of ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B0E4
 * Callers:
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B09C (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403717C0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140373850 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 */

bool __fastcall DXGADAPTER::IsGpuVaIoMmuSupported(DXGADAPTER *this)
{
  const struct SYSMM_ADAPTER *v1; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (const struct SYSMM_ADAPTER *)*((_QWORD *)this + 28);
  v3 = 0;
  SysMmQueryIommuState(v1, (union SYSMM_IOMMU_STATE *)&v3);
  return (v3 & 4) != 0;
}
