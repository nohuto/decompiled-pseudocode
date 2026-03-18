/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     SfnOUTCBOXSTRING @ 0x140061C90 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140061E20 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x140062990 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x140062CE0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     SfnDWORD @ 0x1400C48E0 (SfnDWORD.c)
 *     SfnCOPYDATA @ 0x1401306F0 (SfnCOPYDATA.c)
 *     PrepareSentPointerMessageForClient @ 0x14013A530 (PrepareSentPointerMessageForClient.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 *     SfnINSTRINGNULL @ 0x140170AC0 (SfnINSTRINGNULL.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140171840 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINDEVICECHANGE @ 0x140176990 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x1401791B0 (SfnOUTSTRING.c)
 *     SfnINOUTLPWINDOWPOS @ 0x14017A530 (SfnINOUTLPWINDOWPOS.c)
 *     SfnDWORDOPTINLPMSG @ 0x14017B6A0 (SfnDWORDOPTINLPMSG.c)
 *     SfnINOUTNCCALCSIZE @ 0x1401823E0 (SfnINOUTNCCALCSIZE.c)
 *     SfnINLPWINDOWPOS @ 0x140182A80 (SfnINLPWINDOWPOS.c)
 *     SfnINOUTSTYLECHANGE @ 0x140186C70 (SfnINOUTSTYLECHANGE.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x14018A360 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnNCDESTROY @ 0x140194180 (SfnNCDESTROY.c)
 *     SfnEMPTY @ 0x1401976E0 (SfnEMPTY.c)
 *     SfnPOWERBROADCAST @ 0x1401A10A0 (SfnPOWERBROADCAST.c)
 *     SfnINOUTLPPOINT5 @ 0x1401AA530 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401AE340 (SfnINOUTLPSCROLLINFO.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401B84C0 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1401BA930 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnINOUTLPRECT @ 0x1401BD430 (SfnINOUTLPRECT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1401BF3A0 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1401D12C0 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1401D2280 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401D6690 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401D7CF0 (SfnINLPUAHINITMENU.c)
 *     SfnOUTLPRECT @ 0x1401DAE30 (SfnOUTLPRECT.c)
 *     SfnOUTDWORDINDWORD @ 0x1401DE030 (SfnOUTDWORDINDWORD.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1401E19C0 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1401E1C20 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnSHELLSYNCDISPLAYCHANGED @ 0x1401E31A0 (SfnSHELLSYNCDISPLAYCHANGED.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401E5620 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnIMECONTROL @ 0x1401EC740 (SfnIMECONTROL.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1401ED270 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1401EE6D0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnINWPARAMCHAR @ 0x1401EFCB0 (SfnINWPARAMCHAR.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401F3950 (SfnINLPUAHDRAWMENU.c)
 *     SfnINDESTROYCLIPBRD @ 0x1401F8190 (SfnINDESTROYCLIPBRD.c)
 *     SfnINCNTOUTSTRING @ 0x1401FA710 (SfnINCNTOUTSTRING.c)
 *     SfnTOUCH @ 0x1401FC5B0 (SfnTOUCH.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1401FFE50 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINOUTLPSIZE @ 0x140206650 (SfnINOUTLPSIZE.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1402099E0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnCOPYGLOBALDATA @ 0x140209C80 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x14020AC30 (SfnTOUCHHITTESTING.c)
 *     SfnGESTURE @ 0x140210230 (SfnGESTURE.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140210940 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 *     SfnGETWINDOWDATA @ 0x1402BA3D0 (SfnGETWINDOWDATA.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402BA540 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402BA9C0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402BAD10 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINOUTDRAG @ 0x1402BB250 (SfnINOUTDRAG.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1402BB540 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1402BB830 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1402BBAF0 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BBDF0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1402BC140 (SfnINSIZECLIPBRD.c)
 *     SfnINTERCEPTEDWINDOWACTION @ 0x1402BC3D0 (SfnINTERCEPTEDWINDOWACTION.c)
 *     SfnPOPTINLPUINT @ 0x1402BC660 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BCA00 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1402BCE50 (SfnSENTDDEMSG.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        HWND a3,
        struct tagDRAWITEMSTRUCT *a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  int v7; // edi
  HWND v8; // r13
  unsigned int v9; // esi
  int v11; // eax
  BOOL v12; // eax
  int v13; // eax
  char *v14; // r15
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64); // rdi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 UserSessionState; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned __int16 v31; // di
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v35; // r8d
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(int, int, int, int, __int64, __int64); // r15
  unsigned __int16 v38; // di
  __int64 v39; // r8
  signed __int32 v40[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+30h] [rbp-88h]
  struct tagSMS *v42; // [rsp+38h] [rbp-80h]
  unsigned int v43; // [rsp+50h] [rbp-68h]
  volatile void *Address; // [rsp+58h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp+10h] BYREF
  HWND v47; // [rsp+D0h] [rbp+18h] BYREF
  struct tagDRAWITEMSTRUCT *v48; // [rsp+D8h] [rbp+20h] BYREF

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v7 = (int)a4;
  v8 = a3;
  v9 = a2;
  if ( a2 - 577 <= 3 || (v11 = IsPointerInputClientMessage(a2)) != 0 )
    v11 = 1;
  v12 = v11 && a2 != 595;
  if ( v12 || (a2 != 528 || (_WORD)a3 != 582 ? (v13 = 0) : (v13 = 1), v13) )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v46, &v47, &v48, 0LL) )
      {
        *a7 = 0LL;
        return;
      }
      v8 = v47;
      v9 = v46;
      v7 = (int)v48;
    }
  }
  v14 = (char *)a1 + 40;
  BugCheckParameter3[0] = (ULONG_PTR)a1 + 40;
  v15 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 18LL) >> 3) & 1;
  v43 = v15;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    v33 = *((_QWORD *)PtiCurrent(v17, v16) + 65);
    Address = *(volatile void **)(v33 + 248);
    _InterlockedOr(v40, 0);
    if ( Address )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
      v35 = 1;
      if ( !CurrentProcessWow64Process )
        v35 = 4;
      ProbeForRead(Address, 0x20uLL, v35);
      if ( *(_QWORD *)Address )
      {
        *(_QWORD *)(v33 + 224) |= 0x100uLL;
        v8 = v47;
        v9 = v46;
        v7 = (int)v48;
LABEL_11:
        if ( (v9 & 0x1FFFF) >= 0x400 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872) + 752LL);
          v23 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
          v42 = a5;
          v41 = v15;
          v21 = SfnDWORD((_DWORD)a1, v9, (_DWORD)v8, v7, v23, v22);
        }
        else
        {
          v18 = (unsigned __int8)MessageTable[(unsigned __int16)v9];
          v19 = gapfnScSendMessage[v18];
          v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v16) + 19872) + 752LL);
          v21 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, unsigned int, struct tagSMS *))v19)(
                  a1,
                  v9,
                  v8,
                  v48,
                  *(_QWORD *)(*(_QWORD *)v14 + 120LL),
                  v20,
                  v15,
                  a5);
        }
LABEL_13:
        *a7 = v21;
        return;
      }
    }
    v8 = v47;
    v9 = v46;
    v7 = (int)v48;
  }
  if ( *(int *)(W32GetUserSessionState(v17, v16) + 64216) >= 0 )
    goto LABEL_11;
  if ( v9 == 90 )
    goto LABEL_11;
  v16 = *(_QWORD *)v14;
  v17 = *(_WORD *)(*(_QWORD *)v14 + 42LL) & 0x2FFF;
  v46 = v17;
  if ( (unsigned __int16)(v17 - 673) > 9u && (_WORD)v17 != 666 )
    goto LABEL_11;
  v24 = *(_QWORD *)(v16 + 120);
  v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
  if ( v24 != *(_QWORD *)(v17 + 8LL * (unsigned __int16)v46 - 4744) )
  {
    v30 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
    if ( v30 != *(_QWORD *)(v17 + 8LL * (unsigned __int16)v46 - 4936) )
    {
      v7 = (int)v48;
      goto LABEL_11;
    }
  }
  UserSessionState = W32GetUserSessionState(v17, v16);
  v26 = 2 * ((unsigned __int16)v46 + 579LL);
  v27 = *(_QWORD *)(UserSessionState + 16 * ((unsigned __int16)v46 + 579LL) + 8);
  if ( !v27
    || v9 <= *(_DWORD *)(UserSessionState + 16 * ((unsigned __int16)v46 + 579LL))
    && (v26 = v9 & 7, ((unsigned __int8)(1 << v26) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v27)) != 0)
    || (*(_BYTE *)(*(_QWORD *)v14 + 18LL) & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v36 = (unsigned __int8)MessageTable[(unsigned __int16)v9];
      v37 = gapfnScSendMessage[v36];
      v38 = v46;
      if ( (_WORD)v46 == 666 )
        v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v36, v27) + 19872) + 7592LL);
      else
        v39 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v36, v27) + 19872) + 8LL * v38 - 4608);
      v21 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, unsigned int, struct tagSMS *))v37)(
              a1,
              v9,
              v8,
              v48,
              v15,
              v39,
              v15,
              a5);
    }
    else
    {
      v31 = v46;
      if ( (_WORD)v46 == 666 )
        v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v27) + 19872) + 7592LL);
      else
        v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v27) + 19872) + 8LL * v31 - 4608);
      v42 = a5;
      v41 = v15;
      v21 = SfnDWORD((_DWORD)a1, v9, (_DWORD)v8, (_DWORD)v48, v15, v32);
    }
    goto LABEL_13;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  if ( a6 )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)a1);
  v28 = xxxDefWindowProc((struct tagTHREADINFO **)a1, v9, v8, v48);
  *a7 = v28;
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v29);
}
