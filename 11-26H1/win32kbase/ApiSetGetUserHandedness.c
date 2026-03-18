/*
 * XREFs of ApiSetGetUserHandedness @ 0x1401C158C
 * Callers:
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x14008CD08 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1400F85FC (rimAbIsPointInGlobalPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14017F58C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimAbIsPointInPenDeadzone @ 0x140202D28 (rimAbIsPointInPenDeadzone.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x140210EE0 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     GetUserHandedness @ 0x140193BEC (GetUserHandedness.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetUserHandedness(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx

  v1 = 1;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4144LL);
  if ( v2 && v2() >= 0 )
    return (unsigned int)GetUserHandedness(v3);
  return v1;
}
