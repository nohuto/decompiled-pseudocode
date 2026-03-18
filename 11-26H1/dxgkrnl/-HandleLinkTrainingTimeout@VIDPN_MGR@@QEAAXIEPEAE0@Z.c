/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025EE00
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1402604F0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444@Z @ 0x140004030 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x1400736EC (Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14036608C (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403C3D6C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        DMMVIDEOPRESENTTARGETSET **this,
        unsigned int a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rbx
  struct DXGADAPTER *ContainingAdapter; // rdi
  unsigned __int8 *v10; // r15
  DMMVIDEOPRESENTTARGETSET *v11; // rcx
  struct _LUID *v12; // rdx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // [rsp+60h] [rbp-11h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25[2]; // [rsp+68h] [rbp-9h] BYREF
  struct _DXGK_CONNECTION_CHANGE v26; // [rsp+78h] [rbp+7h] BYREF
  int v27; // [rsp+D0h] [rbp+5Fh] BYREF
  int v28; // [rsp+D8h] [rbp+67h] BYREF
  int v29; // [rsp+E8h] [rbp+77h] BYREF

  v6 = a2;
  LOBYTE(v25[0]) = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  CDisplayScenarioContextScope::ContextScopeConstructor(v25, 0LL, 0x3Du, 0);
  v24 = v25[1];
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5222;
  }
  v10 = a5;
  v11 = this[15];
  *a4 = 0;
  *v10 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v11, v6);
  if ( TargetById )
  {
    if ( a3 )
    {
      a5 = 0LL;
      DXGADAPTER::IsAdapterSessionized(ContainingAdapter, v12, 0LL, (unsigned __int64 *)&a5);
      DxgkLogCodePointPacketForSession(88, (unsigned __int64)a5, v6, 0xFFFFFFEu, 0, v14);
      if ( (unsigned int)Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
        && (unsigned int)dword_1401665B8 > 5
        && tlgKeywordOn((__int64)&dword_1401665B8, 0x4000LL) )
      {
        v22 = *(_QWORD *)((char *)ContainingAdapter + 412);
        v28 = 268435454;
        LODWORD(a5) = 0;
        v27 = v6;
        v29 = 1;
        v23 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v15,
          (__int64)&unk_140145A90,
          v16,
          v17,
          (__int64)&v23,
          (__int64)&v29,
          (__int64)&v22,
          (__int64)&v27,
          (__int64)&a5,
          (__int64)&v28);
      }
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(ContainingAdapter) )
      {
        *a4 = 1;
      }
      else
      {
        *(_OWORD *)&v26.ConnectionChangeId = 0LL;
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, &v26);
        DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(TargetById, v26.ConnectionChangeId, 13LL);
        WdLogSingleEntry2(7LL, v6, ContainingAdapter);
        WdLogGlobalForLineNumber = 5309;
        *v10 = 1;
      }
    }
    else
    {
      a5 = 0LL;
      DXGADAPTER::IsAdapterSessionized(ContainingAdapter, v12, 0LL, (unsigned __int64 *)&a5);
      DxgkLogCodePointPacketForSession(88, (unsigned __int64)a5, v6, 0xFFFFFFFu, 0, v18);
      if ( (unsigned int)Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
        && (unsigned int)dword_1401665B8 > 5
        && tlgKeywordOn((__int64)&dword_1401665B8, 0x4000LL) )
      {
        v23 = *(_QWORD *)((char *)ContainingAdapter + 412);
        v28 = 0xFFFFFFF;
        LODWORD(a5) = 0;
        v27 = v6;
        v29 = 1;
        v22 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v19,
          (__int64)&unk_140145A1B,
          v20,
          v21,
          (__int64)&v22,
          (__int64)&v29,
          (__int64)&v23,
          (__int64)&v27,
          (__int64)&a5,
          (__int64)&v28);
      }
      memset(&v26, 0, sizeof(v26));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, &v26);
      *((_DWORD *)&v26 + 2) = *((_DWORD *)&v26 + 2) & 0xFD000000 | v6 & 0xFFFFFF | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus((VIDPN_MGR *)this, &v26, 0, v24, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5237;
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v25);
}
