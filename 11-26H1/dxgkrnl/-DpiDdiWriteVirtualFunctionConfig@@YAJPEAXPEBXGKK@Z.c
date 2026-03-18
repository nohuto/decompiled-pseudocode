/*
 * XREFs of ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x140092E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x140218430 (DxgkDdiWriteVirtualFunctionConfig.c)
 */

__int64 __fastcall DpiDdiWriteVirtualFunctionConfig(void *a1, const void *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  void *v9; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+38h] [rbp-40h] BYREF
  void *v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  DpiGetVirtualGpuType(a1, &v9);
  LOBYTE(v6) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, v9, 0LL, v6, 0, 0);
  v7 = v12;
  if ( v12 >= 0 )
    v7 = DxgkDdiWriteVirtualFunctionConfig(v11, a4, a5);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return v7;
}
