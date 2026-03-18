/*
 * XREFs of PpmIdlePrepareExitLatencyTrace @ 0x1406022D8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmIdlePrepareExitLatencyTrace(__int64 a1, int a2)
{
  char v2; // r8
  int v3; // eax
  int v4; // eax
  unsigned int SchedulerSharedSwappablePage_high; // r9d
  unsigned int v6; // eax

  v2 = 0;
  if ( a2 == -1 )
    return v2;
  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)(a1 + 20) = v4;
    if ( v4 )
      return v2;
  }
  SchedulerSharedSwappablePage_high = HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage);
  v6 = 0;
  if ( HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage) <= 0x64 )
  {
    if ( !HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage) )
      goto LABEL_8;
  }
  else
  {
    SchedulerSharedSwappablePage_high = 100;
  }
  v6 = 0x64 / SchedulerSharedSwappablePage_high;
LABEL_8:
  *(_DWORD *)(a1 + 20) = v6;
  if ( v6 )
  {
    *(_BYTE *)(a1 + 3) = 1;
    return 1;
  }
  return v2;
}
