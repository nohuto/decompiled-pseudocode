/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800BD340
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001984 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001F858 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        unsigned int a3,
        struct tWAVEFORMATEX *a4,
        struct _GUID *a5,
        struct VadServerSettings *a6,
        void **a7)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  wchar_t *v14; // rdi
  struct AudioSrvTelemetryProvider *v15; // rax
  _DWORD *v16; // rbx
  struct IProcessSubmixProxy *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // ebx
  int v23; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int16 *v24; // [rsp+58h] [rbp-69h] BYREF
  wchar_t *v25; // [rsp+60h] [rbp-61h] BYREF
  void **v26; // [rsp+68h] [rbp-59h]
  struct _TP_TIMER *pv[7]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-19h]
  __int128 v29; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v26 = a7;
  v28 = *(_OWORD *)a6;
  v29 = v28;
  EtwEventActivityIdControl(4LL, &v29);
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v12 = g_AudioSrvWatchDogTimerInMs;
  v13 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v13 + 1),
    v12,
    (struct _TP_TIMER *)L"asm_AudioServerInitializeStream",
    pftDueTime);
  v14 = (wchar_t *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 184LL))(*a2);
  v24 = 0LL;
  v15 = AudioSrvTelemetryProvider::Instance();
  v16 = (_DWORD *)*((_QWORD *)v15 + 1);
  if ( *v16 > 4u && tlgKeywordOn(*((_QWORD *)v15 + 1), 512LL) )
  {
    v17 = *a2;
    v25 = v14;
    v23 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v17 + 128LL))(v17);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)v16,
      (int)&unk_1801A29C7,
      v18,
      v19,
      (__int64)&v23,
      (const wchar_t **)&v25);
  }
  v20 = AudioServerInitialize_Internal(a1, v14, 0, a3, a4, a5, a6, &v24, *a2, v26);
  v21 = v20;
  if ( v20 >= 0 )
  {
    operator delete(v24);
    v21 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v20);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v29);
  return v21;
}
