/*
 * XREFs of ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400AC970
 * Callers:
 *     ReadRawMouseThrottlingThresholds @ 0x1400ACAE0 (ReadRawMouseThrottlingThresholds.c)
 * Callees:
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1400AAA58 (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 */

void __fastcall CMouseSensor::ReadRawMouseThrottlingThresholds(CMouseSensor *this, struct _UNICODE_STRING *a2)
{
  const UNICODE_STRING **v3; // [rsp+30h] [rbp+8h] BYREF
  struct _UNICODE_STRING *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (const UNICODE_STRING **)&v4;
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (__int64)this + 1352);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (__int64)this + 1376);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (__int64)this + 1400);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (__int64)this + 1424);
  *((_QWORD *)this + 182) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 352) / 0x3E8;
  *((_QWORD *)this + 183) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 358) / 0x3E8;
}
