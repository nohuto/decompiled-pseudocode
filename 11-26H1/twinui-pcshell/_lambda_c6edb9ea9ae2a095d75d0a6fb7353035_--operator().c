/*
 * XREFs of _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1803F6824
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800B7BF0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___::_lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___ @ 0x1802C6270 (wil--details--lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___--_lambda_call__lambda_c6ed.c)
 * Callees:
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1802A356C (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x1803FA180 (-TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z.c)
 */

void __fastcall lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()(int **a1)
{
  __int64 QuadPart; // rcx
  __int64 v3; // r11
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx
  int *v8; // rax
  const __int64 *v9; // rdi
  unsigned __int16 *v10; // rbx
  unsigned int v11; // esi
  _DWORD *v12; // rcx
  TaskFlowDataEngineTelemetry *v13; // rcx
  LARGE_INTEGER v14; // [rsp+40h] [rbp+8h] BYREF

  v14.QuadPart = 0LL;
  QueryPerformanceFrequency(&v14);
  QuadPart = v14.QuadPart;
  v3 = **a1;
  v4 = 1000000LL * (*(_QWORD *)&a1[1][2 * v3] - *(_QWORD *)a1[1]) / v14.QuadPart;
  if ( v3 > 0 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = 1000000LL * (*(_QWORD *)&a1[1][2 * v5 + 2] - *(_QWORD *)&a1[1][2 * v5]) / QuadPart;
      v7 = *((unsigned __int16 *)a1[3] + v5++);
      QuadPart = (__int64)a1[2];
      *(_QWORD *)(QuadPart + 8 * v7) = v6;
      if ( v5 >= v3 )
        break;
      QuadPart = v14.QuadPart;
    }
  }
  v8 = a1[5];
  v9 = (const __int64 *)a1[2];
  v10 = (unsigned __int16 *)a1[4];
  v11 = *v8;
  v12 = (_DWORD *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                    QuadPart,
                    (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)[1];
  if ( v12 )
  {
    if ( *v12 )
    {
      wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
        (__int64)v12,
        (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
      TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupPerf_(v13, v4, *v10, v11, v9, 0);
    }
  }
}
