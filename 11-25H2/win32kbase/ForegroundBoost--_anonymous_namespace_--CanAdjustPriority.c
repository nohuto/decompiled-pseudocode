/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x140129B94
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::CanAdjustPriority(__int64 a1)
{
  char v3; // si
  bool v4; // bp
  unsigned __int8 ThreadId; // al
  __int64 v6; // rcx
  char v7; // di
  int v8; // ebx
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0xC) == 0 )
    return 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)a1);
    v6 = *(_QWORD *)(a1 + 464);
    v7 = ThreadId;
    v8 = *(_DWORD *)(v6 + 56);
    UserSessionState = W32GetUserSessionState(v6, v9);
    LOBYTE(v11) = v4;
    LOBYTE(v12) = v3;
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      13,
      10,
      (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
      v8,
      v7);
  }
  return 0;
}
