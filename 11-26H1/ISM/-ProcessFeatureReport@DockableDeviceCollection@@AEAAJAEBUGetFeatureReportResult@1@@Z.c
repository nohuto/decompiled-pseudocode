/*
 * XREFs of ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800DE80C
 * Callers:
 *     ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800DE474 (-OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18007DFAC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710 (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DECDC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18018429C (-OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockableDeviceCollection::ProcessFeatureReport(
        DockableDeviceCollection *this,
        const struct DockableDeviceCollection::GetFeatureReportResult *a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  int Device; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  NTSTATUS SpecificValueCaps; // eax
  unsigned int v11; // r14d
  ULONG ReportLength; // ecx
  CHAR *Report; // r10
  NTSTATUS UsageValueArray; // eax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  char v18; // r14
  const char *v19; // rax
  __int64 v20; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v22; // rax
  const char *ValueCapsLength; // [rsp+28h] [rbp-81h]
  ULONG v24; // [rsp+50h] [rbp-59h] BYREF
  CHAR UsageValue[8]; // [rsp+58h] [rbp-51h] BYREF
  USHORT v26[8]; // [rsp+60h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = *((unsigned int *)a2 + 3);
  if ( (v3 & 0x80000000) != 0LL )
  {
    v4 = 287LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v4,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
             (const char *)v3);
  }
  *(_QWORD *)UsageValue = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, *((_DWORD *)a2 + 2), 0LL, (struct RIMDevice **)UsageValue, 0LL);
  v7 = Device;
  if ( Device < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v7;
  }
  v8 = *(_QWORD *)(*(_QWORD *)UsageValue + 32LL);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageValue + 48LL);
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v26[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0xD0u, &ValueCaps, v26, PreparsedData);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)SpecificValueCaps);
    return v11;
  }
  v24 = 0;
  ReportLength = *((_DWORD *)a2 + 6);
  Report = (CHAR *)*((_QWORD *)a2 + 2);
  if ( ValueCaps.ReportCount <= 1u )
  {
    v16 = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD0u, &v24, PreparsedData, Report, ReportLength);
    if ( v16 < 0 )
    {
      v3 = (unsigned int)v16;
      v4 = 344LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v4,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
               (const char *)v3);
    }
    v15 = v24;
  }
  else
  {
    *(_QWORD *)UsageValue = 0LL;
    UsageValueArray = HidP_GetUsageValueArray(
                        HidP_Feature,
                        1u,
                        0,
                        0xD0u,
                        UsageValue,
                        8u,
                        PreparsedData,
                        Report,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v3 = (unsigned int)UsageValueArray;
      v4 = 330LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v4,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
               (const char *)v3);
    }
    v15 = *(_QWORD *)UsageValue;
  }
  *(_QWORD *)(v8 + 1552) = v15;
  v17 = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD1u, &v24, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6));
  if ( v17 < 0 )
  {
    v3 = (unsigned int)v17;
    v4 = 357LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v4,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
             (const char *)v3);
  }
  *(_WORD *)(v8 + 1560) = v24;
  v18 = 0;
  if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD6u, &v24, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) < 0
    || (v18 = 1, *(_DWORD *)(v8 + 1568) = v24, v24 == 1) )
  {
    if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD2u, &v24, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) >= 0 )
      *(_WORD *)(v8 + 1572) = v24;
    if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD3u, &v24, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) >= 0 )
      *(_WORD *)(v8 + 1574) = v24;
  }
  if ( *(_DWORD *)(v8 + 1568) == 1 )
  {
    if ( !*(_WORD *)(v8 + 1572) )
    {
      v19 = "Invalid Dockable Device Primary Usage Page.";
      v20 = 414LL;
LABEL_27:
      v7 = -2147467259;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v20,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)0x80004005LL,
        (int)v19,
        ValueCapsLength);
      return v7;
    }
    if ( !*(_WORD *)(v8 + 1574) )
    {
      v19 = "Invalid Dockable Device Primary Usage ID.";
      v20 = 415LL;
      goto LABEL_27;
    }
  }
  if ( !v18 && *(_WORD *)(v8 + 1572) )
  {
    if ( *(_WORD *)(v8 + 1574) )
      *(_DWORD *)(v8 + 1568) = 1;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
    UsageValue,
    v22);
  DeviceDockServer::OnDockableDeviceArrival(*(DeviceDockServer **)UsageValue, (struct DockableDeviceInfo *)v8);
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)UsageValue);
  return 0LL;
}
