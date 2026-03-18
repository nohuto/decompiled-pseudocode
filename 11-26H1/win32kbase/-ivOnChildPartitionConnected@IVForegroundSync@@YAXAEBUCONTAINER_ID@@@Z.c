/*
 * XREFs of ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x140226A54
 * Callers:
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021F4D0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall IVForegroundSync::ivOnChildPartitionConnected(
        IVForegroundSync *this,
        const struct CONTAINER_ID *a2,
        int a3)
{
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      13,
      16,
      (__int64)&WPP_d763e2babcc93ef854e00ac0d326f989_Traceguids);
  }
}
