/*
 * XREFs of ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x140092A00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1403F3468 (DxgkDdiGetVendorAndDevice.c)
 */

void __fastcall DpiDdiGetVendorAndDevice(void *a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  __int64 v5; // r9
  void *v6; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v7[16]; // [rsp+38h] [rbp-40h] BYREF
  void *v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-20h]

  v6 = 0LL;
  DpiGetVirtualGpuType(a1, &v6);
  LOBYTE(v5) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, v6, 0LL, v5, 0, 0);
  if ( v9 >= 0 )
    DxgkDdiGetVendorAndDevice(v8, (__int64)a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
}
