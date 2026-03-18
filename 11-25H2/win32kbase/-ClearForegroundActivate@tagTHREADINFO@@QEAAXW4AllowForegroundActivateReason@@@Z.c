/*
 * XREFs of ?ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401A6230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F1F80 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x1401A7820 (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 */

__int64 __fastcall tagTHREADINFO::ClearForegroundActivate(__int64 a1, int a2)
{
  bool v4; // r14
  bool v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  unsigned int v11; // ecx
  __int64 result; // rax

  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    tagTHREADINFO::GetTID((PETHREAD *)a1);
    UserSessionState = W32GetUserSessionState(v7, v6);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_DDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v9, *(_QWORD *)(UserSessionState + 69144));
  }
  v11 = *(_DWORD *)(a1 + 1716);
  result = a2 & v11;
  if ( ((unsigned __int8)a2 & *(_BYTE *)(a1 + 1716) & 0x20) != 0 )
    *(_DWORD *)(a1 + 1720) = 0;
  *(_DWORD *)(a1 + 1716) = v11 & ~a2;
  return result;
}
