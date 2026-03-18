/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x14013F8FC
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x14013F6A0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x14013F790 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14013F820 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 10);
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3276LL);
  return *((_DWORD *)this + 10) != 64;
}
