/*
 * XREFs of ?GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z @ 0x1401115D8
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1401113F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x140111674 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByIndex(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  CRIMBase::SensorDispatcherObject *v4; // rbx

  v2 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
  v4 = (CRIMBase::SensorDispatcherObject *)(a1 + 56 * (v2 + 3));
  if ( !CRIMBase::SensorDispatcherObject::IsValid(v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 363LL);
  return *((_QWORD *)v4 + 4);
}
