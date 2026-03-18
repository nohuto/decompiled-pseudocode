/*
 * XREFs of ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1400928A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetDeviceLocation @ 0x140216FA0 (DxgkDdiGetDeviceLocation.c)
 */

void __fastcall DpiDdiGetDeviceLocation(
        void *a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v6; // r9
  void *v7; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-40h] BYREF
  void *v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-20h]

  v7 = 0LL;
  DpiGetVirtualGpuType(a1, &v7);
  LOBYTE(v6) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, v7, 0LL, v6, 0, 0);
  if ( v10 >= 0 )
    DxgkDdiGetDeviceLocation(v9, (__int64)a4, (__int64)a5);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
}
