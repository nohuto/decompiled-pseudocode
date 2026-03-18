/*
 * XREFs of DxgkDdiSetVirtualFunctionPowerState @ 0x140218298
 * Callers:
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x140092D90 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x14021653C (-SetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETVIRTU.c)
 */

__int64 __fastcall DxgkDdiSetVirtualFunctionPowerState(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v11; // [rsp+28h] [rbp-70h]
  int v12; // [rsp+30h] [rbp-68h]
  unsigned int v13[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a3;
  v7 = a1[396];
  v8 = (int)a4;
  v13[0] = a3;
  v13[1] = a4;
  v13[2] = a5;
  v9 = (int)ADAPTER_RENDER::SetVirtualFunctionPowerState(v7, a2, v13, a4);
  if ( bTracingEnabled )
  {
    v12 = v8;
    v11 = v5;
    VgpuTrace(1, v9, a1, L"DxgkDdiSetVirtualFunctionPowerState", (wchar_t *)L"%d %d", v11, v12);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196611,
      v5,
      (__int64)L"SetVirtualFunctionPowerState called for power state %1 and wake set %2, returning %3",
      v8,
      a5,
      v9,
      0LL,
      0LL);
  }
  return (unsigned int)v9;
}
