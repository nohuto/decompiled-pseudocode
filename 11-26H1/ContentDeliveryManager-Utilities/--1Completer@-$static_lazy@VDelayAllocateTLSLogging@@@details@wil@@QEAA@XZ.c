/*
 * XREFs of ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180029F0C
 * Callers:
 *     ?get@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AXXZ@Z @ 0x18003E7D4 (-get@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AX.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18003E89C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPEAVMobilityExperienceLogging@Telemetry@MobilityExperience@@P6AXXZ@Z @ 0x18003E964 (-get@-$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPE.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18003EAE8 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@@details@wil@@QEAAPEAVContentDeliveryManagerLogging@Background@ContentDeliveryManager@@P6AXXZ@Z @ 0x1800456DC (-get@-$static_lazy@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@@details@wi.c)
 *     ?get@?$static_lazy@VShellPlacementLogging@Logging@CreativeFramework@@@details@wil@@QEAAPEAVShellPlacementLogging@Logging@CreativeFramework@@P6AXXZ@Z @ 0x18005E7D8 (-get@-$static_lazy@VShellPlacementLogging@Logging@CreativeFramework@@@details@wil@@QEAAPEAVShell.c)
 *     ?get@?$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z @ 0x1800914A8 (-get@-$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180037CF8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        _DWORD *a1,
        __int64 a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  if ( !a1[2] )
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)(*(_QWORD *)a1 + 8LL),
      *(const struct _tlgProvider_t *const *)(*(_QWORD *)a1 + 32LL),
      a3);
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
