/*
 * XREFs of ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x140205AD4
 * Callers:
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x14020DC04 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetGetPenHoldTime @ 0x140225F30 (ApiSetGetPenHoldTime.c)
 *     ApiSetGetTouchHoldTime @ 0x140225F90 (ApiSetGetTouchHoldTime.c)
 */

union _LARGE_INTEGER __fastcall CTouchProcessor::PassedHoldTime(PERESOURCE *this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  union _LARGE_INTEGER result; // rax
  unsigned __int64 v10; // rdx
  PERESOURCE v11; // rsi
  bool v12; // cf
  bool v13; // zf

  v8 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8941);
  result = gliQpcFreq;
  if ( gliQpcFreq.QuadPart )
  {
    if ( (unsigned __int64)(gliQpcFreq.QuadPart - 1) > 0x7FFFFFFD )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8961);
    if ( !this[13] )
      this[13] = (PERESOURCE)(gliQpcFreq.QuadPart * (unsigned int)ApiSetGetPenHoldTime() / 1000);
    v10 = (unsigned __int64)this[14];
    if ( !v10 )
    {
      v10 = gliQpcFreq.QuadPart * (unsigned int)ApiSetGetTouchHoldTime() / 1000;
      this[14] = (PERESOURCE)v10;
    }
    v11 = (PERESOURCE)(a4 - a3);
    if ( a2 == 3 )
    {
      v12 = v11 < this[13];
      v13 = v11 == this[13];
    }
    else
    {
      v12 = (unsigned __int64)v11 < v10;
      v13 = v11 == (PERESOURCE)v10;
    }
    LOBYTE(v8) = !v12 && !v13;
    return (union _LARGE_INTEGER)v8;
  }
  return result;
}
