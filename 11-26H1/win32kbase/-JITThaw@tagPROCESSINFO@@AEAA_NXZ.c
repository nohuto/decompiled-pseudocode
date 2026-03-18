/*
 * XREFs of ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x140179E6C
 * Callers:
 *     ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x140116BE0 (-SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400489B0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140179FF8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9A48 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 */

char __fastcall tagPROCESSINFO::JITThaw(tagPROCESSINFO *this, __int64 a2, int a3)
{
  char v4; // di
  bool v5; // si
  bool v6; // r14
  int v7; // edx
  int v8; // r8d
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v11) = v6;
    LOBYTE(v12) = v5;
    WPP_RECORDER_AND_TRACE_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, *(_QWORD *)(UserSessionState + 69136));
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    tagPROCESSINFO::Thaw(this);
    return 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69136),
        4,
        14,
        35,
        (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids);
    }
    return 0;
  }
}
