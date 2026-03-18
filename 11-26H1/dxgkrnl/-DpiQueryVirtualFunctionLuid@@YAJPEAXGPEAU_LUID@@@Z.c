/*
 * XREFs of ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x140093120
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x140217C6C (DxgkDdiQueryVirtualFunctionLuid.c)
 */

__int64 __fastcall DpiQueryVirtualFunctionLuid(_DWORD *a1, __int64 a2, struct _LUID *a3)
{
  __int64 v3; // r9
  unsigned int VirtualFunctionLuid; // ebx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+50h] [rbp-18h]
  void *v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0LL;
  DpiGetVirtualGpuType(a1, &v9);
  LOBYTE(v3) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v6, v9, 0LL, v3, 0, 0);
  VirtualFunctionLuid = v8;
  if ( v8 >= 0 )
    VirtualFunctionLuid = DxgkDdiQueryVirtualFunctionLuid(v7);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v6);
  return VirtualFunctionLuid;
}
