/*
 * XREFs of ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1402652CC
 * Callers:
 *     ?ProcessModeChange@CRapidHpdInfo@@SA?AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x14028F004 (-ProcessModeChange@CRapidHpdInfo@@SA-AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_G.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

CRapidHpdInfo *__fastcall CRapidHpdInfo::CRapidHpdInfo(
        CRapidHpdInfo *this,
        struct CMonitorTopology *a2,
        const struct _GUID *a3)
{
  char v5; // di
  __int64 v6; // rdx
  __int128 v7; // xmm0
  bool v8; // si
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v5 = 1;
  *(_QWORD *)this = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = v6;
  v7 = (__int128)*a3;
  *((_QWORD *)this + 5) = a2;
  *(_OWORD *)((char *)this + 24) = v7;
  _InterlockedAdd((volatile signed __int32 *)a2, 1u);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_DWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 71224);
    UserSessionState = W32GetUserSessionState(v11, v10);
    LOBYTE(v13) = v8;
    LOBYTE(v14) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      11,
      (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids,
      v9);
  }
  return this;
}
