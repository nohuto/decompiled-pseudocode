/*
 * XREFs of ??0SensorLocality@CBaseInput@@QEAA@XZ @ 0x1401B3874
 * Callers:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1401B377C (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 * Callees:
 *     <none>
 */

CBaseInput::SensorLocality *__fastcall CBaseInput::SensorLocality::SensorLocality(CBaseInput::SensorLocality *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  return this;
}
