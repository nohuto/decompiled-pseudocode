/*
 * XREFs of ?ResetTimer@CRapidHpdInfo@@AEAAXXZ @ 0x1402FC500
 * Callers:
 *     ?ProcessModeChange@CRapidHpdInfo@@SA?AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x14028F004 (-ProcessModeChange@CRapidHpdInfo@@SA-AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_G.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CRapidHpdInfo::ResetTimer(CRapidHpdInfo *this)
{
  char v1; // bl
  __int64 v2; // rdx
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx

  v1 = 1;
  ++*((_DWORD *)this + 4);
  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_QWORD *)this = v2;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v1 = 0;
  }
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v1 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      13,
      (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids);
  }
}
