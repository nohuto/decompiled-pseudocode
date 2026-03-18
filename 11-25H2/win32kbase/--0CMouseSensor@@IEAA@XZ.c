/*
 * XREFs of ??0CMouseSensor@@IEAA@XZ @ 0x140158E10
 * Callers:
 *     CMouseSensor_CreateInstance @ 0x14019AFA0 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x140152C60 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

CMouseSensor *__fastcall CMouseSensor::CMouseSensor(CMouseSensor *this)
{
  CMouseSensor *result; // rax

  CBaseInput::CBaseInput((__int64)this, 1, 0, 0);
  *(_QWORD *)this = &CMouseSensor::`vftable';
  *((_QWORD *)this + 167) = 0LL;
  *((_BYTE *)this + 1344) = 0;
  *((_QWORD *)this + 169) = L"RawMouseThrottleEnabled";
  *((_QWORD *)this + 172) = L"RawMouseThrottleForced";
  *((_QWORD *)this + 175) = L"RawMouseThrottleDuration";
  *((_QWORD *)this + 178) = L"RawMouseThrottleLeeway";
  result = this;
  *((_QWORD *)this + 170) = 1LL;
  *((_QWORD *)this + 171) = 1LL;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 1LL;
  *((_DWORD *)this + 352) = 8;
  *((_DWORD *)this + 353) = 1;
  *((_QWORD *)this + 177) = 20LL;
  *((_QWORD *)this + 179) = 2LL;
  *((_QWORD *)this + 180) = 5LL;
  *((_DWORD *)this + 362) = 50;
  *((_QWORD *)this + 182) = 0LL;
  *((_QWORD *)this + 183) = 0LL;
  return result;
}
