/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D8D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401D8FF0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9910 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14018EB58 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401D9DCC (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9E1C (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     DpiIsRfxVgpuDevice @ 0x14023A3E0 (DpiIsRfxVgpuDevice.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  char v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 DbgOwnerTag; // rsi
  __int64 v10; // r9
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // r12
  bool v16; // bp
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 retaddr; // [rsp+88h] [rbp+0h]
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  if ( *((_BYTE *)a1 + 2921) )
  {
    if ( *((_QWORD *)a1 + 357) )
    {
      if ( *((_QWORD *)a1 + 358) )
        TdrUpdateDbgBuffer(a1);
    }
    return 1;
  }
  v5 = *((_QWORD *)a1 + 4);
  if ( !v5
    || ((v6 = *(_QWORD *)(v5 + 216), (v7 = *(_QWORD *)(v6 + 64)) == 0)
     || *(_DWORD *)(v7 + 16) != 1953656900
     || (v8 = *(_DWORD *)(v7 + 20), v8 != 2) && v8 != 3
     || !*(_BYTE *)(v7 + 2719))
    && !(unsigned __int8)DpiIsRfxVgpuDevice(v6) )
  {
    if ( !*((_QWORD *)a1 + 356) || v2 )
    {
      DbgOwnerTag = TdrGetDbgOwnerTag(a1);
      if ( ((DbgOwnerTag + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
        DbgOwnerTag = retaddr;
      LODWORD(v23) = 0;
      TdrRetrieveSecondaryBucketingKey(a1, (unsigned int *)&v23);
      v24 = (unsigned int)Feature_EnableFullLKDOnTDR__private_featureState;
      if ( (Feature_EnableFullLKDOnTDR__private_featureState & 0x10) == 0 )
      {
        LODWORD(v24) = Feature_EnableFullLKDOnTDR__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor,
          v24,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v24,
          3,
          (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor);
      }
      v10 = *((_QWORD *)a1 + 4);
      if ( v10 )
        v11 = *(_QWORD *)(v10 + 216);
      else
        v11 = 0LL;
      v12 = *((_DWORD *)a1 + 4);
      if ( v12 == 6 || v12 == 12 )
        v13 = (*((_BYTE *)a1 + 2820) != 0) + 321;
      else
        v13 = 279;
      v14 = (unsigned int)v23;
      v15 = *((_QWORD *)a1 + 351);
      if ( v10 )
        v16 = *(_QWORD *)(v10 + 3168) == 0LL;
      else
        v16 = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&TdrCaptureDumpStart);
      *((_QWORD *)a1 + 356) = WdDbgReportRecreate(v11, v13, a1, DbgOwnerTag, v14, v15, v16, *((_QWORD *)a1 + 356), 3);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v17, (__int64)&TdrCaptureDumpFinish);
      if ( !*((_QWORD *)a1 + 356) )
      {
        v23 = (unsigned int)Feature_EnableFullLKDOnTDR__private_featureState;
        if ( (Feature_EnableFullLKDOnTDR__private_featureState & 0x10) == 0 )
        {
          LODWORD(v23) = Feature_EnableFullLKDOnTDR__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor,
            v23,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v23,
            3,
            (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
          McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&TdrCaptureDumpStart);
        LOBYTE(v21) = 0;
        LOBYTE(v20) = v16;
        *((_QWORD *)a1 + 356) = WdDbgReportRecreate(
                                  v11,
                                  v13,
                                  a1,
                                  DbgOwnerTag,
                                  v14,
                                  v15,
                                  v20,
                                  *((_QWORD *)a1 + 356),
                                  v21);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(v18, (__int64)&TdrCaptureDumpFinish);
      }
      v19 = *((_QWORD *)a1 + 356);
      if ( !v19 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1090;
        return 0;
      }
      if ( !(unsigned __int8)WdDbgReportQueryInfo(v19, (char *)a1 + 128) )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1098;
      }
    }
    if ( !*((_QWORD *)a1 + 357) )
      return 1;
    if ( !*((_QWORD *)a1 + 358) )
      return 1;
    TdrUpdateDbgBuffer(a1);
    if ( (unsigned __int8)WdDbgReportSecondaryData(
                            *((_QWORD *)a1 + 356),
                            *((_QWORD *)a1 + 357),
                            *((unsigned int *)a1 + 716)) )
      return 1;
    *((_DWORD *)a1 + 29) |= 0x80000000;
    WdLogSingleEntry2(2LL, a1, *((_QWORD *)a1 + 358));
    WdLogGlobalForLineNumber = 1115;
  }
  return 0;
}
