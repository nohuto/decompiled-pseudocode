/*
 * XREFs of ?OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z @ 0x1800DE510
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GetFeatureReportResult@DockableDeviceCollection@@QEAA@XZ @ 0x1800DDBC4 (--1GetFeatureReportResult@DockableDeviceCollection@@QEAA@XZ.c)
 *     ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800DE474 (-OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z.c)
 */

__int64 __fastcall DockableDeviceCollection::OnFeatureReportStatic(
        DockableDeviceCollection **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  const struct std::nothrow_t *v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      a4);
  DockableDeviceCollection::OnFeatureReport(*a1, (const struct DockableDeviceCollection::GetFeatureReportResult *)a1);
  DockableDeviceCollection::GetFeatureReportResult::~GetFeatureReportResult((void **)a1, v5);
  operator delete(a1, (const struct std::nothrow_t *)0x20);
  return 0LL;
}
