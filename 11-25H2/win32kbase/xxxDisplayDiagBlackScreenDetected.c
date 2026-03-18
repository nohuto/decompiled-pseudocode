/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1401AED90
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x140002DEC (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AEB58 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1401CE008 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1401CE0A0 (DrvDxgkPollDisplayChildren.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(unsigned int a1, char a2, char a3, UUID *a4, int *a5)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // r15
  __int64 v12; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  UUID *p_Uuid; // rax
  UUID v29; // xmm6
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // r12d
  __int64 v38; // rdx
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ebx
  UUID *v43; // rax
  UUID v44; // xmm6
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  PEPROCESS v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  char *v51; // rbx
  int v52; // r15d
  __int16 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // r9
  __int16 v56; // [rsp+78h] [rbp-71h] BYREF
  __int16 v57; // [rsp+7Ah] [rbp-6Fh] BYREF
  unsigned int v58; // [rsp+7Ch] [rbp-6Dh] BYREF
  int v59; // [rsp+80h] [rbp-69h] BYREF
  int v60; // [rsp+84h] [rbp-65h] BYREF
  int v61; // [rsp+88h] [rbp-61h] BYREF
  int v62; // [rsp+8Ch] [rbp-5Dh] BYREF
  __int128 v63; // [rsp+90h] [rbp-59h] BYREF
  PVOID Buffer[2]; // [rsp+A0h] [rbp-49h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v65[2]; // [rsp+B0h] [rbp-39h] BYREF
  UUID Uuid; // [rsp+C0h] [rbp-29h] BYREF
  UUID v67; // [rsp+D8h] [rbp-11h] BYREF

  LOBYTE(v57) = a3;
  v58 = a1;
  LOBYTE(v65[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v65, 0LL, 0xFu, a1);
  v8 = v65[1];
  UserSessionState = W32GetUserSessionState(v10, v9);
  UserGdiSessionState = W32GetUserGdiSessionState(v12);
  v16 = 1;
  while ( *(_DWORD *)(UserGdiSessionState + 36) )
  {
    LOBYTE(v14) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v56, v14);
    v19 = W32GetUserSessionState(v18, v17);
    KeWaitForSingleObject(*(PVOID *)(v19 + 68400), WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v56, v20);
    UserGdiSessionState = W32GetUserGdiSessionState(v21);
  }
  v63 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  LOWORD(v63) = *(_WORD *)(W32GetUserSessionState(v15, v14) + 68752);
  if ( !(unsigned int)UserIsWddmConnectedSession((unsigned __int16)v63, v22) )
    goto LABEL_31;
  if ( a2 )
  {
    LOBYTE(v23) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v56, v23);
    Uuid = 0LL;
    if ( !a4 && ExUuidCreate(&Uuid) < 0 )
      Uuid = 0LL;
    if ( a5 )
      v27 = *a5;
    else
      v27 = 0;
    p_Uuid = &Uuid;
    if ( a4 )
      p_Uuid = a4;
    v29 = *p_Uuid;
    if ( *(_QWORD *)(W32GetUserSessionState(v26, v25) + 18904) )
    {
      v32 = W32GetUserSessionState(v31, v30);
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(v32 + 18904));
      ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
    }
    else
    {
      ProcessImageFileName = 0;
    }
    v67 = v29;
    DrvDxgkCheckDisplayState(v58, 1, ProcessImageFileName, (_DWORD)v8, (__int64)&v67, v27);
    *(_OWORD *)(UserSessionState + 56984) = *(_OWORD *)v8;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v56, v35);
  }
  if ( !UserIsConsoleConnection(v24, v23) || !a3 )
  {
LABEL_31:
    v37 = DWORD2(v63);
    v16 = DWORD1(v63);
    goto LABEL_32;
  }
  DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v63);
  LOBYTE(v36) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v56, v36);
  *(_QWORD *)&Uuid.Data1 = 0x1A00000000LL;
  v37 = DrvDxgkPollDisplayChildren(&Uuid);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v56, v38);
  *(_OWORD *)v8 = *(_OWORD *)(UserSessionState + 56984);
  if ( v37 < 0 )
  {
LABEL_32:
    v39 = HIDWORD(v63);
    goto LABEL_33;
  }
  LOBYTE(v56) = 0;
  v39 = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, (bool *)&v56, 0LL, v8, 0LL);
  if ( v39 >= 0 )
  {
    LOBYTE(v23) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v56, v23);
    v67 = 0LL;
    if ( a5 )
      v42 = *a5;
    else
      v42 = 0;
    v43 = &v67;
    if ( a4 )
      v43 = a4;
    v44 = *v43;
    if ( *(_QWORD *)(W32GetUserSessionState(v41, v40) + 18904) )
    {
      v47 = W32GetUserSessionState(v46, v45);
      v48 = PsGetThreadProcess(**(PETHREAD **)(v47 + 18904));
      v49 = PsGetProcessImageFileName(v48);
    }
    else
    {
      v49 = 0;
    }
    v67 = v44;
    DrvDxgkCheckDisplayState(v58, 0, v49, (_DWORD)v8, (__int64)&v67, v42);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v56, v50);
  }
LABEL_33:
  v51 = (char *)Buffer[1];
  v52 = HIDWORD(Buffer[0]);
  if ( Buffer[1] )
    v53 = 216 * WORD2(Buffer[0]);
  else
    v53 = 0;
  if ( UserIsConsoleConnection(v24, v23)
    && (_BYTE)v57
    && (unsigned int)dword_14029EDE8 > 5
    && tlgKeywordOn((__int64)&dword_14029EDE8, 0x400000000008LL) )
  {
    v62 = (int)Buffer[0];
    v57 = v63;
    v56 = 4;
    *(_QWORD *)&v67.Data1 = v51;
    *(_WORD *)v67.Data4 = v53;
    v59 = v52;
    v60 = v39;
    v61 = v37;
    Uuid.Data1 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v54,
      (__int64)&unk_140278184,
      (__int64)v8,
      v55,
      (__int64)&v56,
      (__int64)&Uuid,
      (__int64)&v57,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64 *)&v67,
      (__int64)&v58);
  }
  if ( v51 )
    GreDeleteFastMutex(v51);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v65);
}
