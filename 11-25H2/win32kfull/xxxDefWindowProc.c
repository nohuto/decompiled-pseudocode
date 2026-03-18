/*
 * XREFs of xxxDefWindowProc @ 0x1400C36C0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetControlColor @ 0x140055B60 (xxxGetControlColor.c)
 *     ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1400C2940 (-xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxValidateClassAndSize @ 0x140242488 (xxxValidateClassAndSize.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x14025EF60 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x14025F678 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E3890 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SfnOUTCBOXSTRING @ 0x140061C90 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140061E20 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x140062990 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x140062CE0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     SfnDWORD @ 0x1400C48E0 (SfnDWORD.c)
 *     SfnCOPYDATA @ 0x1401306F0 (SfnCOPYDATA.c)
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
 *     xxxLoadUserApiHook @ 0x1401D9C7C (xxxLoadUserApiHook.c)
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
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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

__int64 __fastcall xxxDefWindowProc(struct tagTHREADINFO **a1, __int64 a2, HWND a3, struct tagDRAWITEMSTRUCT *a4)
{
  unsigned int v4; // edi
  struct tagDRAWITEMSTRUCT *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64); // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64); // rbx
  __int64 v20; // rdx

  v4 = a2;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL
    && a1[2] != PtiCurrent((__int64)a1, a2)
    && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1602LL);
  }
  if ( v4 == 397 || v4 == 325 )
    return 0LL;
  v8 = 0LL;
  if ( v4 != 60 )
    v8 = a4;
  if ( !IsInsideUserApiHook((__int64)a1, a2) )
    return xxxRealDefWindowProc((struct tagWND *)a1, v4, a3, v8);
  v10 = (__int64)a1[5];
  if ( *(char *)(v10 + 19) < 0 && (v4 != 130 || (*(_BYTE *)(v10 + 18) & 4) == 0 || *(__int16 *)(v10 + 42) < 0) )
    return xxxRealDefWindowProc((struct tagWND *)a1, v4, a3, v8);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v10, v9) + 132, 0, 0) & 1) != 0
    || !(unsigned int)xxxLoadUserApiHook() )
  {
    return xxxRealDefWindowProc((struct tagWND *)a1, v4, a3, v8);
  }
  v12 = v4 & 0x1FFFF;
  if ( (*((_BYTE *)a1[5] + 18) & 8) != 0 )
  {
    if ( (unsigned int)v12 >= 0x400 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12) + 19872) + 552LL);
      return SfnDWORD((_DWORD)a1, v4, (_DWORD)a3, (_DWORD)v8, 0LL, v13);
    }
    v15 = (unsigned __int8)MessageTable[(unsigned __int16)v4];
    v16 = gapfnScSendMessage[v15];
    v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v12) + 19872) + 552LL);
    return ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, int, _QWORD))v16)(
             a1,
             v4,
             a3,
             v8,
             0LL,
             v17,
             1,
             0LL);
  }
  else
  {
    if ( (unsigned int)v12 >= 0x400 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12) + 19872) + 744LL);
      return SfnDWORD((_DWORD)a1, v4, (_DWORD)a3, (_DWORD)v8, 0LL, v13);
    }
    v18 = (unsigned __int8)MessageTable[(unsigned __int16)v4];
    v19 = gapfnScSendMessage[v18];
    v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v12) + 19872) + 744LL);
    return ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, _DWORD, _QWORD))v19)(
             a1,
             v4,
             a3,
             v8,
             0LL,
             v20,
             0,
             0LL);
  }
}
