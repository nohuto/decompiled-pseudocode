/*
 * XREFs of NtDxgkDuplicateHandle @ 0x1401EC630
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E9C54 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkDuplicateHandle(void *Src)
{
  unsigned int v2; // edi
  const wchar_t *v3; // r9
  __int64 v4; // rcx
  __int64 v6; // [rsp+50h] [rbp-68h]
  int v7; // [rsp+58h] [rbp-60h] BYREF
  __int64 v8; // [rsp+60h] [rbp-58h]
  char v9; // [rsp+68h] [rbp-50h]
  _OWORD Buf1[2]; // [rsp+70h] [rbp-48h] BYREF
  __int128 v11; // [rsp+90h] [rbp-28h]

  v6 = (unsigned int)Feature_EnableHostResourceSharing__private_featureState;
  if ( (Feature_EnableHostResourceSharing__private_featureState & 0x10) == 0 )
  {
    LODWORD(v6) = Feature_EnableHostResourceSharing__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnableHostResourceSharing__private_descriptor,
      v6,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v6,
      3,
      (__int64)&Feature_EnableHostResourceSharing__private_descriptor);
  }
  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2208;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2208);
  if ( DXGPROCESS::GetCurrent() )
  {
    memset(Buf1, 0, sizeof(Buf1));
    v11 = 0LL;
    RtlCopyFromUser(Buf1, Src, 0x30uLL);
    if ( (HIDWORD(v11) & 0xFFFFFFFE) != 0 )
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3321;
      v3 = L"Reserved flags must be set to 0, returning 0x%I64x";
    }
    else
    {
      if ( (BYTE12(v11) & 1) == 0 || !DWORD2(v11) )
      {
        if ( !memcmp((char *)Buf1 + 8, &GUID_NULL, 0x10uLL) )
          v2 = -1073741811;
        else
          v2 = DxgkpDuplicateHandleToVm((struct _D3DKMT_DUPLICATEHANDLE *)Buf1);
        RtlWriteULong64ToUser((_QWORD *)Src + 4, v11);
        goto LABEL_15;
      }
      v2 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3331;
      v3 = L"When SameAccess flag is specified, DesiredAccess must be 0, returning 0x%I64x";
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3300;
    v3 = L"Invalid process context, returning 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
  return v2;
}
