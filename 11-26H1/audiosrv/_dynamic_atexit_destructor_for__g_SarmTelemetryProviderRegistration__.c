/*
 * XREFs of _dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__ @ 0x18016CE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_SarmTelemetryProviderRegistration;
  v1 = *(_QWORD *)(g_SarmTelemetryProviderRegistration + 32LL);
  *(_QWORD *)(g_SarmTelemetryProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
