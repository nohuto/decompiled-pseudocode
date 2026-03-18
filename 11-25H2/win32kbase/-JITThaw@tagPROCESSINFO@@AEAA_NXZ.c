/*
 * XREFs of ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A6820
 * Callers:
 *     ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x1401A6E30 (-SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1401464B8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401A6EA8 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 */

char __fastcall tagPROCESSINFO::JITThaw(tagPROCESSINFO *this)
{
  char v2; // di
  bool v3; // si
  bool v4; // r14
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 3), v7, v6, *(_QWORD *)(UserSessionState + 69144));
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    tagPROCESSINFO::Thaw(this);
    return 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v2 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69144),
        4,
        14,
        35,
        (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids);
    }
    return 0;
  }
}
