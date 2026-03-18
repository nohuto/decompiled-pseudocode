/*
 * XREFs of ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9A48
 * Callers:
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x14013A1DC (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x140179E6C (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDs @ 0x14013B674 (WPP_RECORDER_AND_TRACE_SF_qDs.c)
 *     FreezeThawProcessTimers @ 0x14015E1A0 (FreezeThawProcessTimers.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall tagPROCESSINFO::Thaw(tagPROCESSINFO *this, int a2, int a3)
{
  char v4; // bp
  char v5; // r14
  int v6; // ebx
  const char *v7; // rdi
  __int64 UserSessionState; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  void (__fastcall *v12)(__int64, _QWORD); // rax
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+38h] [rbp-30h]

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *((_DWORD *)this + 14);
    v7 = "Frozen";
    if ( *((_DWORD *)this + 296) )
      v7 = "Running";
    UserSessionState = W32GetUserSessionState((unsigned int)"Running", a2, a3);
    WPP_RECORDER_AND_TRACE_SF_qDs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69136),
      v13,
      v14,
      0x21u,
      v15,
      (char)this,
      v6,
      v7);
  }
  if ( *((_DWORD *)this + 296) != 1 )
  {
    v9 = 0xFFFFF78000000004uLL;
    v10 = *((_QWORD *)this + 41);
    v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v10 )
    {
      v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48);
      v12 = *(void (__fastcall **)(__int64, _QWORD))(v9 + 1664);
      if ( v12 )
        v12(v10, (unsigned int)v11);
      v10 = *(_QWORD *)(v10 + 696);
    }
    FreezeThawProcessTimers((__int64)this, 0);
    *((_DWORD *)this + 296) = 1;
  }
}
