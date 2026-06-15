/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x1801152E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180078130 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  int EndpointCharacteristics; // ebx
  int KSFormatFromWFXFormat; // eax
  void *v14; // rdi
  struct CEndpointCharacteristics *v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  __int64 v19; // [rsp+50h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-9h] BYREF
  struct _TP_TIMER *v21[7]; // [rsp+60h] [rbp-1h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  v16 = 0LL;
  v11 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v21,
    *((struct _TP_TIMER **)v11 + 1),
    v8,
    (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits",
    pftDueTime);
  EndpointCharacteristics = GetEndpointCharacteristics(a2, 0, &v16);
  if ( EndpointCharacteristics < 0 )
    goto LABEL_11;
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v16 + 5, &v19);
  EndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v19 + 24LL))(
                              v19,
                              &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
                              1LL);
  if ( EndpointCharacteristics < 0 )
    goto LABEL_11;
  EndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
  if ( EndpointCharacteristics < 0 )
    goto LABEL_11;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v14 = pv;
  EndpointCharacteristics = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    EndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, __int64 *))(*(_QWORD *)v17 + 80LL))(
                                v17,
                                pv,
                                a5,
                                a6);
    if ( EndpointCharacteristics >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v14 )
    CoTaskMemFree(v14);
  if ( EndpointCharacteristics < 0 )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4515, EndpointCharacteristics);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  return (unsigned int)EndpointCharacteristics;
}
