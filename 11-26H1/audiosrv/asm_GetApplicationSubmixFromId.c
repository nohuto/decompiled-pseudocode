/*
 * XREFs of asm_GetApplicationSubmixFromId @ 0x1800BDA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ??1?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ @ 0x1800BB698 (--1-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall asm_GetApplicationSubmixFromId(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v5; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  __int64 v7; // rax
  __int64 (*v8)(void); // rax
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 *v16; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v5,
    (struct _TP_TIMER *)L"asm_GetApplicationSubmixFromId",
    pftDueTime);
  v19 = 0LL;
  v7 = *(_QWORD *)g_ProcessSubmixManager;
  v19 = 0LL;
  v8 = *(__int64 (**)(void))(v7 + 56);
  try
  {
    v9 = v8();
    v10 = v9;
    if ( v9 >= 0 )
    {
      v13 = v19;
      v14 = operator new(8uLL);
      v15 = v14;
      if ( v14 )
        wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
          v14,
          v13);
      else
        v15 = 0LL;
      v16 = 0LL;
      *a3 = v15;
      std::unique_ptr<CAppSubmixContext>::~unique_ptr<CAppSubmixContext>(&v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = v10;
    }
  }
  catch ( ... )
  {
    LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x133,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                     v11);
    return (unsigned int)v19;
  }
  return result;
}
