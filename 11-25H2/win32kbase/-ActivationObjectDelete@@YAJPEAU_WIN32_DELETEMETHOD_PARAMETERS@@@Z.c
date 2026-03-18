/*
 * XREFs of ?ActivationObjectDelete@@YAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1401A9A98
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ActivationObjectDelete(struct _WIN32_DELETEMETHOD_PARAMETERS *a1)
{
  if ( ObGetObjectType(*((_QWORD *)a1 + 2)) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 364);
  return 0LL;
}
