/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140210C00
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x140212BC0 (-ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A620 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A900 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ??1DoWorkAndWait@CRIMBase@@QEAA@XZ @ 0x140151794 (--1DoWorkAndWait@CRIMBase@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x14020FB14 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 */

void __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  PVOID v5; // rbx
  PRKEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h]

  v2 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 461);
  v4 = a1 + 56 * (v2 + 3);
  if ( *(_DWORD *)(v4 + 8) == 19 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 466);
  if ( *(_DWORD *)(v4 + 8) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 468);
  CRIMBase::SensorDispatcherObject::GetWorkAndWait(a1 + 56 * (v2 + 3), (__int64)&Event);
  v5 = Object;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    KeWaitForSingleObject(v5, WrUserRequest, 0, 0, 0LL);
  }
  CRIMBase::DoWorkAndWait::~DoWorkAndWait((CRIMBase::DoWorkAndWait *)&Event);
}
