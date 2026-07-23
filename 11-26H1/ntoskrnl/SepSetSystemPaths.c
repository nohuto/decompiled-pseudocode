/*
 * XREFs of SepSetSystemPaths @ 0x140B603B4
 * Callers:
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SepLoadNgenLocations @ 0x140B6054C (SepLoadNgenLocations.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetSystemPaths(__int64 a1)
{
  unsigned int v2; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbp
  size_t v4; // r15
  size_t v5; // r12
  __int64 Pool2; // rax
  signed __int64 v7; // rdi
  const WCHAR *v8; // rbx
  wchar_t *v9; // rbx
  wchar_t *v10; // rbx
  unsigned __int8 v12; // [rsp+58h] [rbp+10h]

  v2 = 0;
  SepLoadNgenLocations();
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = LOWORD(CurrentServerSiloGlobals[77].Flink) + 30LL;
  Feature_ID51912085__private_IsEnabledPreCheck();
  v5 = LOWORD(CurrentServerSiloGlobals[77].Flink) + 34LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    v8 = (const WCHAR *)(Pool2 + 64);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(Pool2 + 64), v4, L"\\??\\%ws\\System32\\", CurrentServerSiloGlobals[77].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)v7, v8);
    v9 = (wchar_t *)&v8[v4 >> 1];
    RtlStringCbPrintfW(v9, v4, L"\\??\\%ws\\SysWOW64\\", CurrentServerSiloGlobals[77].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 16), v9);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)v7;
    *(_WORD *)(v7 + 32) = 12;
    if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
    {
      v12 = Feature_ID51912085__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ID51912085__private_descriptor,
        Feature_ID51912085__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v12,
        3,
        (__int64)&Feature_ID51912085__private_descriptor);
    }
    v10 = &v9[v4 >> 1];
    RtlStringCbPrintfW(v10, v5, L"\\??\\%ws\\SystemApps\\", CurrentServerSiloGlobals[77].Blink);
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 48), v10);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v7, 0LL) )
      ExFreePoolWithTag((PVOID)v7, 0x63734943u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
