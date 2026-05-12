/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x14007F500
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  __int64 result; // rax

  RaCallMiniportAdapterControl(a1 + 376);
  result = *(_QWORD *)(a1 + 5024);
  if ( result )
    _interlockedbittestandreset((volatile signed __int32 *)(result + 120), 0);
  return result;
}
