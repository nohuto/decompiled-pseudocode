/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180078030
 * Callers:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18004DA3C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180077FF0 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x1800EA3CC (--1Completer@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007806C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _tlgProvider_t *a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(a2);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v4 + 8))(this);
}
