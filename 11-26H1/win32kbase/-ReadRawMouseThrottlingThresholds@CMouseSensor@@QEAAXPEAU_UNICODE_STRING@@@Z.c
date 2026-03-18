/*
 * XREFs of ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400DF7C4
 * Callers:
 *     ReadRawMouseThrottlingThresholds @ 0x1400DF420 (ReadRawMouseThrottlingThresholds.c)
 * Callees:
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1400DF888 (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 */

void __fastcall CMouseSensor::ReadRawMouseThrottlingThresholds(CMouseSensor *this, struct _UNICODE_STRING *a2)
{
  char *v2; // rbx
  struct _UNICODE_STRING **v4; // [rsp+30h] [rbp+8h] BYREF
  struct _UNICODE_STRING *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (char *)this + 1344;
  v4 = &v5;
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v4, (char *)this + 1344);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v4, v2 + 24);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v4, v2 + 48);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v4, v2 + 72);
  *((_QWORD *)this + 181) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 350) / 0x3E8;
  *((_QWORD *)this + 182) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 356) / 0x3E8;
}
