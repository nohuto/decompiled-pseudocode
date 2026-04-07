/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A57A8
 * Callers:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18004E284 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800901C4 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18009CD10 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, a2, a3, 0LL, 0LL, retaddr, v6);
  return v4;
}
