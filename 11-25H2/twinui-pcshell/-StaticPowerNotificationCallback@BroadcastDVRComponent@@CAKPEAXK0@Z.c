/*
 * XREFs of ?StaticPowerNotificationCallback@BroadcastDVRComponent@@CAKPEAXK0@Z @ 0x180219100
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerNotificationCallback@BroadcastDVRComponent@@AEAAXK@Z @ 0x180219140 (-PowerNotificationCallback@BroadcastDVRComponent@@AEAAXK@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::StaticPowerNotificationCallback(
        BroadcastDVRComponent *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    v3 = *a3 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    if ( *a3 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
      v3 = a3[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    if ( !v3 )
      BroadcastDVRComponent::PowerNotificationCallback(a1, *((unsigned __int8 *)a3 + 20));
  }
  return 0LL;
}
