/*
 * XREFs of McTemplateK0ppq_EtwWriteTransfer @ 0x14003F8FC
 * Callers:
 *     ?Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z @ 0x1400F69DC (-Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x140113140 (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012A730 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 4u, &v4);
}
