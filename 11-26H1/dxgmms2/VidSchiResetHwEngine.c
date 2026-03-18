/*
 * XREFs of VidSchiResetHwEngine @ 0x140058740
 * Callers:
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U5@U2@U?$_tlgWrapSz@D@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@474AEBU?$_tlgWrapSz@D@@77@Z @ 0x140002054 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400021E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1400022D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x1400541C8 (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     ?VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14005728C (-VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140057308 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VidSchiResetHwEngine(struct _VIDSCH_NODE *a1, __int64 a2)
{
  __int64 v2; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  _DWORD *v6; // r14
  struct _TDR_RECOVERY_CONTEXT *v7; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 DbgOwnerTag; // rax
  bool v12; // zf
  _OWORD *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r12d
  bool v24; // r15
  struct _VIDSCH_NODE *i; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  struct _TDR_RECOVERY_CONTEXT *v32; // r15
  int v33; // r13d
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rcx
  struct _TDR_RECOVERY_CONTEXT *v37; // r8
  __int64 v38; // rdx
  _BYTE *v39; // rcx
  __int64 v40; // r15
  char v41; // al
  _BYTE *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  bool v46; // cf
  int v47; // eax
  bool result; // al
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v51; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v52; // [rsp+98h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v53; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v55[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _VIDSCH_NODE *v56; // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  struct _TDR_RECOVERY_CONTEXT *v59; // [rsp+D0h] [rbp-30h] BYREF
  void *v60; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int16 *v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v63[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v64; // [rsp+110h] [rbp+10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  char v66; // [rsp+170h] [rbp+70h] BYREF
  int v67; // [rsp+180h] [rbp+80h] BYREF
  int v68; // [rsp+184h] [rbp+84h]
  int v69; // [rsp+188h] [rbp+88h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2016), &LockHandle);
  v56 = a1;
  v57.QuadPart = 0LL;
  v58 = 0LL;
  v66 = 0;
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 32),
    VidSchiSetHwNodeResettingStateAtISR,
    &v56,
    *(unsigned int *)(v2 + 40),
    &v66);
  PerformanceCounter = v57;
  v6 = (_DWORD *)(*((_QWORD *)a1 + 23) + 112LL * *((unsigned int *)a1 + 49));
  memset(v6, 0, 0x70uLL);
  *((_DWORD *)a1 + 49) = (*((_DWORD *)a1 + 49) + 1) & (*((_DWORD *)a1 + 48) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((LARGE_INTEGER *)v6 + 1) = PerformanceCounter;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v6 = 10;
  v7 = 0LL;
  *(_QWORD *)(v6 + 9) = v58;
  if ( *(struct _VIDSCH_NODE **)(v2 + 3272) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 3264) = RecoveryContext;
    v7 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_BYTE *)RecoveryContext + 2921) = 1;
      *((_DWORD *)RecoveryContext + 4) = *((_DWORD *)a1 + 537) != 0 ? 12 : 6;
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 3260;
      v9 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v7 + 4) = v9;
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
      v10 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 5) = -1LL;
      *((_DWORD *)v7 + 36) = 69640;
      *((_DWORD *)v7 + 37) = DpiGetDriverVersion(*(_QWORD *)(v10 + 216));
      *((_DWORD *)v7 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 3272) + 4LL);
      DbgOwnerTag = DXGADAPTER::GetDbgOwnerTag(*((DXGADAPTER **)v7 + 4));
      v12 = *((_DWORD *)v7 + 4) == 6;
      *((_QWORD *)v7 + 13) = DbgOwnerTag;
      if ( v12 )
      {
        memset(v63, 0, sizeof(v63));
        v64 = 0LL;
        VidSchiCollectTdrPayloadEngineTimeout(a1, (struct _DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT *)v63);
        v13 = v63;
        v14 = 40;
      }
      else
      {
        VidSchiCollectTdrPayloadEnginePageFault(a1, v7);
        v13 = 0LL;
        v14 = 0;
      }
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 3264), 1, v14, v13);
    }
  }
  v15 = *((unsigned __int16 *)a1 + 2);
  ++*((_DWORD *)a1 + 127);
  v16 = *(_QWORD *)(v2 + 696);
  if ( (unsigned int)v15 < *(_DWORD *)(v2 + 768) )
    v16 += 8 * v15;
  v55[1] = *(unsigned __int16 *)(*(_QWORD *)v16 + 6LL);
  v17 = *(_QWORD *)(v2 + 696) + 8 * v15;
  if ( (unsigned int)v15 >= *(_DWORD *)(v2 + 768) )
    v17 = *(_QWORD *)(v2 + 696);
  v55[0] = *(unsigned __int16 *)(*(_QWORD *)v17 + 8LL);
  if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
  {
    v21 = *(_QWORD *)(v2 + 16);
    v54 = *((_QWORD *)a1 + 12);
    v50 = *((_QWORD *)a1 + 8);
    v49 = *((_QWORD *)a1 + 21);
    v67 = v20;
    v69 = v19;
    v51 = v7;
    v52 = *(unsigned __int16 **)(v21 + 1968);
    v53 = *(struct _TDR_RECOVERY_CONTEXT **)(v21 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      (__int64)&unk_14007E4E2,
      v18,
      v19,
      (__int64)&v53,
      &v52,
      (__int64)&v49,
      (__int64)&v50,
      (__int64)&v54,
      (__int64)&v51,
      (__int64)&v69,
      (__int64)&v67);
  }
  *((_QWORD *)a1 + 221) = v6 + 4;
  *((_QWORD *)a1 + 222) = v7;
  v22 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[42])(*(_QWORD *)(v2 + 8), v55);
  *((_QWORD *)a1 + 221) = 0LL;
  v23 = v22;
  *((_QWORD *)a1 + 222) = 0LL;
  v24 = v22 == 0;
  LOBYTE(v67) = v22 == 0;
  KeFlushQueuedDpcs();
  if ( !v23 )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v63, (unsigned __int64 *)(v2 + 2016), 1, 0);
    for ( i = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + 214);
          i != (struct _VIDSCH_NODE *)((char *)a1 + 1712);
          i = *(struct _VIDSCH_NODE **)i )
    {
      v26 = *((_QWORD *)i - 5);
      v27 = *((_QWORD *)i - 6);
      if ( v26 != v27 )
      {
        v28 = *(_QWORD *)(v2 + 16);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 40960LL, v28, v26, v27);
        WdLogGlobalForLineNumber = 916;
        break;
      }
    }
    *((_DWORD *)a1 + 4) = 2;
    AcquireSpinLock::Release((AcquireSpinLock *)v63);
  }
  *((_BYTE *)v6 + 53) = 1;
  v6[11] = v23;
  if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
  {
    v31 = *(_QWORD *)(v2 + 16);
    v69 = *((_DWORD *)a1 + 127);
    LODWORD(v49) = v23;
    LODWORD(v50) = 0;
    v53 = v7;
    v52 = *(unsigned __int16 **)(v31 + 1968);
    v51 = *(struct _TDR_RECOVERY_CONTEXT **)(v31 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v31,
      (__int64)&unk_14007E395,
      v29,
      v30,
      (__int64)&v51,
      &v52,
      (__int64)&v53,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v69);
  }
  if ( v7 )
  {
    *((_DWORD *)v7 + 704) = v23;
    TdrUpdateDbgReport(v7, 0);
    TdrCollectDbgInfoStage2(v7);
    v32 = (struct _VIDSCH_NODE *)((char *)a1 + 2156);
    if ( *((_BYTE *)a1 + 2156) )
    {
      v33 = *((_DWORD *)a1 + 543);
    }
    else
    {
      v33 = *((_DWORD *)v7 + 709);
      v32 = (struct _TDR_RECOVERY_CONTEXT *)((char *)v7 + 2821);
    }
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
    {
      LODWORD(v50) = *((unsigned __int8 *)v7 + 2820);
      v36 = *(_QWORD **)(v2 + 16);
      LODWORD(v49) = *((_DWORD *)a1 + 537);
      v52 = (unsigned __int16 *)*((_QWORD *)v7 + 351);
      LODWORD(v54) = *((_DWORD *)a1 + 127);
      v59 = v7;
      LODWORD(v51) = v33;
      v60 = (void *)v36[245];
      v61 = (unsigned __int16 *)v36[246];
      v62 = *(_QWORD *)((char *)v36 + 412);
      LOWORD(v69) = 4;
      v53 = v32;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v36,
        (__int64)&unk_14007E40F,
        v34,
        v35,
        (__int64)&v69,
        (__int64)&v62,
        &v61,
        &v60,
        (__int64)&v51,
        (__int64)&v59,
        (__int64)&v54,
        (__int64)&v52,
        (void **)&v53,
        (__int64)&v49,
        (__int64)&v50);
    }
    if ( v23 )
    {
      v37 = (struct _TDR_RECOVERY_CONTEXT *)(v2 + 3285);
      if ( !v32 )
        goto LABEL_42;
      v38 = 15LL;
      v39 = (_BYTE *)(v2 + 3285);
      v40 = v32 - v37;
      do
      {
        if ( v38 == -2147483631 )
          break;
        v41 = v39[v40];
        if ( !v41 )
          break;
        *v39++ = v41;
        --v38;
      }
      while ( v38 );
      v42 = v39 - 1;
      if ( v38 )
        v42 = v39;
      *v42 = 0;
      if ( !v38 )
LABEL_42:
        *(_BYTE *)v37 = 0;
      *(_DWORD *)(v2 + 3300) = v33;
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    v24 = v67;
    *(_QWORD *)(v2 + 3264) = 0LL;
  }
  if ( !v23 )
  {
    *((_QWORD *)a1 + 55) = 0LL;
    *((_DWORD *)a1 + 124) = 0;
  }
  RtlClearBitEx(v2 + 648, *((unsigned __int16 *)a1 + 2));
  *((_DWORD *)a1 + 4) = 0;
  if ( !v23 )
  {
    v43 = *((unsigned __int16 *)a1 + 2);
    v44 = *(_QWORD *)(v2 + 696);
    v45 = v44 + 8 * v43;
    v46 = (unsigned int)v43 < *(_DWORD *)(v2 + 768);
    if ( (unsigned int)v43 >= *(_DWORD *)(v2 + 768) )
      v45 = *(_QWORD *)(v2 + 696);
    v68 = *(unsigned __int16 *)(*(_QWORD *)v45 + 6LL);
    if ( v46 )
      v44 += 8 * v43;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v44 + 8LL);
    v47 = ((__int64 (__fastcall *)(_QWORD, int *))DxgCoreInterface[43])(*(_QWORD *)(v2 + 8), &v67);
    *((_BYTE *)v6 + 54) = 1;
    v6[12] = v47;
    v24 = v47 == 0;
  }
  result = v24;
  *((_BYTE *)v6 + 52) = v24;
  return result;
}
