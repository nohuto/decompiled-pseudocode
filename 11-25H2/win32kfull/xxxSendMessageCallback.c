/*
 * XREFs of xxxSendMessageCallback @ 0x14012B834
 * Callers:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012B690 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x14001DB00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     SfnOUTCBOXSTRING @ 0x140061C90 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140061E20 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x140062990 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x140062CE0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1400C48E0 (SfnDWORD.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     xxxBroadcastMessage @ 0x1401293B0 (xxxBroadcastMessage.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     FreeDelayedHooks @ 0x14012D3F0 (FreeDelayedHooks.c)
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x14012D4C0 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 *     SfnCOPYDATA @ 0x1401306F0 (SfnCOPYDATA.c)
 *     SfnINSTRINGNULL @ 0x140170AC0 (SfnINSTRINGNULL.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140171840 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINDEVICECHANGE @ 0x140176990 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x1401791B0 (SfnOUTSTRING.c)
 *     SfnINOUTLPWINDOWPOS @ 0x14017A530 (SfnINOUTLPWINDOWPOS.c)
 *     SfnDWORDOPTINLPMSG @ 0x14017B6A0 (SfnDWORDOPTINLPMSG.c)
 *     SfnINOUTNCCALCSIZE @ 0x1401823E0 (SfnINOUTNCCALCSIZE.c)
 *     SfnINLPWINDOWPOS @ 0x140182A80 (SfnINLPWINDOWPOS.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxDesktopWndProc @ 0x1401847E0 (xxxDesktopWndProc.c)
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
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
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
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(struct tagWND *, _QWORD, __int64, __int64),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r15
  __int64 *v11; // rdi
  unsigned int v12; // r14d
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  const struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  const struct tagTHREADINFO *v26; // r13
  __int64 *v27; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r12
  unsigned __int64 v33; // rax
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 (__fastcall *v38)(int, int, int, int, __int64, __int64); // rbx
  __int64 v39; // rax
  unsigned int *v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // [rsp+50h] [rbp-E8h]
  int v44; // [rsp+50h] [rbp-E8h]
  __int64 v45; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v47; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v48; // [rsp+70h] [rbp-C8h]
  __int64 v49[2]; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v50; // [rsp+88h] [rbp-B0h]
  __int128 v51; // [rsp+98h] [rbp-A0h]
  int v52; // [rsp+A8h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-80h]
  _BYTE v55[56]; // [rsp+C0h] [rbp-78h] BYREF

  v46 = a4;
  v47 = a3;
  v9 = (unsigned int)a2;
  BugCheckParameter2 = (ULONG_PTR)a1;
  v11 = 0LL;
  v45 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v12 = 1;
  if ( a5 || (v43 = 1, a6 != 1) )
    v43 = 0;
  if ( (unsigned int)a2 < 0x400 )
  {
    a2 = 0x140000000uLL;
    if ( _bittest16(&MessageTable[v9], 9u) || (_DWORD)v9 == 537 && (a3 & 0x8000) != 0 )
    {
      UserSetLastError(1159);
      return 0LL;
    }
  }
  if ( a1 != (struct tagWND *)-1LL )
  {
    v14 = 0LL;
    BugCheckParameter3 = 0LL;
    v15 = 0LL;
    if ( a1 )
      v15 = *(_QWORD *)a1;
    v48 = v15;
    v16 = (unsigned __int16)v15;
    v52 = (unsigned __int16)v15;
    v18 = *(_QWORD *)(W32GetUserSessionState(a6, a2) + 19872);
    v48 = v16;
    if ( v16 >= *(_QWORD *)(v18 + 8)
      || (UserSessionState = W32GetUserSessionState(v18, v17),
          v22 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v21, v20) + 19896) * v16),
          v14 = v22 + *(_QWORD *)(UserSessionState + 19888),
          *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v22, v23) + 19832) + 40 * v48) != a1)
      || *(_BYTE *)(v14 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v14, 1uLL);
    }
    CurrentThreadNonPaged = (const struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(5 * v48, v24);
    if ( CurrentThreadNonPaged )
      v26 = *CurrentThreadNonPaged;
    else
      v26 = 0LL;
    if ( v43 || v26 != *((const struct tagTHREADINFO **)a1 + 2) )
    {
      v27 = 0LL;
      if ( a5 )
      {
        LODWORD(v49[0]) = a7 != 0 ? 257 : 1;
        v49[1] = (__int64)a5;
        *(_QWORD *)&v50 = a6;
        v27 = v49;
      }
      return xxxInterSendMsgEx(a1, (unsigned int)v9, v47, v46, 0, *((_QWORD *)a1 + 2), v27, a8, a9);
    }
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v55);
    v29 = v47;
    if ( ShouldCallWndProcHook(v26, 0x20u, v9, a1) )
    {
      *((_QWORD *)&v50 + 1) = *(_QWORD *)a1;
      LODWORD(v50) = v9;
      v49[1] = v47;
      v49[0] = v46;
      *(_QWORD *)&v51 = 0LL;
      xxxCallHook(0LL, 0LL, (__int64)v49, 4);
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v55);
    FreeDelayedHooks();
    v30 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v30 + 18) & 4) == 0 )
    {
      xxxSendMessageToClient(a1, v9, (HWND)v47, (struct tagDRAWITEMSTRUCT *)v46, 0LL, 0, &v45);
      v31 = v45;
      goto LABEL_27;
    }
    v33 = *(_QWORD *)(v30 + 120);
    if ( v33 < 4 )
    {
      v31 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v33])(
              a1,
              (unsigned int)v9,
              v47,
              v46);
LABEL_27:
      v45 = v31;
      if ( a5 )
      {
        if ( a7 )
        {
          v34 = (_DWORD *)*((_QWORD *)v26 + 61);
          v35 = *v34 & 8;
          v44 = *v34 & 8;
          *v34 |= 4u;
          **((_DWORD **)v26 + 61) |= 8u;
          if ( (_DWORD)v9 == 576 || (_DWORD)v9 == 281 )
          {
            v37 = (unsigned __int8)MessageTable[(unsigned __int16)v9];
            v38 = gapfnScSendMessage[v37];
            v39 = W32GetUserSessionState(v37, 0x140000000uLL);
            v32 = v45;
            ((void (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, void (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64), _QWORD, int, _QWORD))v38)(
              a1,
              (unsigned int)v9,
              a6,
              v45,
              a5,
              *(_QWORD *)(*(_QWORD *)(v39 + 19872) + 752LL),
              1,
              0LL);
            v29 = v47;
          }
          else
          {
            v36 = W32GetUserSessionState(v34, v35);
            v32 = v45;
            SfnDWORD(
              (__int64 *)a1,
              (unsigned int)v9,
              a6,
              v45,
              (__int64)a5,
              *(_QWORD *)(*(_QWORD *)(v36 + 19872) + 752LL));
          }
          **((_DWORD **)v26 + 61) &= ~4u;
          v40 = (unsigned int *)*((_QWORD *)v26 + 61);
          v41 = *v40;
          if ( v44 )
            v42 = v41 | 8;
          else
            v42 = v41 & 0xFFFFFFF7;
          *v40 = v42;
          goto LABEL_29;
        }
        a5(a1, (unsigned int)v9, a6, v31);
      }
      v32 = v45;
LABEL_29:
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v55);
      if ( ShouldCallWndProcHook(v26, 0x2000u, v9, a1) )
      {
        v51 = *(unsigned __int64 *)a1;
        DWORD2(v50) = v9;
        *(_QWORD *)&v50 = v29;
        v49[1] = v46;
        v49[0] = v32;
        xxxCallHook(0LL, 0LL, (__int64)v49, 12);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v55);
      FreeDelayedHooks();
      return 1LL;
    }
    return 0LL;
  }
  if ( a5 )
  {
    v12 = 3;
    v49[0] = (__int64)a5;
    v49[1] = a6;
    LODWORD(v50) = a7;
    v11 = v49;
  }
  return xxxBroadcastMessage(0LL, v9, a3, a4, v12, (union tagBROADCASTMSG *)v11, a8);
}
