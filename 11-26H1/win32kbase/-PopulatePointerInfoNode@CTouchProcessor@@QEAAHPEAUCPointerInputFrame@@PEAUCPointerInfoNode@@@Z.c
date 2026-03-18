/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140064808 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETE.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400CBD48 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionGetInputDelegate @ 0x14010A470 (ApiSetEditionGetInputDelegate.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIG@Z @ 0x14010C4A8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x14010D30C (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x14010D3A8 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14010D3F8 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x140122850 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ApiSetInputTransformOnInput @ 0x140147E8C (ApiSetInputTransformOnInput.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14017F804 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x14018FB4C (-NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  struct CPointerInputFrame *v4; // r15
  int v6; // r14d
  int v7; // edx
  int v8; // r8d
  CTouchProcessor **v9; // r9
  char v10; // si
  bool v11; // r15
  int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  unsigned __int16 updated; // ax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  char v21; // r13
  bool v22; // r15
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  int v27; // r8d
  bool v28; // r15
  __int16 v29; // bx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // r8d
  CInputDest *v35; // rax
  int v36; // ebx
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // r8
  unsigned int v41; // eax
  int v42; // eax
  bool v43; // zf
  __int64 v44; // rcx
  int ShouldForegroundActivate; // eax
  char v46; // r10
  int v47; // r11d
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // ebx
  int v51; // edx
  int v52; // r9d
  char v53; // r10
  int v54; // r11d
  int v55; // eax
  unsigned int v56; // r9d
  __int64 v57; // rdx
  int v58; // edx
  int v59; // r8d
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v62[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+54h] [rbp-ACh]
  unsigned int v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+5Ch] [rbp-A4h] BYREF
  struct CPointerInputFrame *v66; // [rsp+60h] [rbp-A0h]
  _OWORD v67[7]; // [rsp+70h] [rbp-90h] BYREF
  char v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E1h] [rbp-1Fh]
  __int16 v70; // [rsp+E5h] [rbp-1Bh]
  char v71; // [rsp+E7h] [rbp-19h]
  _OWORD v72[7]; // [rsp+F0h] [rbp-10h] BYREF
  char v73; // [rsp+160h] [rbp+60h]
  _BYTE v74[128]; // [rsp+170h] [rbp+70h] BYREF

  v66 = a2;
  v4 = a2;
  v6 = 0;
  memset(v72, 0, sizeof(v72));
  v73 = 0;
  v62[0] = 0;
  v64 = 0;
  v65 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    v63 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1266LL);
  }
  if ( !v4 )
  {
    v63 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8022LL);
  }
  if ( *((_DWORD *)v4 + 56) != 2 )
  {
    v63 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1267LL);
  }
  v9 = &WPP_GLOBAL_Control;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v7) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v8) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v7 || (_BYTE)v8 )
  {
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      41,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    v9 = &WPP_GLOBAL_Control;
  }
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    {
      LOBYTE(v6) = 1;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *((_DWORD *)a3 + 43);
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
      LOBYTE(v14) = v11;
      LOBYTE(v15) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69136),
        3,
        4,
        42,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
        v12);
      v9 = &WPP_GLOBAL_Control;
    }
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v7) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v8) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v7 || (_BYTE)v8 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v8,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        43,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    InputTraceLogging::Pointer::DropInput(v66, (char *)a3 + 160, 1LL, v9);
LABEL_36:
    CInputDest::~CInputDest((CInputDest *)v72);
    return 0LL;
  }
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              v4,
              a3,
              (struct CInputDest *)v72,
              &v64,
              v62,
              &v65,
              *((_WORD *)a3 + 86));
  v21 = updated;
  if ( !updated )
  {
    if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
    {
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
      {
        LOBYTE(v6) = 1;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v6;
        WPP_RECORDER_AND_TRACE_SF_L(*((_QWORD *)WPP_GLOBAL_Control + 3), v25, v24, *(_QWORD *)(v23 + 69136), 2);
      }
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v18) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v18 || v10 )
    {
      LOBYTE(v19) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        45,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    goto LABEL_36;
  }
  if ( *((_DWORD *)a3 + 119) )
  {
    InputTraceLogging::Pointer::DropInput(v4, (char *)a3 + 160, 7LL, v20);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v26) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v26) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v26 || v10 )
    {
      LOBYTE(v27) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v27,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        46,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( HIDWORD(v72[5]) )
      HMAssignmentUnlock((__int64 *)&v72[5]);
    return 0LL;
  }
  if ( !LODWORD(v72[0]) )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      LOBYTE(v6) = 1;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = *((_WORD *)a3 + 80);
      v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19);
      LOBYTE(v31) = v28;
      LOBYTE(v32) = v6;
      WPP_RECORDER_AND_TRACE_SF_HL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69136),
        4,
        v60,
        47,
        v61,
        v21,
        v29);
    }
    v4 = v66;
    InputTraceLogging::Pointer::NoTargetFound(v66, (struct CPointerInfoNode *)((char *)a3 + 160));
    v6 = 0;
  }
  v33 = *(_DWORD *)a3 & 0xFFFFFFFB | (v62[0] >> 2) & 4;
  *(_DWORD *)a3 = v33;
  if ( (v33 & 4) != 0 )
  {
    v69 = 0;
    v70 = 0;
    v71 = 0;
    memset(v67, 0, sizeof(v67));
    v68 = 0;
    v35 = (CInputDest *)v67;
    v6 = 1;
    v36 = 0;
  }
  else
  {
    v35 = CInputDest::CInputDest((CInputDest *)v74, (const struct CInputDest *)v72);
    v36 = 2;
  }
  CInputDest::operator=((_QWORD *)a3 + 3, v35, v34);
  if ( v36 )
    CInputDest::~CInputDest((CInputDest *)v74);
  if ( v6 )
    CInputDest::~CInputDest((CInputDest *)v67);
  *((_DWORD *)a3 + 36) = 0;
  if ( (v62[0] & 0x100) != 0 )
  {
    if ( !CInputDest::IsCompositionInput((CInputDest *)v72) )
    {
      v63 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1358LL);
    }
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (v62[0] & 0x20) != 0 || !*(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 18872) )
        goto LABEL_98;
      v40 = 1362LL;
    }
    else
    {
      if ( (v62[0] & 0x20) != 0 )
      {
LABEL_98:
        *((_DWORD *)a3 + 1) |= 0x80u;
        goto LABEL_99;
      }
      v40 = 1366LL;
    }
    v63 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v40);
    goto LABEL_98;
  }
