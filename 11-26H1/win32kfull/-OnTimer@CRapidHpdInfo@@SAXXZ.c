/*
 * XREFs of ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401E6268
 * Callers:
 *     ?OnDaemonTimer@DesktopRecalc@@YAXXZ @ 0x1401E6250 (-OnDaemonTimer@DesktopRecalc@@YAXXZ.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x14015B9A0 (-OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x14022FBC0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

void __fastcall CRapidHpdInfo::OnTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rbp
  _DWORD *v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // rdx
  const struct _GUID *v7; // r8
  char v8; // si
  bool v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_DWORD **)(UserSessionState + 71232);
  if ( v4 )
  {
    v5 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *v4;
    if ( v5 >= *(_DWORD *)(UserSessionState + 71224) )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v8 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 71232) + 20LL);
        v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v12) = v9;
        LOBYTE(v13) = v8;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(v11 + 69152),
          4,
          7,
          14,
          (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids,
          v5,
          v10);
      }
      DesktopRecalc::OnRapidHpdTimeout(
        *(DesktopRecalc **)(*(_QWORD *)(UserSessionState + 71232) + 40LL),
        (struct CMonitorTopology *)(*(_QWORD *)(UserSessionState + 71232) + 24LL),
        v7);
      LOBYTE(v2) = (unsigned int)CMonitorTopology::CompareToCurrent(
                                   *(_QWORD *)(*(_QWORD *)(UserSessionState + 71232) + 40LL),
                                   0LL) != 0;
      CRapidHpdInfo::Delete(v2);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
    }
  }
}
