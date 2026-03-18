/*
 * XREFs of DpiIovGetMmioRangeCount @ 0x14024FE20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1402171F8 (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x140217BB8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRangeCount(_DWORD *a1, struct _LUID a2, __int64 a3)
{
  unsigned int VirtualGpuType; // eax
  __int64 v5; // r9
  unsigned int v6; // esi
  int MmioRangeCount; // edi
  __int64 v8; // r9
  __int64 v9; // xmm1_8
  unsigned __int16 v11; // [rsp+30h] [rbp-39h] BYREF
  void *v12; // [rsp+38h] [rbp-31h] BYREF
  struct _LUID v13; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v15; // [rsp+50h] [rbp-19h]
  void *v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+68h] [rbp-1h]
  unsigned int v18; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v19; // [rsp+7Ch] [rbp+13h]
  __int64 v20; // [rsp+8Ch] [rbp+23h]

  v13 = a2;
  v12 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v12);
  LOBYTE(v5) = 1;
  v6 = VirtualGpuType;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v14, v12, 0LL, v5, 0, 0);
  MmioRangeCount = v17;
  if ( v17 >= 0 )
  {
    if ( *(_QWORD *)(v15 + 5384) )
    {
      v11 = 0;
      MmioRangeCount = DxgkDdiQueryVirtualFunctionIndexByLuid(v16, v6, &v13, &v11);
      if ( MmioRangeCount >= 0 )
      {
        v18 = v11;
        v19 = 0LL;
        v20 = 0LL;
        MmioRangeCount = DxgkDdiGetMmioRangeCount(v16, v6, &v18, v8);
        if ( MmioRangeCount >= 0 )
        {
          v9 = v20;
          *(_OWORD *)a3 = v19;
          *(_QWORD *)(a3 + 16) = v9;
        }
      }
    }
    else
    {
      *(_OWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 16) = 0LL;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v14);
  return (unsigned int)MmioRangeCount;
}
