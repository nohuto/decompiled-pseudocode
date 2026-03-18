/*
 * XREFs of ApiSetGetUserHandedness @ 0x140127A30
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14012767C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1401276D4 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1401DCBA4 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1401DCCEC (rimAbIsPointInPenDeadzone.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1401F5EE8 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     GetUserHandedness @ 0x140157278 (GetUserHandedness.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetUserHandedness(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax

  v2 = 1;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4592LL);
  if ( v3 && v3() >= 0 )
    return (unsigned int)GetUserHandedness();
  return v2;
}
