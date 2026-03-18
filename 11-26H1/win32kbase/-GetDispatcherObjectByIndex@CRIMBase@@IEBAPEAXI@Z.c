/*
 * XREFs of ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14011153C
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1401113F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1402185C0 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x140111674 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall CRIMBase::GetDispatcherObjectByIndex(CRIMBase *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdi

  v2 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 377LL);
  v4 = 56 * v2;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + v4 + 168)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 378LL);
  return *(void **)((char *)this + v4 + 208);
}
