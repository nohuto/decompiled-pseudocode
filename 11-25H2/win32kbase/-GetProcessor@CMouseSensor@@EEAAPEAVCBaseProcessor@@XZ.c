/*
 * XREFs of ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x14018C610
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

struct CBaseProcessor *__fastcall CMouseSensor::GetProcessor(CMouseSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    || !*(_DWORD *)(W32GetUserSessionState(v3, v2) + 18728) )
  {
    return (struct CBaseProcessor *)*((_QWORD *)this + 167);
  }
  else
  {
    return 0LL;
  }
}
