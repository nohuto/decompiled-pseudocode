/*
 * XREFs of ReadRawMouseThrottlingThresholds @ 0x1400DF420
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400DF7C4 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadRawMouseThrottlingThresholds(struct _UNICODE_STRING *a1, int a2, int a3)
{
  CMouseSensor *v4; // rcx

  v4 = *(CMouseSensor **)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 3136);
  if ( v4 )
    CMouseSensor::ReadRawMouseThrottlingThresholds(v4, a1);
}
