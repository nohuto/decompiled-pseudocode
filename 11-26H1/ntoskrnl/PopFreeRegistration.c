/*
 * XREFs of PopFreeRegistration @ 0x1407CF698
 * Callers:
 *     PopFreeSessionState @ 0x140A3BAAC (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x140A3C908 (PopDispatchNotificationsToList.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x140725010 (ZwDeleteWnfStateName.c)
 *     PopUnreferencePowerSetting @ 0x140A4045C (PopUnreferencePowerSetting.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(_DWORD *P, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi

  v3 = P + 16;
  v4 = 3LL;
  do
  {
    if ( *v3 )
      PopUnreferencePowerSetting();
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( P[14] || P[15] )
    ZwDeleteWnfStateName((__int64)(P + 14), a2);
  ExFreePoolWithTag(P, 0x74655350u);
}
