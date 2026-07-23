/*
 * XREFs of PopFreeRegistration @ 0x1407D2738
 * Callers:
 *     PopFreeSessionState @ 0x1409F74CC (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x1409F8328 (PopDispatchNotificationsToList.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x140729BE0 (ZwDeleteWnfStateName.c)
 *     PopUnreferencePowerSetting @ 0x1409FBE7C (PopUnreferencePowerSetting.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(WNF_STATE_NAME *P)
{
  WNF_STATE_NAME *v2; // rbx
  __int64 v3; // rsi

  v2 = P + 8;
  v3 = 3LL;
  do
  {
    if ( *v2 )
      PopUnreferencePowerSetting();
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( P[7].Data[0] || P[7].Data[1] )
    ZwDeleteWnfStateName(P + 7);
  ExFreePoolWithTag(P, 0x74655350u);
}
