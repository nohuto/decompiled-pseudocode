/*
 * XREFs of ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18012A580
 * Callers:
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180128E34 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180131820 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180134138 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18014A3D8 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18019D7A4 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180295768 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?RecentDisplayChange@CDisplayManager@@IEAA_NXZ @ 0x180295898 (-RecentDisplayChange@CDisplayManager@@IEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?IsCompositionThread@@YA_NXZ @ 0x18012AA34 (-IsCompositionThread@@YA_NXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x1801D9E90 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  CDisplayManager *v3; // rcx
  CDisplayManager *v4; // rcx
  struct IDXGIFactory5 *v6; // rbx
  int updated; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IsCompositionThread() )
  {
    v6 = 0LL;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1803DE6D8 )
    {
      v6 = (struct IDXGIFactory5 *)qword_1803DE6D8;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803DE6D8 + 8LL))(qword_1803DE6D8);
    }
    LeaveCriticalSection(&g_DisplayManager);
    if ( !v6 )
    {
      LOBYTE(word_1803DE700) = 1;
      ScheduleCompositionPass(0, 0x80000u);
      return 2291663005LL;
    }
    if ( !((unsigned int (__fastcall *)(struct IDXGIFactory5 *))v6->lpVtbl->IsCurrent)(v6) )
    {
      LOBYTE(word_1803DE700) = 1;
      ScheduleCompositionPass(0, 0x80000u);
    }
    *a2 = v6;
    return 0LL;
  }
  v3 = qword_1803DE6D8;
  if ( qword_1803DE6D8
    && (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803DE6D8 + 104LL))(qword_1803DE6D8)
    || (updated = CDisplayManager::UpdateDXGIFactory(v3), v8 = updated, updated >= 0) )
  {
    v4 = qword_1803DE6D8;
    *a2 = (struct IDXGIFactory5 *)qword_1803DE6D8;
    (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x145,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
    (const char *)(unsigned int)updated);
  return v8;
}
