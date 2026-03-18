/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F2844
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F1C50 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14018F200 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1403F2B34 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rax
  struct DISPLAY_CALLOUT_ENTRY *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  struct DISPLAY_CALLOUT_ENTRY **v20; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  _BYTE v23[16]; // [rsp+50h] [rbp-69h] BYREF
  int v24; // [rsp+60h] [rbp-59h] BYREF
  int v25; // [rsp+64h] [rbp-55h]
  __int64 v26; // [rsp+68h] [rbp-51h]
  __int128 v27; // [rsp+70h] [rbp-49h]
  __int64 v28; // [rsp+80h] [rbp-39h]
  int v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+8Ch] [rbp-2Dh]
  int v31; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+94h] [rbp-25h]
  int v33; // [rsp+98h] [rbp-21h]
  int v34; // [rsp+9Ch] [rbp-1Dh]
  __int64 v35; // [rsp+A0h] [rbp-19h]

  v10 = 0;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9064;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 9064LL, 0LL, 0LL, 0LL, 0LL);
  }
  v26 = 0LL;
  v27 = 0LL;
  v30 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(a1 + 552), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v11 = operator new(0x50uLL, 0x4B677844u, 256LL);
  if ( v11 )
    v12 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v11,
                                            (_QWORD *)(*(_QWORD *)(a1 + 16) + 412LL),
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v12 = 0LL;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(v13 + 412);
  if ( v12 )
  {
    v17 = *(_DWORD *)(v13 + 412);
    v33 = a2;
    v18 = 0x200000000LL;
    v26 = 0LL;
    v24 = 30;
    v25 = 72;
    v29 = 0;
    v28 = 0LL;
    v27 = 0LL;
    v31 = 46;
    v32 = v17;
    v34 = a3;
    v35 = v14;
    if ( *(_QWORD *)(v13 + 4876) )
      v19 = *(unsigned int *)(v13 + 4884);
    else
      v19 = 0x200000000LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v24, v19);
    if ( *(_BYTE *)(a1 + 600) )
    {
      v20 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 616);
      if ( *v20 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 608) )
        __fastfail(3u);
      *(_QWORD *)v12 = a1 + 608;
      *((_QWORD *)v12 + 1) = v20;
      *v20 = v12;
      *(_QWORD *)(a1 + 616) = v12;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      v22 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v22 + 4876) )
        v18 = *(unsigned int *)(v22 + 4884);
      v10 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1824), v12, v18);
    }
  }
  else
  {
    v24 = 30;
    v26 = 0LL;
    v25 = 72;
    v29 = 0;
    v28 = 0LL;
    v27 = 0LL;
    v31 = 46;
    v32 = -1073741801;
    v33 = a2;
    v34 = a3;
    v35 = v14;
    if ( *(_QWORD *)(v13 + 4876) )
      v15 = *(unsigned int *)(v13 + 4884);
    else
      v15 = 0x200000000LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v24, v15);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9089;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for monitor event callout.",
      9089LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v10 = -1073741801;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  return v10;
}
