/*
 * XREFs of ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x14005FAD0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

struct CBaseProcessor *__fastcall CMouseSensor::GetProcessor(CMouseSensor *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline(this)
    || !*(_DWORD *)(W32GetUserSessionState(v3, v2, v4) + 18776) )
  {
    return (struct CBaseProcessor *)*((_QWORD *)this + 166);
  }
  else
  {
    return 0LL;
  }
}
