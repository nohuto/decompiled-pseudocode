/*
 * XREFs of PolicyConfigGetMixFormat @ 0x18010D660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, const unsigned __int16 *a2, _QWORD *a3)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v4; // edi
  struct AudioSrvTelemetryProvider *v7; // rax
  int EndpointCharacteristicsDescriptor; // ebx
  int MixFormat; // eax
  unsigned __int16 *v10; // rdi
  void *v11; // rax
  struct _GUID v13; // [rsp+30h] [rbp-19h] BYREF
  EffectPack *v14[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v15; // [rsp+50h] [rbp+7h]
  struct _TP_TIMER *pv[7]; // [rsp+58h] [rbp+Fh] BYREF
  void *Src; // [rsp+C0h] [rbp+77h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  *(_OWORD *)v14 = 0LL;
  Src = 0LL;
  v15 = 0LL;
  v7 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v7 + 1),
    v4,
    (struct _TP_TIMER *)L"PolicyConfigGetMixFormat",
    pftDueTime);
  *a3 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v14);
  if ( EndpointCharacteristicsDescriptor < 0 )
    goto LABEL_9;
  v13 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = EffectPack::GetMixFormat(v14[1], eHostProcessConnector, &v13, (struct tWAVEFORMATEX **)&Src);
  v10 = (unsigned __int16 *)Src;
  EndpointCharacteristicsDescriptor = MixFormat;
  if ( MixFormat >= 0 )
  {
    v11 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v11;
    if ( v11 )
      memcpy_0(v11, v10, v10[8] + 18LL);
    else
      EndpointCharacteristicsDescriptor = -2147024882;
  }
  if ( v10 )
    CoTaskMemFree(v10);
  if ( EndpointCharacteristicsDescriptor < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 2240, EndpointCharacteristicsDescriptor);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v14);
  return (unsigned int)EndpointCharacteristicsDescriptor;
}
