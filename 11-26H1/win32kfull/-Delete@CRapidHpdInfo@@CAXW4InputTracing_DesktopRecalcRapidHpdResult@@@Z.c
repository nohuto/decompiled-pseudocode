/*
 * XREFs of ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x14022FBC0
 * Callers:
 *     ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x14015C480 (-Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401E6268 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 *     EditionDriverUninitialize @ 0x14022F800 (EditionDriverUninitialize.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x140291454 (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 *     ?RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult@@IIIIU_GUID@@I@Z @ 0x1402952F8 (-RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult.c)
 */

void __fastcall CRapidHpdInfo::Delete(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 UserSessionState; // rdi
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned int v9; // r9d
  CMonitorTopology **v10; // rbx
  struct _GUID v11; // [rsp+40h] [rbp-18h] BYREF

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 71232);
  if ( v4 )
  {
    v5 = CMonitorTopology::CompareToCurrent(*(_QWORD *)(v4 + 40), 0LL);
    v6 = *(_QWORD *)(UserSessionState + 71232);
    v7 = v5;
    v11 = *(struct _GUID *)(v6 + 24);
    InputTraceLogging::DesktopRecalc::RapidHpdComplete(
      v2,
      *(unsigned int *)(*(_QWORD *)(UserSessionState + 71232) + 20LL),
      (unsigned int)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *(_DWORD *)v6,
      *(unsigned int *)(v6 + 16),
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *(_DWORD *)(v6 + 8),
      &v11,
      v5);
    v8 = *(_QWORD *)(UserSessionState + 71232);
    v9 = *(_DWORD *)(v8 + 16);
    v11 = *(struct _GUID *)(v8 + 24);
    TraceLoggingRapidHpdComplete(
      v2,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 71232) + 20LL),
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *(_DWORD *)v8,
      v9,
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *(_DWORD *)(v8 + 8),
      &v11,
      v7);
    v10 = *(CMonitorTopology ***)(UserSessionState + 71232);
    if ( v10 )
    {
      CMonitorTopology::Release(v10[5]);
      Win32FreePool(v10);
    }
    *(_QWORD *)(UserSessionState + 71232) = 0LL;
  }
}
