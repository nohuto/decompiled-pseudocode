/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401D5DC4
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140039928 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401B4904 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1401D68F4 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1401D6A58 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D6C40 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x14022F3BC (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x14022F980 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x14042FC54 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this)
{
  __int64 v2; // r14
  char *v3; // r15
  __int64 result; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v5; // r12
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rdi
  const wchar_t *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  char *v12; // rax
  unsigned int v13; // r9d
  int v14; // eax
  int v15; // eax
  int i; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  char *NtSystemRoot; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int16 *v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v29; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v30[138]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[518]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int16 v32; // [rsp+4AEh] [rbp+3AEh]
  WCHAR SourceString[264]; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned __int16 v34[264]; // [rsp+6C0h] [rbp+5C0h] BYREF
  unsigned __int16 v35[264]; // [rsp+8D0h] [rbp+7D0h] BYREF
  unsigned __int16 v36[264]; // [rsp+AE0h] [rbp+9E0h] BYREF

  DXGGLOBAL::GetGlobal();
  v2 = -1LL;
  v3 = 0LL;
  Handle = (HANDLE)-1LL;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry0(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 1695;
    return result;
  }
  v27 = (unsigned int)Feature_CopyDriverToSystem32__private_featureState;
  if ( (Feature_CopyDriverToSystem32__private_featureState & 0x10) == 0 )
  {
    LODWORD(v27) = Feature_CopyDriverToSystem32__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_CopyDriverToSystem32__private_descriptor,
      v27,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v27,
      3,
      (__int64)&Feature_CopyDriverToSystem32__private_descriptor);
  }
  memset(&v30[1], 0, 0x224uLL);
  memset(v31, 0, sizeof(v31));
  v30[0] = 3;
  v32 = 0;
  v5 = (DXGADAPTER *)((char *)this + 4712);
  v29.hAdapter = 0;
  v29.pPrivateDriverData = v30;
  *(_QWORD *)&v29.PrivateDriverDataSize = 1072LL;
  v29.Type = KMTQAITYPE_QUERYREGISTRY;
  v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4712), 0LL, &v29, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = TranslateUmdFileNameToVm((char *)&v30[136], 0x104u, &v30[134]);
    v8 = v10;
    if ( v10 >= 0 )
    {
      RtlStringCbCopyW((char *)SourceString, 0x208uLL, (char *)L"\\??\\");
      RtlStringCbCatW(SourceString, v11, (char *)&v30[136]);
      if ( (int)DxgkpCreateFile(SourceString, 1u, 0x80u, 0x20u, 1u, &Handle) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1764;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver image does not exists in the VM",
          1764LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v2 = (__int64)Handle;
        LODWORD(v8) = -1073741823;
        goto LABEL_31;
      }
      ZwClose(Handle);
      v2 = -1LL;
      if ( *((_DWORD *)this + 776) == 2 )
        DxgkpDeleteFile(SourceString);
      v12 = (char *)operator new[](0x208uLL, 0x4B677844u, 256LL);
      v3 = v12;
      if ( !v12 )
      {
        LODWORD(v8) = -1073741801;
        goto LABEL_31;
      }
      RtlStringCbCopyW(v12, 0x208uLL, (char *)SourceString);
      v30[0] = 2;
      v29.pPrivateDriverData = v30;
      v29.hAdapter = 0;
      *(_QWORD *)&v29.PrivateDriverDataSize = 1072LL;
      v29.Type = KMTQAITYPE_QUERYREGISTRY;
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4712), 0LL, &v29, v13);
      v8 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v9 = L"D3DDDI_QUERYREGISTRY_DRIVERSTOREPATH failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1787;
        goto LABEL_7;
      }
      v15 = TranslateUmdFileNameToVm((char *)&v30[136], 0x104u, &v30[134]);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v27 = (unsigned int)Feature_NonDXKryptonGpuSupport__private_featureState;
        if ( (Feature_NonDXKryptonGpuSupport__private_featureState & 0x10) == 0 )
        {
          LODWORD(v27) = Feature_NonDXKryptonGpuSupport__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_NonDXKryptonGpuSupport__private_descriptor,
            v27,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v27,
            3,
            (__int64)&Feature_NonDXKryptonGpuSupport__private_descriptor);
        }
        LODWORD(v27) = 0;
        LODWORD(Handle) = 0;
        for ( i = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                    v5,
                    v36,
                    v35,
                    (enum DXGKP_HARDLINKTYPE *)&v27,
                    (enum DXGKP_HARDLINKOVERWRITETYPE *)&Handle);
              i >= 0;
              i = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                    v5,
                    v36,
                    v35,
                    (enum DXGKP_HARDLINKTYPE *)&v27,
                    (enum DXGKP_HARDLINKOVERWRITETYPE *)&Handle) )
        {
          RtlStringCbCopyW((char *)SourceString, 0x208uLL, (char *)L"\\??\\");
          RtlStringCbCatW(SourceString, v17, (char *)&v30[136]);
          RtlStringCbCatW(SourceString, v18, (char *)L"\\");
          RtlStringCbCatW(SourceString, v19, (char *)v36);
          RtlStringCbCopyW((char *)v34, 0x208uLL, (char *)L"\\??\\");
          NtSystemRoot = (char *)RtlGetNtSystemRoot();
          RtlStringCbCatW(v34, v21, NtSystemRoot);
          v23 = L"\\System32\\";
          if ( (_DWORD)v27 )
            v23 = L"\\Syswow64\\";
          RtlStringCbCatW(v34, v22, (char *)v23);
          RtlStringCbCatW(v34, v24, (char *)v35);
          v25 = DxgkpPopulateFile(SourceString, v34, (unsigned int)Handle);
          if ( v25 < 0 )
          {
            v26 = v25;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2046;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to populate file: 0x%I64x",
              v26,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        LODWORD(v8) = 0;
        goto LABEL_31;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1793;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1731;
    }
    v9 = L"TranslateUmdFileNameToVm failed: 0x%I64x";
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v9 = L"D3DDDI_QUERYREGISTRY_DRIVERIMAGEPATH failed: 0x%I64x";
    WdLogGlobalForLineNumber = 1725;
  }
LABEL_7:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_31:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  if ( v2 != -1 )
    ZwClose((HANDLE)v2);
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(v5, SourceString, 0LL, 0LL, 0LL);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to copy driver store files: 0x%I64x",
      (int)v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
