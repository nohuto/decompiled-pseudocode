/*
 * XREFs of ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9914
 * Callers:
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x14013A1DC (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDs @ 0x14013B674 (WPP_RECORDER_AND_TRACE_SF_qDs.c)
 *     FreezeThawProcessTimers @ 0x14015E1A0 (FreezeThawProcessTimers.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall tagPROCESSINFO::Freeze(tagPROCESSINFO *this, int a2, int a3)
{
  CTouchProcessor *v4; // rcx
  char v5; // bp
  char v6; // r14
  int v7; // ebx
  const char *v8; // rdi
  __int64 UserSessionState; // rax
  __int64 i; // rbx
  void (__fastcall *v11)(__int64); // rax
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+38h] [rbp-30h]

  v4 = WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *((_DWORD *)this + 14);
    v8 = "Frozen";
    if ( *((_DWORD *)this + 296) )
      v8 = "Running";
    UserSessionState = W32GetUserSessionState((unsigned int)"Running", a2, a3);
    WPP_RECORDER_AND_TRACE_SF_qDs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      v12,
      v13,
      0x20u,
      v14,
      (char)this,
      v7,
      v8);
  }
  if ( *((_DWORD *)this + 296) )
  {
    for ( i = *((_QWORD *)this + 41); i; i = *(_QWORD *)(i + 696) )
    {
      v4 = *(CTouchProcessor **)(W32GetWin32kBaseApiSetTable(v4) + 48);
      v11 = (void (__fastcall *)(__int64))*((_QWORD *)v4 + 207);
      if ( v11 )
        v11(i);
    }
    FreezeThawProcessTimers((__int64)this, 1u);
    *((_DWORD *)this + 296) = 0;
  }
}
