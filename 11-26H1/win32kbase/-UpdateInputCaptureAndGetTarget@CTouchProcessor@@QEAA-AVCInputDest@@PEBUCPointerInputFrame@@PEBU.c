/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIG@Z @ 0x14010C4A8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x140006A44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U4@.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x140087B68 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x14008CA94 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x140136458 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1401661F4 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z @ 0x1401992A8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1401A0684 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401A09E8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1401BC904 (ApiSetEditionIsPointerInputRedirected.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x140216B88 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct CInputDest *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        CSpatialProcessor *a1,
        struct CInputDest *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _WORD *a7,
        _DWORD *a8)
{
  struct CInputDest *v8; // r13
  char v10; // bl
  int v11; // r12d
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // eax
  CInputDest *v15; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v17; // r8
  __int64 WindowDetails; // rax
  __int128 v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  CTouchProcessor *v23; // rcx
  __int64 v24; // rdx
  struct tagPROCESSINFO *InputProcessContext; // rsi
  int v26; // esi
  int v27; // r8d
  int v28; // eax
  __int64 v29; // r8
  int v30; // eax
  __int16 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned int v34; // eax
  bool v35; // si
  unsigned int v36; // r15d
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r13
  unsigned int NextInputStreamToken; // eax
  bool v41; // zf
  unsigned int v42; // eax
  int v43; // esi
  _DWORD *v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rsi
  _QWORD *v48; // rax
  struct CInputDest *v49; // r15
  int v50; // r8d
  unsigned int v51; // r8d
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // r13d
  __int64 v55; // rcx
  __int64 v56; // r15
  bool v57; // cf
  __int64 v58; // r15
  unsigned int v59; // edx
  int v60; // esi
  CSpatialProcessor *v61; // r8
  int v62; // edx
  int v63; // ecx
  _WORD *v64; // r15
  int v65; // edx
  int v66; // ecx
  __int16 v67; // r14
  __int16 v68; // cx
  void *v69; // r8
  unsigned int v71[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v72; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+54h] [rbp-ACh]
  int IsPointerInputRedirected; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+5Ch] [rbp-A4h] BYREF
  int v76; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h]
  CSpatialProcessor *v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h]
  _DWORD *v82; // [rsp+90h] [rbp-70h]
  struct CInputDest *v83; // [rsp+98h] [rbp-68h]
  __int128 v84; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v85; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+C0h] [rbp-40h]
  const WCHAR *v87; // [rsp+C8h] [rbp-38h] BYREF
  void *v88; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-28h] BYREF
  _WORD *v90; // [rsp+E0h] [rbp-20h]
  _BYTE v91[56]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v92[28]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v93[16]; // [rsp+190h] [rbp+90h] BYREF

  v8 = a2;
  v83 = a2;
  v79 = a3;
  v80 = a1;
  v77 = a4;
  v90 = a7;
  v82 = a8;
  memset(a2, 0, 0x70uLL);
  *((_BYTE *)v8 + 112) = 0;
  v78 = a6 & 0x10000;
  v10 = 1;
  v81 = a6 & 0x40000;
  if ( (a6 & 0x40000) != 0 || (v75 = 1, (a6 & 4) != 0) )
    v75 = 0;
  v11 = 0;
  IsPointerInputRedirected = 0;
  v73 = 0;
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)v80 + 4) )
  {
    v72 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1934LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      66,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 896) )
  {
    CInputDest::~CInputDest((CInputDest *)(a5 + 72));
    v14 = *(_DWORD *)(a5 + 300) & 0xFFFFFF8F;
    *(_DWORD *)(a5 + 300) = v14;
    if ( (v14 & 0x8000) == 0 )
    {
      *(_DWORD *)(a5 + 300) = v14 | 0x8000;
      CInputDest::GetBaseWindow((CInputDest *)(a5 + 72));
      UserWindow = CInputDest::GetUserWindow(v15);
      WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v91, (__int64)UserWindow, v17);
      v19 = *(_OWORD *)(WindowDetails + 16);
      v84 = *(_OWORD *)WindowDetails;
      v86 = *(_QWORD *)(WindowDetails + 32);
      v85 = v19;
      if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
      {
        v76 = DWORD2(v85);
        v72 = DWORD2(v85);
        v87 = (const WCHAR *)v85;
        v88 = (void *)v84;
        v89 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v20,
          (__int64)&unk_14028A47D,
          v21,
          v22,
          (__int64)&v89,
          &v88,
          &v87,
          (__int64)&v72,
          (__int64)&v76);
      }
    }
  }
  CInputDest::operator=((__int64)v8, a5 + 72);
  if ( *(_DWORD *)v8 )
  {
    v30 = *(_DWORD *)(a5 + 300);
    v76 = 1;
    v11 = -__CFSHR__(v30, 5);
    IsPointerInputRedirected = -__CFSHR__(v30, 6);
    v73 = -__CFSHR__(v30, 7);
  }
  else
  {
    v24 = *(_QWORD *)(a4 + 24);
    v76 = 0;
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v23, v24);
    if ( !InputProcessContext )
      goto LABEL_31;
    memset(v92, 0, sizeof(v92));
    IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                 InputProcessContext,
                                 *(unsigned int *)(a5 + 60),
                                 v92);
    v26 = IsPointerInputRedirected;
    CInputDest::CInputDest((CInputDest *)v93, (const struct tagINPUTDEST *)v92);
    CInputDest::operator=(v8, v93, v27);
    CInputDest::~CInputDest((CInputDest *)v93);
    v28 = *(_DWORD *)v8;
    v11 = v26;
    if ( !v26 )
    {
      if ( !v28 )
        goto LABEL_31;
      v29 = 2005LL;
      goto LABEL_27;
    }
    if ( !v28 )
    {
      v29 = 2006LL;
LABEL_27:
      v72 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v29);
    }
  }
