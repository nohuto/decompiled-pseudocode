/*
 * XREFs of ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x140147A44
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140147894 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     ApiSetTraceLoggingPTPAAPKeyPress @ 0x140147AC0 (ApiSetTraceLoggingPTPAAPKeyPress.c)
 */

void __fastcall CPTPProcessor::OnKeyPress(unsigned __int8 a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  volatile __int64 *v6; // rax
  int v7; // r8d
  int v8; // edx
  __int64 UserSessionState; // rax
  volatile __int64 *v10; // rcx
  volatile __int64 *v11; // rax

  ApiSetTraceLoggingPTPAAPKeyPress(a1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = (volatile __int64 *)(W32GetUserSessionState(v4, v3, v5) + 3296);
  v8 = (_DWORD)v6 + 8;
  if ( !a1 )
    ++v6;
  UserSessionState = W32GetUserSessionState(_InterlockedExchange64(v6, PerformanceCounter.QuadPart), v8, v7);
  v10 = (volatile __int64 *)(UserSessionState + 16728);
  v11 = (volatile __int64 *)(UserSessionState + 16736);
  if ( !a1 )
    v10 = v11;
  _InterlockedExchange64(v10, PerformanceCounter.QuadPart);
}
