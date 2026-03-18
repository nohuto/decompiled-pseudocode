/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1401D2960
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x140003CC4 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401D0BF8 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     DrvDxgkCheckDisplayState @ 0x1401F784C (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1401F7960 (DrvDxgkPollDisplayChildren.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(unsigned int a1, char a2, char a3, UUID *a4, int *a5)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r13
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rsi
  __int64 v13; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r14d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ebx
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // edi
  UUID *p_Uuid; // rax
  UUID v40; // xmm6
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rax
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  unsigned int v47; // edi
  int v48; // edx
  int v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // r12d
  int v54; // edx
  int v55; // r8d
  int v56; // esi
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  UUID *v60; // rax
  UUID v61; // xmm6
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  __int64 v65; // rax
  PEPROCESS v66; // rax
  int v67; // eax
  int v68; // edx
  int v69; // r8d
  char *v70; // rbx
  __int16 v71; // di
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  int v76; // [rsp+30h] [rbp-B9h]
  int v77; // [rsp+30h] [rbp-B9h]
  __int16 v78; // [rsp+78h] [rbp-71h] BYREF
  __int16 v79; // [rsp+7Ah] [rbp-6Fh] BYREF
  unsigned int v80[3]; // [rsp+7Ch] [rbp-6Dh] BYREF
  UUID v81; // [rsp+88h] [rbp-61h] BYREF
  int v82; // [rsp+98h] [rbp-51h] BYREF
  int v83; // [rsp+9Ch] [rbp-4Dh] BYREF
  int v84; // [rsp+A0h] [rbp-49h] BYREF
  int v85; // [rsp+A4h] [rbp-45h] BYREF
  __int128 v86; // [rsp+A8h] [rbp-41h] BYREF
  PVOID Buffer[2]; // [rsp+B8h] [rbp-31h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v88[2]; // [rsp+C8h] [rbp-21h] BYREF
  UUID Uuid; // [rsp+D8h] [rbp-11h] BYREF

  LOBYTE(v79) = a3;
  v80[0] = a1;
  LOBYTE(v88[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v88, 0LL, 0xFu, a1);
  v8 = v88[1];
  UserSessionState = W32GetUserSessionState(v10, v9, v11);
  UserGdiSessionState = W32GetUserGdiSessionState(v13);
  v19 = 1;
  while ( *(_DWORD *)(UserGdiSessionState + 36) )
  {
    LOBYTE(v15) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v78, v15, v17, v18);
    v23 = W32GetUserSessionState(v21, v20, v22);
    KeWaitForSingleObject(*(PVOID *)(v23 + 68392), WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v78, v24, v25);
    UserGdiSessionState = W32GetUserGdiSessionState(v26);
  }
  v86 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  LOWORD(v86) = *(_WORD *)(W32GetUserSessionState(v16, v15, v17) + 68744);
  if ( !(unsigned int)UserIsWddmConnectedSession((unsigned __int16)v86, v27, v28, v29) )
    goto LABEL_31;
  v34 = (int)a5;
  if ( a2 )
  {
    LOBYTE(v30) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v78, v30, v32, v33);
    Uuid = 0LL;
    if ( !a4 && ExUuidCreate(&Uuid) < 0 )
      Uuid = 0LL;
    if ( a5 )
      v38 = *a5;
    else
      v38 = 0;
    p_Uuid = &Uuid;
    if ( a4 )
      p_Uuid = a4;
    v40 = *p_Uuid;
    if ( *(_QWORD *)(W32GetUserSessionState(v36, v35, v37) + 18944) )
    {
      v44 = W32GetUserSessionState(v42, v41, v43);
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(v44 + 18944));
      ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
    }
    else
    {
      ProcessImageFileName = 0;
    }
    v77 = v38;
    v47 = v80[0];
    v81 = v40;
    DrvDxgkCheckDisplayState(v80[0], 1, ProcessImageFileName, (_DWORD)v8, (__int64)&v81, v77);
    *(_OWORD *)(UserSessionState + 56976) = *(_OWORD *)v8;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v78, v48, v49);
  }
  else
  {
    v47 = v80[0];
  }
  if ( !UserIsConsoleConnection(v31, v30, v32, v33) || !a3 )
  {
LABEL_31:
    v53 = DWORD2(v86);
    v19 = DWORD1(v86);
    goto LABEL_32;
  }
  DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v86);
  LOBYTE(v50) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v78, v50, v51, v52);
  *(_QWORD *)&Uuid.Data1 = 0x1A00000000LL;
  v53 = DrvDxgkPollDisplayChildren(&Uuid);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v78, v54, v55);
  *(_OWORD *)v8 = *(_OWORD *)(UserSessionState + 56976);
  if ( v53 < 0 )
  {
LABEL_32:
    v56 = HIDWORD(v86);
    goto LABEL_33;
  }
  LOBYTE(v76) = 0;
  LOBYTE(v78) = 0;
  v56 = xxxUserSetDisplayConfig(0LL, 0LL, 391LL, 128LL, 0LL, v76, 0LL, &v78, 0LL, v8, 0LL);
  if ( v56 >= 0 )
  {
    LOBYTE(v30) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v78, v30, v32, v33);
    v81 = 0LL;
    if ( a5 )
      v34 = *a5;
    v60 = &v81;
    if ( a4 )
      v60 = a4;
    v61 = *v60;
    if ( *(_QWORD *)(W32GetUserSessionState(v58, v57, v59) + 18944) )
    {
      v65 = W32GetUserSessionState(v63, v62, v64);
      v66 = PsGetThreadProcess(**(PETHREAD **)(v65 + 18944));
      v67 = PsGetProcessImageFileName(v66);
    }
    else
    {
      v67 = 0;
    }
    v81 = v61;
    DrvDxgkCheckDisplayState(v47, 0, v67, (_DWORD)v8, (__int64)&v81, v34);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v78, v68, v69);
  }
LABEL_33:
  v70 = (char *)Buffer[1];
  if ( Buffer[1] )
    v71 = 216 * WORD2(Buffer[0]);
  else
    v71 = 0;
  if ( UserIsConsoleConnection(v31, v30, v32, v33)
    && (_BYTE)v79
    && (unsigned int)dword_1402A9E08 > 5
    && tlgKeywordOn((__int64)&dword_1402A9E08, 0x400000000008LL) )
  {
    v82 = HIDWORD(Buffer[0]);
    v85 = (int)Buffer[0];
    v79 = v86;
    v78 = 4;
    *(_QWORD *)&v81.Data1 = v70;
    *(_WORD *)v81.Data4 = v71;
    v83 = v56;
    v84 = v53;
    Uuid.Data1 = v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v75,
      (__int64)&unk_140282347,
      (__int64)v8,
      v74,
      (__int64)&v78,
      (__int64)&Uuid,
      (__int64)&v79,
      (__int64)&v85,
      (__int64)&v84,
      (__int64)&v83,
      (__int64)&v82,
      (__int64 *)&v81,
      (__int64)v80);
  }
  if ( v70 )
    GreDeleteFastMutex(v70, v72, v73, v74);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v88);
}
