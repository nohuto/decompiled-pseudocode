/*
 * XREFs of ?SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401CD880
 * Callers:
 *     <none>
 * Callees:
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401CC5A8 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D4474 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 */

void __fastcall tagWINDOWSTATION::SetPolicy(volatile signed __int32 *a1, char a2)
{
  char v2; // bl
  volatile signed __int32 *v3; // r8
  bool v4; // r9

  v2 = 1;
  v3 = a1 + 56;
  v4 = (a2 & 1) != 0 && (*v3 & 1) == 0;
  if ( (a2 & 2) == 0 || (a1[56] & 2) != 0 )
    v2 = 0;
  _InterlockedOr(v3, a2);
  if ( v4 )
    ForegroundBoost::SyncBoostAllProcesses((ForegroundBoost *)a1);
  if ( v2 )
    QualityOfService::PolicyChanged((QualityOfService *)a1, a2, (int)v3);
}
