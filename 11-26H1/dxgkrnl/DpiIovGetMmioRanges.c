/*
 * XREFs of DpiIovGetMmioRanges @ 0x14024FF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRanges @ 0x1402172C8 (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x140217BB8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRanges(
        _DWORD *a1,
        struct _LUID a2,
        unsigned __int16 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v5; // r14d
  unsigned int VirtualGpuType; // eax
  __int64 v8; // r9
  unsigned int v9; // edi
  int MmioRanges; // ebx
  __int64 v11; // r9
  unsigned __int16 v13; // [rsp+38h] [rbp-21h] BYREF
  void *v14; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v15[4]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1h]
  _BYTE v17[8]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v18; // [rsp+68h] [rbp+Fh]
  void *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+80h] [rbp+27h]
  struct _LUID v21; // [rsp+C0h] [rbp+67h] BYREF

  v21 = a2;
  v5 = a3;
  v14 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v14);
  LOBYTE(v8) = 1;
  v9 = VirtualGpuType;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v17, v14, 0LL, v8, 0, 0);
  MmioRanges = v20;
  if ( v20 >= 0 )
  {
    if ( *(_QWORD *)(v18 + 5392) )
    {
      v13 = 0;
      MmioRanges = DxgkDdiQueryVirtualFunctionIndexByLuid(v19, v9, &v21, &v13);
      if ( MmioRanges >= 0 )
      {
        v15[3] = 0;
        v16 = a5;
        v15[2] = a4 / 0x18;
        v15[1] = v5;
        v15[0] = v13;
        MmioRanges = DxgkDdiGetMmioRanges(v19, v9, (__int64)v15, v11);
      }
    }
    else
    {
      MmioRanges = -1073741811;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v17);
  return (unsigned int)MmioRanges;
}
