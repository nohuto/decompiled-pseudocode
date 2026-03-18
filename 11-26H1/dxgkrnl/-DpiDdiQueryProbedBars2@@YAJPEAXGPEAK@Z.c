/*
 * XREFs of ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x140092B30
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryProbedBars @ 0x140217AA4 (DxgkDdiQueryProbedBars.c)
 */

__int64 __fastcall DpiDdiQueryProbedBars2(void *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r9
  unsigned int ProbedBars; // ebx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+50h] [rbp-18h]
  void *v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0LL;
  DpiGetVirtualGpuType(a1, &v9);
  LOBYTE(v3) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v6, v9, 0LL, v3, 0, 0);
  ProbedBars = v8;
  if ( v8 >= 0 )
    ProbedBars = DxgkDdiQueryProbedBars(v7);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v6);
  return ProbedBars;
}