LABEL_99:
  if ( SLOBYTE(v62[0]) < 0 && *(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 18872) )
  {
    v41 = v65;
    *((_DWORD *)a3 + 1) |= 0x100u;
    *((_DWORD *)a3 + 87) = v41;
  }
  if ( (v62[0] & 0x20) != 0 )
  {
    v42 = *(_DWORD *)a3 | 0x500;
    *((_DWORD *)a3 + 36) = 1;
    v43 = (v62[0] & 0x40) == 0;
    *(_DWORD *)a3 = v42;
    if ( !v43 )
      *(_DWORD *)a3 = v42 | 0x800;
  }
  CInputDest::operator=((__int64)a3 + 352, (__int64)v72);
  v44 = 0LL;
  if ( (v72[0] & 4) != 0 )
  {
    if ( HIDWORD(v72[5]) == 1 || HIDWORD(v72[5]) == 2 )
    {
      if ( *(_QWORD *)&v72[5] )
        v44 = **(_QWORD **)&v72[5];
      else
        v44 = 0LL;
    }
  }
  else if ( (v72[0] & 2) != 0 )
  {
    v44 = *((_QWORD *)&v72[1] + 1);
  }
  *((_QWORD *)a3 + 24) = v44;
  *((_DWORD *)a3 + 44) = *((_DWORD *)v4 + 10);
  *((_DWORD *)a3 + 59) = 1;
  ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate(a3);
  v46 = v62[0];
  *((_DWORD *)a3 + 84) = ShouldForegroundActivate == 0;
  if ( (v46 & 1) != 0 )
    *((_DWORD *)a3 + 45) |= 1u;
  v47 = *((_DWORD *)a3 + 45);
  v48 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v46 & 4) << 14) | ((v46 & 2) << 14);
  *((_DWORD *)a3 + 45) = v47 & 0x7FE1F7;
  v49 = (unsigned int)(*((_DWORD *)a3 + 42) - 2);
  if ( *((_DWORD *)a3 + 42) == 2 )
  {
LABEL_118:
    *((_DWORD *)a3 + 66) = 0;
    *((_DWORD *)a3 + 67) &= 7u;
    goto LABEL_119;
  }
  v49 = (unsigned int)(*((_DWORD *)a3 + 42) - 3);
  if ( *((_DWORD *)a3 + 42) != 3 )
  {
    if ( *((_DWORD *)a3 + 42) != 5 )
      goto LABEL_119;
    goto LABEL_118;
  }
  *((_DWORD *)a3 + 66) &= 7u;
  *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_119:
  v50 = v47 & 0x1F0;
  *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v49, v64, v47 & 0x1F0, v48);
  if ( (v54 & 1) != 0 || (v54 & 0x20000) == 0 || (v55 = 1, (v54 & 2) == 0) )
    v55 = 0;
  v56 = v55 | v52 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v56;
  if ( v51 != v50 )
    *(_DWORD *)a3 = v56 & 0xFFFFFFFE;
  if ( HIDWORD(v72[5]) )
  {
    v67[0] = v72[0];
    v67[2] = v72[2];
    v67[1] = v72[1];
    v67[4] = v72[4];
    v67[3] = v72[3];
    v67[6] = v72[6];
    v67[5] = v72[5];
    if ( ApiSetEditionGetInputDelegate(v67) && (*((_DWORD *)a3 + 1) & 0x100) == 0 )
      *(_DWORD *)a3 |= 0x100000u;
    v53 = v62[0];
  }
  *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v53 & 8) << 11);
  if ( !CPointerInfoNode::IsForManipulationThread(a3) )
  {
    v57 = *((_QWORD *)a3 + 31);
    v67[0] = v72[0];
    v67[2] = v72[2];
    v67[1] = v72[1];
    v67[4] = v72[4];
    v67[3] = v72[3];
    v67[6] = v72[6];
    v67[5] = v72[5];
    if ( (unsigned int)ApiSetInputTransformOnInput(v67, v57, (char *)a3 + 160) )
      *((_DWORD *)a3 + 45) |= 0x400000u;
  }
  InputTraceLogging::Pointer::AssignPointerId(v4, (struct CPointerInfoNode *)((char *)a3 + 160));
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v58) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v58) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v59) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v59) = 0;
  }
  if ( (_BYTE)v58 || (_BYTE)v59 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v58,
      v59,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      48,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( HIDWORD(v72[5]) )
    HMAssignmentUnlock((__int64 *)&v72[5]);
  return 1LL;
}