LABEL_31:
  v31 = 32;
  if ( *(_DWORD *)(a5 + 232) )
  {
    v58 = v77;
  }
  else if ( *(_DWORD *)v8 )
  {
    v58 = v77;
    v59 = *(_DWORD *)(v77 + 8);
    if ( v59 == 3 || v59 == 2 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v80,
        v59,
        *(struct tagPOINT *)(v77 + 40),
        *(_QWORD *)(v77 + 88),
        *(unsigned __int16 *)(a5 + 32));
  }
  else
  {
    if ( !v75 && !v78 )
      goto LABEL_87;
    if ( (*(_DWORD *)(v79 + 228) & 0x80u) != 0
      && (v32 = *(_QWORD *)(*(_QWORD *)(v79 + 256) + 1064LL) + 400LL,
          (v33 = v32 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 256) + 1064LL) + 524LL) & 1) != 0)) != 0) )
    {
      CInputDest::operator=(
        (__int64)v8,
        v32 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 256) + 1064LL) + 524LL) & 1) != 0));
      *v82 = *(_DWORD *)(v33 + 120);
      v34 = *(_DWORD *)(v33 + 124);
      v35 = (v34 & 2) != 0;
      v11 = (v34 >> 2) & 1;
      v73 = (v34 & 8) != 0;
    }
    else
    {
      v36 = (a6 & 0x4002000) == 0 ? 0x200 : 0;
      if ( *(_DWORD *)(a5 + 60) == 3 && (*(_DWORD *)(v77 + 20) & 4) != 0 )
      {
        v37 = *(_DWORD *)(v77 + 104);
        if ( (v37 & 1) != 0 )
          v36 |= 0x40u;
        if ( (v37 & 4) != 0 )
          v36 |= 0x80u;
      }
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v91,
        (CSpatialProcessor *)((char *)v80 + 32),
        0LL);
      v38 = v79;
      v39 = *(_QWORD *)(v79 + 256);
      if ( (v36 & 0x200) == 0 || *(_DWORD *)(v39 + 24) == 7 )
      {
        if ( *(_DWORD *)(v39 + 972) )
        {
          DWORD1(v85) = 0;
          LODWORD(v85) = *(_DWORD *)(v39 + 968);
          *(_QWORD *)&v84 = *(_QWORD *)(v77 + 24);
          DWORD2(v84) = *(_DWORD *)(v77 + 8);
          HIDWORD(v84) = *(_DWORD *)(v77 + 180);
          SendMessageTo(19, (int)&v84, 24);
        }
        NextInputStreamToken = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
        v38 = v79;
        *(_DWORD *)(v39 + 968) = NextInputStreamToken;
        *(_DWORD *)(v39 + 972) = 1;
      }
      v41 = *(_DWORD *)(v39 + 24) == 7;
      v72 = *(_DWORD *)(v39 + 968);
      if ( v41 )
      {
        v42 = *(_DWORD *)(v38 + 48);
        v43 = 0;
        if ( v42 )
        {
          v44 = (_DWORD *)(*(_QWORD *)(v38 + 240) + 180LL);
          v45 = v42;
          do
          {
            v41 = (*v44 & 0x10000) == 0;
            v46 = v43 + 1;
            v44 += 120;
            if ( v41 )
              v46 = v43;
            v43 = v46;
            --v45;
          }
          while ( v45 );
        }
      }
      else
      {
        v43 = 1;
      }
      v75 = 0;
      memset(v92, 0, sizeof(v92));
      v71[0] = v43;
      v47 = v77;
      v48 = (_QWORD *)CTouchProcessor::TouchHitTest(v93, v77, v36, v72, *(_QWORD *)v71, &v75, v92);
      v49 = v83;
      CInputDest::operator=(v83, v48, v50);
      CInputDest::~CInputDest((CInputDest *)v93);
      v51 = v92[20];
      *v82 = v92[20];
      InputTraceLogging::Pointer::SpeedHitTest((const union POINTERINFOUNION *)(v47 + 8), v49, v51, v75 != 0);
      v52 = *((_DWORD *)v49 + 1);
      v35 = v52 == 3 || v52 == 2;
      if ( v92[26]
        && ((v53 = *(_DWORD *)(v39 + 368), (v53 & 8) == 0)
         || (v53 & 0x10) != 0
         || (*(_DWORD *)(*(_QWORD *)(v39 + 16) + 168LL) & 0x4000) != 0) )
      {
        *(_DWORD *)(a5 + 232) = v92[26];
        CInputDest::~CInputDest(v49);
        v35 = 0;
        *v82 = 0;
      }
      else if ( v78 )
      {
        *(_QWORD *)&v84 = *((_QWORD *)v49 + 12);
        HIDWORD(v85) = 0;
        *((_QWORD *)&v84 + 1) = *(_QWORD *)(v77 + 24);
        LODWORD(v85) = *(_DWORD *)(v77 + 8);
        *(_QWORD *)((char *)&v85 + 4) = *(_QWORD *)(v77 + 40);
        SendMessageTo(5, (int)&v84, 32);
      }
      v54 = v92[20];
      if ( v92[20] )
      {
        if ( !v35 )
        {
          v72 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2138LL);
          v54 = v92[20];
        }
        v73 = 1;
      }
      v55 = v79;
      if ( (*(_DWORD *)(v79 + 228) & 0x80u) != 0 )
      {
        LODWORD(v79) = v35 ? 6 : 0;
        v56 = *(_QWORD *)(*(_QWORD *)(v55 + 256) + 1064LL);
        if ( (*(_DWORD *)(v56 + 524) & 1) != 0 )
        {
          v72 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
        }
        CInputDest::operator=(v56 + 400, (__int64)v83);
        v57 = v73 != 0;
        *(_DWORD *)(v56 + 520) = v54;
        *(_DWORD *)(v56 + 524) = v79 | (v57 ? 9 : 1);
      }
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v91);
      v8 = v83;
    }
    v58 = v77;
    if ( v35 )
    {
      *(_DWORD *)(a5 + 300) |= 0x80u;
      v11 = 1;
    }
  }
  if ( v78 && *(_DWORD *)v8 )
  {
    CInputDest::operator=(a5 + 72, (__int64)v8);
    v60 = v73;
    v61 = v80;
    *(_DWORD *)(a5 + 300) = (16 * v11) & 0xFFFFFF9F ^ ((_BYTE)v73 << 6) & 0x40 ^ (32 * IsPointerInputRedirected) & 0x20 ^ (*(_DWORD *)(a5 + 300) ^ (16 * v11)) & 0xFFFFFF8F;
    v62 = *(unsigned __int16 *)(a5 + 32);
    v63 = *(_DWORD *)(v58 + 8);
    *((_QWORD *)v61 + 2) = *(_QWORD *)(v58 + 88);
    *((_DWORD *)v61 + 6) = v63;
    *((_DWORD *)v61 + 7) = v62;
    goto LABEL_91;
  }
LABEL_87:
  if ( v81 && *(_DWORD *)(a5 + 72) )
  {
    CInputDest::~CInputDest((CInputDest *)(a5 + 72));
    *(_DWORD *)(a5 + 300) &= 0xFFFF7F8F;
  }
  v60 = v73;
LABEL_91:
  v64 = v90;
  *v90 |= 16 * (_WORD)v76;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && !*(_QWORD *)(W32GetUserSessionState(v66, v65, 0) + 18872)
    || !v11 && (*(_DWORD *)(a5 + 300) & 0x80u) == 0 )
  {
    v31 = 0;
  }
  v67 = *v64 | v31;
  v57 = IsPointerInputRedirected != 0;
  IsPointerInputRedirected = -IsPointerInputRedirected;
  v68 = v67 | (v57 ? 0x40 : 0) | (v60 != 0 ? 0x100 : 0);
  *v64 = v68;
  *v64 = v68 | *(_DWORD *)(a5 + 300) & 0x80;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v65) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v65) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v65 || v10 )
  {
    v69 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v69) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v65,
      (_DWORD)v69,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      67,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  return v8;
}
