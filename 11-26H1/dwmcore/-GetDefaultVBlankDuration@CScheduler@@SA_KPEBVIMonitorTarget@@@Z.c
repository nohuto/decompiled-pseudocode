/*
 * XREFs of ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x180166840
 * Callers:
 *     ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180166330 (--0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801663B0 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1801E4960 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LONGLONG __fastcall CScheduler::GetDefaultVBlankDuration(const struct IMonitorTarget *a1)
{
  unsigned __int64 v1; // rbx
  LONGLONG result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0x10000003CLL;
  if ( a1 )
  {
    result = (*(__int64 (__fastcall **)(const struct IMonitorTarget *))(*(_QWORD *)a1 + 168LL))(a1);
    if ( result )
      return result;
    (*(void (__fastcall **)(const struct IMonitorTarget *, unsigned __int64 *))(*(_QWORD *)a1 + 160LL))(a1, &v4);
    if ( (_DWORD)v4 )
    {
      if ( HIDWORD(v4) )
        v1 = v4;
    }
  }
  return (__int64)(g_qpcFrequency.QuadPart * HIDWORD(v1)) / (unsigned int)v1;
}
