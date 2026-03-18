/*
 * XREFs of DxgkDdiResetVirtualFunction @ 0x140217DA8
 * Callers:
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x140092D50 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x140215B4C (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 */

__int64 __fastcall DxgkDdiResetVirtualFunction(__int64 *a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  if ( bTracingEnabled )
  {
    v11 = a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiResetVirtualFunction", (wchar_t *)L"%d", v11);
  }
  v7 = a1[396];
  v12 = v6;
  v8 = ADAPTER_RENDER::ResetVirtualFunction(v7, a2, (unsigned int *)&v12, a4);
  v9 = v8;
  if ( bTracingEnabled )
  {
    VgpuTrace(0, v8, a1, L"DxgkDdiResetVirtualFunction", 0LL);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196612,
      v6,
      (__int64)L"ResetVirtualFunction called, returning %1",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v9;
}
