/*
 * XREFs of PpmUpdateTargetProcessorPolicy @ 0x1404E266C
 * Callers:
 *     PpmUpdateProcessorPolicyCallback @ 0x1404E2640 (PpmUpdateProcessorPolicyCallback.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     PpmEventAutonomousModeChange @ 0x140611010 (PpmEventAutonomousModeChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmUpdateTargetProcessorPolicy(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 result; // rax

  v5 = a2[1];
  if ( *(_QWORD *)(a1 + 336) && (*a3 & 0x20) != 0 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(a4 + 108));
  if ( *(_QWORD *)(a1 + 344) && (*a3 & 0x40) != 0 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(a4 + 112));
  if ( *(_QWORD *)(a1 + 352) && (PpmAllowedActions & 0x100) != 0 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(a4 + 132));
  if ( *(_QWORD *)(a1 + 360) )
  {
    if ( (*a3 & 0x80u) != 0 )
    {
      *(_BYTE *)(a1 + 528) = *(_BYTE *)(a4 + 136);
      guard_dispatch_icall_no_overrides(v5, *(unsigned __int8 *)(a4 + 136));
      if ( *a2 )
        PpmEventAutonomousModeChange(*a2, *(unsigned __int8 *)(a1 + 528));
    }
  }
  result = *(_QWORD *)(a1 + 328);
  if ( result )
  {
    if ( (*a3 & 0x200) != 0 )
      return guard_dispatch_icall_no_overrides(v5, (unsigned int)PpmPerfTimeWindow);
  }
  return result;
}
