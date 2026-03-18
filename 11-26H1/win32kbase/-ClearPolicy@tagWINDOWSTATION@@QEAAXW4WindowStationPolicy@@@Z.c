/*
 * XREFs of ?ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401CD7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401CC5A8 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D3898 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 */

void __fastcall tagWINDOWSTATION::ClearPolicy(volatile signed __int32 *a1, int a2)
{
  char v2; // bl
  volatile signed __int32 *v3; // r8
  bool v4; // r9
  int v5; // edx

  v2 = 1;
  v3 = a1 + 56;
  v4 = (a2 & 1) != 0 && (*v3 & 1) != 0;
  if ( (a2 & 2) == 0 || (a1[56] & 2) == 0 )
    v2 = 0;
  v5 = ~a2;
  _InterlockedAnd(v3, v5);
  if ( v4 )
    ForegroundBoost::DeboostAllProcesses((ForegroundBoost *)a1);
  if ( v2 )
    QualityOfService::PolicyChanged((QualityOfService *)a1, v5, (int)v3);
}
