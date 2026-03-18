/*
 * XREFs of ?GetHandleNameFromDispatcherObject@CRIMBase@@IEAA?AW4DispatcherHandleName@1@PEAX@Z @ 0x14018A508
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB380 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1400DAFC0 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetHandleNameFromDispatcherObject(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rsi

  v3 = 0;
  v4 = (_QWORD *)(a1 + 208);
  result = 19LL;
  while ( *v4 != a2 )
  {
    ++v3;
    v4 += 7;
    if ( v3 >= 0x13 )
      return result;
  }
  v6 = 56LL * v3;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(v6 + a1 + 168)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 512LL);
  if ( v3 != *(_DWORD *)(v6 + a1 + 176) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 513LL);
  return *(unsigned int *)(v6 + a1 + 176);
}
