/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18007A0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

void __fastcall AudioSrvTelemetryProvider::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  __int64 v5; // rdx

  v4 = AudioSrvTelemetryProvider::Instance();
  LOBYTE(v5) = a1;
  (*(void (__fastcall **)(struct AudioSrvTelemetryProvider *, __int64, const struct wil::FailureInfo *))(*(_QWORD *)v4 + 16LL))(
    v4,
    v5,
    a2);
}
