/*
 * XREFs of ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401A656C
 * Callers:
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x1401A66A0 (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDs @ 0x1401A7BD0 (WPP_RECORDER_AND_TRACE_SF_qDs.c)
 *     FreezeThawProcessTimers @ 0x14023ECF0 (FreezeThawProcessTimers.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall tagPROCESSINFO::Freeze(tagPROCESSINFO *this, __int64 a2)
{
  _QWORD *v3; // rcx
  bool v4; // bp
  bool v5; // r14
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 i; // rbx
  void (__fastcall *v10)(__int64); // rax

  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_qDs(*((_QWORD *)WPP_GLOBAL_Control + 3), v8, v7, *(_QWORD *)(UserSessionState + 69144));
  }
  if ( *((_DWORD *)this + 290) )
  {
    for ( i = *((_QWORD *)this + 40); i; i = *(_QWORD *)(i + 704) )
    {
      v3 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v3, a2) + 48);
      v10 = (void (__fastcall *)(__int64))v3[235];
      if ( v10 )
        v10(i);
    }
    FreezeThawProcessTimers(this, 1LL);
    *((_DWORD *)this + 290) = 0;
  }
}
