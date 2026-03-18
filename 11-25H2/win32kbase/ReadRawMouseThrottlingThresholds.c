/*
 * XREFs of ReadRawMouseThrottlingThresholds @ 0x1400ACAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400AC970 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadRawMouseThrottlingThresholds(struct _UNICODE_STRING *a1, __int64 a2)
{
  CMouseSensor *v3; // rcx

  v3 = *(CMouseSensor **)(W32GetUserSessionState(a1, a2) + 3136);
  if ( v3 )
    CMouseSensor::ReadRawMouseThrottlingThresholds(v3, a1);
}
