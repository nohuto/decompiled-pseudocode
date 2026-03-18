/*
 * XREFs of ?CanFilterInput@CPalmRejectZoneInfo@@QEAA_NXZ @ 0x14021A7F0
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1401BAF54 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall CPalmRejectZoneInfo::CanFilterInput(CPalmRejectZoneInfo *this)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(_QWORD); // rax

  v1 = *((_DWORD *)this + 16);
  if ( !v1 )
    return 1;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 48) + 4800LL);
  return v2
      && v2() >= 0
      && (v4 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 4808LL)) != 0LL
      && v4(v1) != 0;
}
