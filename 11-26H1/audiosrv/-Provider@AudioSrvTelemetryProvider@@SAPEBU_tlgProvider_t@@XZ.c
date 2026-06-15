/*
 * XREFs of ?Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18007A038
 * Callers:
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x180079FE0 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

const struct _tlgProvider_t *AudioSrvTelemetryProvider::Provider(void)
{
  return (const struct _tlgProvider_t *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
}
