/*
 * XREFs of DxgkDdiGetVendorAndDevice @ 0x1403F3468
 * Callers:
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x140092A00 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVendorAndDevice@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1403F3504 (-GetVendorAndDevice@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVENDORANDDEVICE.c)
 */

void __fastcall DxgkDdiGetVendorAndDevice(_QWORD *a1, __int64 a2, unsigned __int16 a3, _WORD *a4, _WORD *a5)
{
  int v5; // esi
  __int64 v7; // rcx
  bool v9; // zf
  int v10; // ecx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v5 = a3;
  v7 = a1[396];
  v15 = 0;
  v14 = a3;
  ADAPTER_RENDER::GetVendorAndDevice(v7, a2, &v14);
  v9 = bTracingEnabled == 0;
  v10 = HIWORD(v15);
  *a4 = v15;
  *a5 = v10;
  if ( !v9 )
  {
    v13 = v10;
    v12 = (unsigned __int16)*a4;
    v11 = v5;
    VgpuTrace(1, 0, a1, L"DxgkDdiGetVendorAndDevice", (wchar_t *)L"%d %d %d", v11, v12, v13);
  }
}
