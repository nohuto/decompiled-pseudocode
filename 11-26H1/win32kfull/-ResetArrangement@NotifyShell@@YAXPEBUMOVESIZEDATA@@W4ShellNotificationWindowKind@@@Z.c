/*
 * XREFs of ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1401D6724
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     WPP_RECORDER_AND_TRACE_SF_dds @ 0x14022F14C (WPP_RECORDER_AND_TRACE_SF_dds.c)
 */

__int64 __fastcall NotifyShell::ResetArrangement(__int64 a1, __int64 a2)
{
  int v2; // r12d
  char v4; // si
  bool v5; // r14
  unsigned __int16 *v6; // r15
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v2 = a2;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v4 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = (unsigned __int16 *)(a1 + 264);
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_dds(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69152));
  }
  else
  {
    v6 = (unsigned __int16 *)(a1 + 264);
  }
  return anonymous_namespace_::NotifyShellSimplePayload(
           **(_QWORD **)(a1 + 16),
           3,
           0,
           *(unsigned __int16 *)(a1 + 260) | (*v6 << 16),
           v2);
}
