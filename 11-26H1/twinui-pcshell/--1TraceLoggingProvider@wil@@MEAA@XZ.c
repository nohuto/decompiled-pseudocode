/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180211708
 * Callers:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802D5080 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802D5100 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 *     ??_GGamingPostureUXTelemetryProvider@@UEAAPEAXI@Z @ 0x1803229C0 (--_GGamingPostureUXTelemetryProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  *(_QWORD *)this = &IamTraceLogging::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EventUnregister(v2);
  }
}
