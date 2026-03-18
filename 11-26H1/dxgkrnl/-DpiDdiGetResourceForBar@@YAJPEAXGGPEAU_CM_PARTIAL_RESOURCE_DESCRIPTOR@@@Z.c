/*
 * XREFs of ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x140092950
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetResourceForBar @ 0x140217400 (DxgkDdiGetResourceForBar.c)
 */

__int64 __fastcall DpiDdiGetResourceForBar(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a4)
{
  __int64 v5; // r9
  unsigned int ResourceForBar; // ebx
  void *v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-40h] BYREF
  void *v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-20h]

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  LOBYTE(v5) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL, v5, 0, 0);
  ResourceForBar = v11;
  if ( v11 >= 0 )
    ResourceForBar = DxgkDdiGetResourceForBar(v10, (__int64)a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return ResourceForBar;
}
