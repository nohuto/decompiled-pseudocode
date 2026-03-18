/*
 * XREFs of ??0InkProcessor@@AEAA@XZ @ 0x1402EBCA8
 * Callers:
 *     ?Initialize@InkProcessor@@SAJXZ @ 0x1402319E8 (-Initialize@InkProcessor@@SAJXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401ADD18 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x14022C0E4 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026F27C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403D3280 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

InkProcessor *__fastcall InkProcessor::InkProcessor(InkProcessor *this)
{
  InkFeedbackServer *v1; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v6; // [rsp+30h] [rbp+8h]

  *((_BYTE *)this + 8) = 0;
  v1 = (InkProcessor *)((char *)this + 96);
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = "HideInkCursorProvider";
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 4) = &HideInkCursorProvider::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  if ( IsCurrentSessionHostServiceSession() )
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14039BC68);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  if ( (Feature_InkProcessor__private_featureState & 0x10) == 0 )
  {
    v6 = Feature_InkProcessor__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_InkProcessor__private_descriptor,
      Feature_InkProcessor__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v6,
      3,
      (__int64)&Feature_InkProcessor__private_descriptor);
  }
  *((_BYTE *)this + 8) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v1, (InkProcessor *)((char *)this + 32), v3, v4);
  return this;
}
