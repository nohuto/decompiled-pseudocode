/*
 * XREFs of ??0CMouseSensor@@IEAA@XZ @ 0x1401B3690
 * Callers:
 *     CMouseSensor_CreateInstance @ 0x1401B3630 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1401B377C (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

CMouseSensor *__fastcall CMouseSensor::CMouseSensor(CMouseSensor *this)
{
  CMouseSensor *result; // rax

  CBaseInput::CBaseInput(this, 1LL, 0LL, 0LL);
  *(_QWORD *)this = &CMouseSensor::`vftable';
  *((_QWORD *)this + 166) = 0LL;
  *((_BYTE *)this + 1336) = 0;
  *((_QWORD *)this + 168) = L"RawMouseThrottleEnabled";
  *((_QWORD *)this + 171) = L"RawMouseThrottleForced";
  *((_QWORD *)this + 174) = L"RawMouseThrottleDuration";
  *((_QWORD *)this + 177) = L"RawMouseThrottleLeeway";
  result = this;
  *((_QWORD *)this + 169) = 1LL;
  *((_QWORD *)this + 170) = 1LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = 1LL;
  *((_DWORD *)this + 350) = 8;
  *((_DWORD *)this + 351) = 1;
  *((_QWORD *)this + 176) = 20LL;
  *((_QWORD *)this + 178) = 2LL;
  *((_QWORD *)this + 179) = 5LL;
  *((_DWORD *)this + 360) = 50;
  *((_QWORD *)this + 181) = 0LL;
  *((_QWORD *)this + 182) = 0LL;
  return result;
}
