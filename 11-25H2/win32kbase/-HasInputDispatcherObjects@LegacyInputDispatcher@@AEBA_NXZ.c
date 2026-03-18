/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x14018A5BC
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1400BF9C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14018A3EC (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x140210880 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1402109C0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 10);
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3351LL);
  return *((_DWORD *)this + 10) != 64;
}
