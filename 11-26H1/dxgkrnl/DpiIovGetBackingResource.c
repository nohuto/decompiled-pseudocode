/*
 * XREFs of DpiIovGetBackingResource @ 0x14024FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?GetBackingResource@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x140214640 (-GetBackingResource@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETBACKINGRESOURCE.c)
 *     DxgkDdiGetResourceForBar @ 0x140217400 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x140217BB8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetBackingResource(_DWORD *a1, struct _LUID a2, unsigned __int16 a3, __int64 a4, void *a5)
{
  _QWORD *v5; // r14
  unsigned int VirtualGpuType; // eax
  __int64 v9; // r9
  unsigned int v10; // r15d
  int ResourceForBar; // ebx
  _QWORD *v12; // rsi
  __int64 v13; // r9
  int BackingResource; // eax
  __int64 v16; // [rsp+30h] [rbp-39h]
  int v17; // [rsp+38h] [rbp-31h]
  unsigned int v18; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int16 v19; // [rsp+4Ch] [rbp-1Dh]
  __int16 v20; // [rsp+4Eh] [rbp-1Bh]
  __int64 v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h]
  _BYTE v23[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  void *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+17h]
  struct _LUID v27; // [rsp+D0h] [rbp+67h] BYREF

  v27 = a2;
  v5 = a5;
  a5 = 0LL;
  *(_OWORD *)a4 = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *v5 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &a5);
  LOBYTE(v9) = 1;
  v10 = VirtualGpuType;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v23, a5, 0LL, v9, 0, 0);
  ResourceForBar = v26;
  if ( v26 < 0 )
    goto LABEL_12;
  v12 = v25;
  LOWORD(a5) = 0;
  ResourceForBar = DxgkDdiQueryVirtualFunctionIndexByLuid(v25, v10, &v27, &a5);
  if ( ResourceForBar < 0 )
    goto LABEL_12;
  if ( *(_BYTE *)(v24 + 2716) )
  {
    if ( !*(_QWORD *)(v24 + 5376) )
    {
      ResourceForBar = DxgkDdiGetResourceForBar(v12, v10, (unsigned __int16)a5, a3, a4);
      if ( ResourceForBar >= 0 )
      {
        *v5 = *(_QWORD *)(a4 + 4);
        *(_OWORD *)a4 = 0LL;
        *(_DWORD *)(a4 + 16) = 0;
      }
      goto LABEL_12;
    }
  }
  else if ( !*(_QWORD *)(v24 + 5376) )
  {
    goto LABEL_12;
  }
  v18 = (unsigned __int16)a5;
  v20 = 0;
  v22 = 0LL;
  v19 = a3;
  v21 = a4;
  BackingResource = ADAPTER_RENDER::GetBackingResource(v12[396], v10, &v18, v13);
  ResourceForBar = BackingResource;
  if ( bTracingEnabled )
  {
    v17 = v19;
    LODWORD(v16) = v18;
    VgpuTrace(1, BackingResource, v12, L"DxgkDdiGetBackingResource", (wchar_t *)L"%d %d", v16, v17);
  }
  if ( ResourceForBar >= 0 )
    *v5 = v22;
LABEL_12:
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v23);
  return (unsigned int)ResourceForBar;
}
