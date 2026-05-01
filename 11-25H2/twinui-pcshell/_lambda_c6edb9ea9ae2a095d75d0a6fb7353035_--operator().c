/*
 * XREFs of _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1803EC5F8
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801DDBB0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___::_lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___ @ 0x1802CEDB0 (wil--details--lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___--_lambda_call__lambda_c6ed.c)
 * Callees:
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1802AB898 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x1803EFF0C (-TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z.c)
 */

void __fastcall lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()(int **a1)
{
  int *v2; // r10
  __int64 QuadPart; // rcx
  __int64 v4; // r11
  __int64 v5; // rbp
  int *v6; // rsi
  __int64 v7; // r9
  int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // rax
  const __int64 *v12; // rdi
  unsigned __int16 *v13; // rbx
  unsigned int v14; // esi
  _DWORD *v15; // rcx
  TaskFlowDataEngineTelemetry *v16; // rcx
  LARGE_INTEGER v17; // [rsp+40h] [rbp+8h] BYREF

  v17.QuadPart = 0LL;
  QueryPerformanceFrequency(&v17);
  v2 = a1[1];
  QuadPart = v17.QuadPart;
  v4 = **a1;
  v5 = 1000000LL * (*(_QWORD *)&v2[2 * v4] - *(_QWORD *)v2) / v17.QuadPart;
  if ( v4 > 0 )
  {
    v6 = a1[2];
    v7 = 0LL;
    v8 = a1[3];
    while ( 1 )
    {
      v9 = *(_QWORD *)&v2[2 * v7 + 2] - *(_QWORD *)&v2[2 * v7];
      ++v7;
      v10 = 1000000 * v9 / QuadPart;
      QuadPart = *(unsigned __int16 *)v8;
      v8 = (int *)((char *)v8 + 2);
      *(_QWORD *)&v6[2 * QuadPart] = v10;
      if ( v7 >= v4 )
        break;
      QuadPart = v17.QuadPart;
    }
  }
  v11 = a1[5];
  v12 = (const __int64 *)a1[2];
  v13 = (unsigned __int16 *)a1[4];
  v14 = *v11;
  v15 = (_DWORD *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                    QuadPart,
                    (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)[1];
  if ( v15 )
  {
    if ( *v15 )
    {
      wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
        (__int64)v15,
        (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
      TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupPerf_(v16, v5, *v13, v14, v12, 0);
    }
  }
}
