/*
 * XREFs of ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401B5AD8
 * Callers:
 *     ?OnDaemonTimer@DesktopRecalc@@YAXXZ @ 0x1401B5AC0 (-OnDaemonTimer@DesktopRecalc@@YAXXZ.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F93B0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1402C4C9C (-OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 */

void __fastcall CRapidHpdInfo::OnTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rsi
  _DWORD *v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // rdx
  const struct _GUID *v7; // r8
  char v8; // bp
  bool v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_DWORD **)(UserSessionState + 71248);
  if ( v4 )
  {
    v5 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *v4;
    if ( v5 >= *(_DWORD *)(UserSessionState + 71240) )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v8 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 71248) + 20LL);
        v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v12) = v9;
        LOBYTE(v13) = v8;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v12,
          *(_QWORD *)(v11 + 69160),
          4,
          7,
          14,
          (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids,
          v5,
          v10);
      }
      DesktopRecalc::OnRapidHpdTimeout(
        *(DesktopRecalc **)(*(_QWORD *)(UserSessionState + 71248) + 40LL),
        (struct CMonitorTopology *)(*(_QWORD *)(UserSessionState + 71248) + 24LL),
        v7);
      LOBYTE(v2) = (unsigned int)CMonitorTopology::CompareToCurrent(
                                   *(_QWORD *)(*(_QWORD *)(UserSessionState + 71248) + 40LL),
                                   0LL) != 0;
      CRapidHpdInfo::Delete(v2);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
    }
  }
}
