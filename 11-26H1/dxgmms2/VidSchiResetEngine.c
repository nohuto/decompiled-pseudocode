/*
 * XREFs of VidSchiResetEngine @ 0x1400454F8
 * Callers:
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U5@U2@U?$_tlgWrapSz@D@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@474AEBU?$_tlgWrapSz@D@@77@Z @ 0x140002054 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400021E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1400022D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x14004992C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x1400541C8 (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x140054754 (McTemplateK0dp_EtwWriteTransfer.c)
 *     ?VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14005728C (-VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140057308 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiMarkDevicesInError @ 0x14009A454 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400EAA60 (VidSchiSubmitPreemptionCommand.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall VidSchiResetEngine(struct _VIDSCH_NODE *a1, __int64 a2)
{
  __int64 v4; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER *v6; // r12
  struct _TDR_RECOVERY_CONTEXT *v7; // rsi
  __int64 v8; // rcx
  char v9; // r15
  __int64 v10; // r13
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // cf
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // rcx
  DWORD v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  struct _TDR_RECOVERY_CONTEXT *v33; // rax
  struct _TDR_RECOVERY_CONTEXT *v34; // r8
  __int64 v35; // r13
  struct _TDR_RECOVERY_CONTEXT *v36; // rcx
  __int64 v37; // rax
  _BYTE *v38; // r9
  __int64 v39; // rcx
  _BYTE *v40; // rdx
  bool v41; // zf
  _BYTE *v42; // rax
  int v43; // eax
  const struct _TDR_HISTORY *v44; // rbx
  bool IsLimitExhausted; // al
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  struct _TDR_RECOVERY_CONTEXT *v48; // rbx
  int v49; // r9d
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rcx
  struct _TDR_RECOVERY_CONTEXT *v53; // r8
  _BYTE *v54; // rcx
  __int64 v55; // rbx
  char v56; // al
  _BYTE *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  char v60; // al
  char result; // al
  char v62; // [rsp+80h] [rbp-80h] BYREF
  char v63[3]; // [rsp+81h] [rbp-7Fh] BYREF
  int v64; // [rsp+84h] [rbp-7Ch] BYREF
  struct _TDR_RECOVERY_CONTEXT *v65; // [rsp+88h] [rbp-78h] BYREF
  int v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v68; // [rsp+A0h] [rbp-60h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v69; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v72; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  LARGE_INTEGER v75; // [rsp+F0h] [rbp-10h]
  struct _TDR_RECOVERY_CONTEXT *v76; // [rsp+F8h] [rbp-8h] BYREF
  void *v77; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v78; // [rsp+108h] [rbp+8h] BYREF
  __int64 v79; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v81[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v82; // [rsp+150h] [rbp+50h]
  _DWORD v83[2]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v84; // [rsp+160h] [rbp+60h]

  WdLogSingleEntry3(4LL, *((_QWORD *)a1 + 21), *((_QWORD *)a1 + 8), *((_QWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 3);
  WdLogGlobalForLineNumber = 18169;
  if ( *((_DWORD *)a1 + 755) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 796));
    if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 756) == 1 )
    {
      *((_QWORD *)a1 + 29) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 756);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 796));
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
  v63[0] = 0;
  v72 = (unsigned __int64)a1;
  v75.QuadPart = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  DpSynchronizeExecution(*(_QWORD *)(v4 + 32), VidSchiSetNodeResettingStateAtISR, &v72, *(unsigned int *)(v4 + 40), v63);
  PerformanceCounter = *(LARGE_INTEGER *)((char *)&v72 + 8);
  v6 = (LARGE_INTEGER *)(*((_QWORD *)a1 + 23) + 112LL * *((unsigned int *)a1 + 49));
  memset(v6, 0, 0x70uLL);
  *((_DWORD *)a1 + 49) = (*((_DWORD *)a1 + 49) + 1) & (*((_DWORD *)a1 + 48) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6[1] = PerformanceCounter;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  v7 = 0LL;
  v6->LowPart = 6;
  *(_OWORD *)&v6[2].LowPart = v73;
  v6[4].QuadPart = v74;
  v6[6] = v75;
  if ( v75.LowPart == v75.HighPart && !*((_DWORD *)a1 + 537) )
  {
    if ( *((_DWORD *)a1 + 755) )
    {
      v8 = *((unsigned int *)a1 + 755);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 2048LL, (unsigned int)v75.HighPart, v8, 0LL);
      WdLogGlobalForLineNumber = 916;
    }
    WdLogSingleEntry2(4LL, *((_QWORD *)a1 + 8), *((_QWORD *)a1 + 12));
    v9 = 1;
    *((_QWORD *)&v74 + 1) = v73;
    BYTE5(v6[7].QuadPart) = 0;
    v10 = v4 + 3272;
    WdLogGlobalForLineNumber = 18244;
    goto LABEL_43;
  }
  v10 = v4 + 3272;
  if ( *(struct _VIDSCH_NODE **)(v4 + 3272) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v4 + 3264) = RecoveryContext;
    v7 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_BYTE *)RecoveryContext + 2921) = 1;
      *((_DWORD *)RecoveryContext + 4) = *((_DWORD *)a1 + 537) != 0 ? 12 : 6;
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v4 + 3260;
      v12 = *(_QWORD *)(v4 + 16);
      *((_QWORD *)v7 + 4) = v12;
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v13 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 5) = -1LL;
      *((_DWORD *)v7 + 36) = 69640;
      *((_DWORD *)v7 + 37) = DpiGetDriverVersion(*(_QWORD *)(v13 + 216));
      *((_DWORD *)v7 + 14) = *(unsigned __int16 *)(*(_QWORD *)v10 + 4LL);
      *((_QWORD *)v7 + 13) = DXGADAPTER::GetDbgOwnerTag(*((DXGADAPTER **)v7 + 4));
      if ( *((_DWORD *)v7 + 4) == 6 )
      {
        memset(v81, 0, sizeof(v81));
        v82 = 0LL;
        VidSchiCollectTdrPayloadEngineTimeout(a1, (struct _DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT *)v81);
        v14 = v81;
        v15 = 40;
      }
      else
      {
        VidSchiCollectTdrPayloadEnginePageFault(a1, v7);
        v14 = 0LL;
        v15 = 0;
      }
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v4 + 3264), 1, v15, v14);
    }
  }
  v16 = *((unsigned __int16 *)a1 + 2);
  ++*((_DWORD *)a1 + 127);
  v17 = *(_QWORD *)(v4 + 696);
  v84 = 0;
  v18 = v17 + 8 * v16;
  v19 = (unsigned int)v16 < *(_DWORD *)(v4 + 768);
  if ( (unsigned int)v16 >= *(_DWORD *)(v4 + 768) )
    v18 = v17;
  v83[1] = *(unsigned __int16 *)(*(_QWORD *)v18 + 6LL);
  if ( v19 )
    v17 += 8 * v16;
  v83[0] = *(unsigned __int16 *)(*(_QWORD *)v17 + 8LL);
  if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
  {
    v23 = *(_QWORD *)(v4 + 16);
    v71 = *((_QWORD *)a1 + 12);
    v70 = *((_QWORD *)a1 + 8);
    v67 = *((_QWORD *)a1 + 21);
    v64 = v22;
    v66 = v21;
    v65 = v7;
    v68 = *(unsigned __int16 **)(v23 + 1968);
    v69 = *(struct _TDR_RECOVERY_CONTEXT **)(v23 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (__int64)&unk_14007DEC2,
      v20,
      v21,
      (__int64)&v69,
      &v68,
      (__int64)&v67,
      (__int64)&v70,
      (__int64)&v71,
      (__int64)&v65,
      (__int64)&v66,
      (__int64)&v64);
  }
  v24 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[41])(*(_QWORD *)(v4 + 8), v83);
  if ( v24 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    *((_DWORD *)a1 + 4) = 2;
  }
  BYTE5(v6[7].QuadPart) = 1;
  v6[7].LowPart = v24;
  if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
  {
    v27 = *(_QWORD *)(v4 + 16);
    v64 = *((_DWORD *)a1 + 127);
    LODWORD(v67) = v84;
    v66 = v24;
    v69 = v7;
    v68 = *(unsigned __int16 **)(v27 + 1968);
    v65 = *(struct _TDR_RECOVERY_CONTEXT **)(v27 + 412);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v27,
      (__int64)&unk_14007DF75,
      v25,
      v26,
      (__int64)&v65,
      &v68,
      (__int64)&v69,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v64);
  }
  v28 = v84;
  v6[5].QuadPart = v84;
  BYTE4(v6[7].QuadPart) = v9;
  if ( v9 )
  {
    v29 = v73;
    if ( (unsigned __int64)v74 >= (unsigned __int64)v73
      && (_QWORD)v74 - (_QWORD)v73 <= 0x7FFFFFFFuLL
      && (int)v73 - (int)v28 <= 0
      && (int)v74 - (int)v28 >= 0 )
    {
      if ( (unsigned int)v73 > (unsigned int)v28 )
        v29 = v74;
      *((_QWORD *)&v74 + 1) = v28 | v29 & 0xFFFFFFFF00000000uLL;
      goto LABEL_41;
    }
    v30 = *(_QWORD *)(v4 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 10LL, v28, v73, v30);
    WdLogGlobalForLineNumber = 916;
  }
  *((_QWORD *)&v74 + 1) = v74;
LABEL_41:
  if ( v7 )
    *((_DWORD *)v7 + 704) = v24;
LABEL_43:
  v31 = 0LL;
  v62 = 0;
  v65 = 0LL;
  if ( *(struct _VIDSCH_NODE **)v10 == a1 )
  {
    v31 = *((_QWORD *)a1 + *((unsigned int *)a1 + 394) + 198);
    if ( v31 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(v31 + 104) + 48LL);
      if ( v32 )
      {
        v33 = 0LL;
        if ( *(_QWORD *)(v32 + 8) )
          v33 = *(struct _TDR_RECOVERY_CONTEXT **)(v31 + 104);
        v65 = v33;
      }
    }
  }
  VidSchiMarkDevicesInError(&v72, &v62, &v65);
  if ( v7 )
  {
    v34 = v65;
    v35 = 15LL;
    if ( v65 )
    {
      v36 = (struct _TDR_RECOVERY_CONTEXT *)*((_QWORD *)v65 + 6);
      v65 = v36;
      v37 = *((_QWORD *)v36 + 1);
      if ( v37 )
      {
        *((_QWORD *)v7 + 351) = *(_QWORD *)(v37 + 56);
        v38 = (_BYTE *)*((_QWORD *)v36 + 331);
        if ( !v38 )
          goto LABEL_60;
        v39 = 15LL;
        v40 = (char *)v7 + 2821;
        do
        {
          if ( v39 == -2147483631 )
            break;
          if ( !*v38 )
            break;
          *v40++ = *v38++;
          --v39;
        }
        while ( v39 );
        v41 = v39 == 0;
        v42 = v40 - 1;
        v36 = v65;
        if ( !v41 )
          v42 = v40;
        *v42 = 0;
        if ( v41 )
LABEL_60:
          *((_BYTE *)v7 + 2821) = 0;
        if ( v31 )
          *((_DWORD *)v7 + 709) = *(_DWORD *)(v31 + 144);
      }
      if ( !*(_BYTE *)(*((_QWORD *)v34 + 6) + 2632LL) )
      {
        v43 = *((_DWORD *)v34 + 14);
        if ( (v43 & 8) == 0 && (v43 & 1) == 0 )
        {
          v44 = (struct _TDR_RECOVERY_CONTEXT *)((char *)v36 + 40);
          TdrHistoryUpdate((struct _TDR_RECOVERY_CONTEXT *)((char *)v36 + 40), v7);
          IsLimitExhausted = TdrHistoryIsLimitExhausted(v44, v7, 1);
          *((_BYTE *)v7 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v46 = *(unsigned int *)(v4 + 4);
            v47 = *((_QWORD *)v65 + 328);
            *(_DWORD *)(v47 + 4 * (v46 >> 5)) |= 1 << v46;
            if ( (byte_14008A201 & 1) != 0 )
              McTemplateK0dp_EtwWriteTransfer(v46, v47, v46 >> 5, *(unsigned int *)(v4 + 4), *((_QWORD *)v7 + 351));
          }
        }
      }
    }
    TdrUpdateDbgReport(v7, 0);
    TdrCollectDbgInfoStage2(v7);
    v48 = (struct _VIDSCH_NODE *)((char *)a1 + 2156);
    if ( *((_BYTE *)a1 + 2156) )
    {
      v49 = *((_DWORD *)a1 + 543);
    }
    else
    {
      v49 = *((_DWORD *)v7 + 709);
      v48 = (struct _TDR_RECOVERY_CONTEXT *)((char *)v7 + 2821);
    }
    v64 = v49;
    if ( (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
    {
      LODWORD(v67) = *((unsigned __int8 *)v7 + 2820);
      v52 = *(_QWORD **)(v4 + 16);
      LODWORD(v70) = *((_DWORD *)a1 + 537);
      v68 = (unsigned __int16 *)*((_QWORD *)v7 + 351);
      LODWORD(v71) = *((_DWORD *)a1 + 127);
      v76 = v7;
      LODWORD(v65) = v51;
      v77 = (void *)v52[245];
      v78 = (unsigned __int16 *)v52[246];
      v79 = *(_QWORD *)((char *)v52 + 412);
      LOWORD(v66) = 4;
      v69 = v48;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v52,
        (__int64)&unk_14007DDEF,
        v50,
        v51,
        (__int64)&v66,
        (__int64)&v79,
        &v78,
        &v77,
        (__int64)&v65,
        (__int64)&v76,
        (__int64)&v71,
        (__int64)&v68,
        (void **)&v69,
        (__int64)&v70,
        (__int64)&v67);
    }
    if ( !v9 || v62 )
    {
      v53 = (struct _TDR_RECOVERY_CONTEXT *)(v4 + 3285);
      if ( !v48 )
        goto LABEL_85;
      v54 = (_BYTE *)(v4 + 3285);
      v55 = v48 - v53;
      do
      {
        if ( v35 == -2147483631 )
          break;
        v56 = v54[v55];
        if ( !v56 )
          break;
        *v54++ = v56;
        --v35;
      }
      while ( v35 );
      v57 = v54 - 1;
      if ( v35 )
        v57 = v54;
      *v57 = 0;
      if ( !v35 )
LABEL_85:
        *(_BYTE *)v53 = 0;
      *(_DWORD *)(v4 + 3300) = v64;
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    *(_QWORD *)(v4 + 3264) = 0LL;
  }
  if ( v9 )
  {
    v58 = *((_QWORD *)&v74 + 1);
    *((_QWORD *)a1 + 55) = 0LL;
    *((_DWORD *)a1 + 124) = 0;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v58, 0LL);
    v41 = v62 == 0;
    v59 = *((_QWORD *)&v74 + 1);
    *((_QWORD *)a1 + 8) = *((_QWORD *)&v74 + 1);
    *((_QWORD *)a1 + 9) = v59;
    if ( v41 )
    {
      *((_BYTE *)a1 + 2156) = 0;
      *((_DWORD *)a1 + 543) = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  RtlClearBitEx(v4 + 648, *((unsigned __int16 *)a1 + 2));
  v60 = v62;
  *((_DWORD *)a1 + 4) = 0;
  BYTE6(v6[7].QuadPart) = v60;
  result = v9;
  BYTE4(v6[7].QuadPart) = v9;
  v6[5] = *(LARGE_INTEGER *)((char *)&v74 + 8);
  return result;
}
