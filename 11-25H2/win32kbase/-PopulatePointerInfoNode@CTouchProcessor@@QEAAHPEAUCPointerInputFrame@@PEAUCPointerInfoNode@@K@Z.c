/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140206828 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C4788 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D901C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DF11C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1401156B0 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x140118274 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1401431E4 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x140150FF8 (-NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x140151FE4 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ApiSetEditionGetInputDelegate @ 0x140195368 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetInputTransformOnInput @ 0x1401972D4 (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x14020CA8C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        unsigned int a4)
{
  struct CPointerInputFrame *v5; // r12
  unsigned int v7; // edi
  __int64 v9; // rdx
  int v10; // r8d
  char v11; // r14
  char v12; // r15
  bool v13; // r12
  int v14; // ebx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  unsigned __int16 updated; // ax
  __int64 v20; // rdx
  int v21; // r8d
  char v22; // r13
  char v23; // r15
  bool v24; // r12
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  _QWORD *v28; // rcx
  char v29; // r15
  bool v30; // r12
  __int16 v31; // bx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  unsigned int v35; // ecx
  CInputDest *v36; // rax
  int v37; // ebx
  int v38; // r15d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  unsigned int v42; // eax
  int v43; // eax
  bool v44; // zf
  int ShouldForegroundActivate; // eax
  char v46; // r11
  int v47; // ebx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // r8d
  char v52; // r11
  int v53; // ecx
  unsigned int v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // edx
  int v59; // r8d
  int v60; // [rsp+28h] [rbp-D8h]
  __int16 v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v64; // [rsp+54h] [rbp-ACh]
  unsigned int v65; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v66; // [rsp+5Ch] [rbp-A4h] BYREF
  struct CPointerInputFrame *v67; // [rsp+60h] [rbp-A0h]
  _OWORD v68[7]; // [rsp+70h] [rbp-90h] BYREF
  char v69; // [rsp+E0h] [rbp-20h]
  _OWORD v70[7]; // [rsp+F0h] [rbp-10h] BYREF
  char v71; // [rsp+160h] [rbp+60h]
  int v72; // [rsp+161h] [rbp+61h]
  __int16 v73; // [rsp+165h] [rbp+65h]
  char v74; // [rsp+167h] [rbp+67h]
  _BYTE v75[128]; // [rsp+170h] [rbp+70h] BYREF

  v67 = a2;
  v5 = a2;
  v7 = 0;
  memset(v68, 0, sizeof(v68));
  v69 = 0;
  v63[0] = 0;
  v65 = 0;
  v66 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    v64 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1276);
  }
  if ( !v5 )
  {
    v64 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8039);
  }
  if ( *((_DWORD *)v5 + 56) != 2 )
  {
    v64 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1277);
  }
  v11 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      41,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( *((_DWORD *)a3 + 45) )
  {
    updated = CTouchProcessor::UpdateActivePointer(
                (CTouchProcessor *)this,
                v5,
                a3,
                (struct CInputDest *)v68,
                &v65,
                v63,
                &v66,
                a4,
                *((_WORD *)a3 + 86));
    v22 = updated;
    if ( !updated )
    {
      if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v23 = 0;
        }
        v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
          LOBYTE(v26) = v24;
          LOBYTE(v27) = v23;
          WPP_RECORDER_AND_TRACE_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(UserSessionState + 69144),
            2);
        }
      }
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( !(_BYTE)v20 && !v11 )
        goto LABEL_133;
      v61 = 45;
LABEL_68:
      LOBYTE(v21) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v28[3],
        v20,
        v21,
        v28[8],
        5,
        4,
        v61,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
LABEL_133:
      CInputDest::~CInputDest((CInputDest *)v68);
      return v7;
    }
    if ( *((_DWORD *)a3 + 119) )
    {
      InputTraceLogging::Pointer::DropInput();
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( !(_BYTE)v20 && !v11 )
        goto LABEL_133;
      v61 = 46;
      goto LABEL_68;
    }
    if ( !LODWORD(v68[0]) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = *((_WORD *)a3 + 80);
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        LOBYTE(v33) = v30;
        LOBYTE(v34) = v29;
        WPP_RECORDER_AND_TRACE_SF_HL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69144),
          4,
          v60,
          47,
          v62,
          v22,
          v31);
      }
      v5 = v67;
      InputTraceLogging::Pointer::NoTargetFound(v67, (struct CPointerInfoNode *)((char *)a3 + 160));
    }
    v35 = *(_DWORD *)a3 & 0xFFFFFFFB | (v63[0] >> 2) & 4;
    *(_DWORD *)a3 = v35;
    if ( (v35 & 4) != 0 )
    {
      v72 = 0;
      v73 = 0;
      v74 = 0;
      memset(v70, 0, sizeof(v70));
      v36 = (CInputDest *)v70;
      v71 = 0;
      v37 = 1;
      v38 = 0;
    }
    else
    {
      v36 = CInputDest::CInputDest((CInputDest *)v75, (const struct CInputDest *)v68);
      v37 = 0;
      v38 = 2;
    }
    CInputDest::operator=((_QWORD *)a3 + 3, v36);
    if ( v38 )
      CInputDest::~CInputDest((CInputDest *)v75);
    if ( v37 )
      CInputDest::~CInputDest((CInputDest *)v70);
    *((_DWORD *)a3 + 36) = 0;
    if ( (v63[0] & 0x100) == 0 )
    {
LABEL_96:
      if ( SLOBYTE(v63[0]) < 0 && *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18824) )
      {
        v42 = v66;
        *((_DWORD *)a3 + 1) |= 0x100u;
        *((_DWORD *)a3 + 87) = v42;
      }
      if ( (v63[0] & 0x20) != 0 )
      {
        v43 = *(_DWORD *)a3 | 0x500;
        *((_DWORD *)a3 + 36) = 1;
        v44 = (v63[0] & 0x40) == 0;
        *(_DWORD *)a3 = v43;
        if ( !v44 )
          *(_DWORD *)a3 = v43 | 0x800;
      }
      CInputDest::operator=((__int64)a3 + 352, (__int64)v68);
      *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v68);
      *((_DWORD *)a3 + 44) = *((_DWORD *)v5 + 10);
      *((_DWORD *)a3 + 59) = 1;
      ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate(a3);
      v46 = v63[0];
      *((_DWORD *)a3 + 84) = ShouldForegroundActivate == 0;
      if ( (v46 & 1) != 0 )
        *((_DWORD *)a3 + 45) |= 1u;
      *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v46 & 4) << 14) | ((v46 & 2) << 14);
      v47 = *((_DWORD *)a3 + 45);
      v48 = *((_DWORD *)a3 + 42);
      *((_DWORD *)a3 + 45) = v47 & 0x7FE1F7;
      v49 = (unsigned int)(v48 - 2);
      if ( (_DWORD)v49 )
      {
        v49 = (unsigned int)(v49 - 1);
        if ( !(_DWORD)v49 )
        {
          *((_DWORD *)a3 + 66) &= 7u;
          *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_108:
          *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v49, v65, v47 & 0x1F0);
          if ( (v47 & 1) != 0 || (v47 & 0x20000) == 0 || (v53 = 1, (v47 & 2) == 0) )
            v53 = 0;
          v54 = v53 | *(_DWORD *)a3 & 0xFFFFFFFE;
          *(_DWORD *)a3 = v54;
          if ( v65 != v51 )
            *(_DWORD *)a3 = v54 & 0xFFFFFFFE;
          if ( HIDWORD(v68[5]) )
          {
            v70[0] = v68[0];
            v70[2] = v68[2];
            v70[1] = v68[1];
            v70[4] = v68[4];
            v70[3] = v68[3];
            v70[6] = v68[6];
            v70[5] = v68[5];
            if ( ApiSetEditionGetInputDelegate(v70, v50) && (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
            v52 = v63[0];
          }
          *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v52 & 8) << 11);
          if ( !CPointerInfoNode::IsForManipulationThread(a3) )
          {
            v57 = *((_QWORD *)a3 + 31);
            v70[0] = v68[0];
            v70[2] = v68[2];
            v70[1] = v68[1];
            v70[4] = v68[4];
            v70[3] = v68[3];
            v70[6] = v68[6];
            v70[5] = v68[5];
            if ( (unsigned int)ApiSetInputTransformOnInput(v70, v57, (__int64)a3 + 160) )
              *((_DWORD *)a3 + 45) |= 0x400000u;
          }
          InputTraceLogging::Pointer::AssignPointerId(v5, (struct CPointerInfoNode *)((char *)a3 + 160), v55, v56);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
              (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
          v7 = 1;
          goto LABEL_133;
        }
        if ( (_DWORD)v49 != 2 )
          goto LABEL_108;
      }
      *((_DWORD *)a3 + 67) &= 7u;
      *((_DWORD *)a3 + 66) = 0;
      goto LABEL_108;
    }
    if ( !CInputDest::IsCompositionInput((CInputDest *)v68) )
    {
      v64 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1369);
    }
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (v63[0] & 0x20) != 0 || !*(_QWORD *)(W32GetUserSessionState(v40, v39) + 18824) )
        goto LABEL_95;
      v41 = 1373;
    }
    else
    {
      if ( (v63[0] & 0x20) != 0 )
      {
LABEL_95:
        *((_DWORD *)a3 + 1) |= 0x80u;
        goto LABEL_96;
      }
      v41 = 1377;
    }
    v64 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v41);
    goto LABEL_95;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *((_DWORD *)a3 + 43);
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v16) = v13;
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69144),
      3,
      4,
      42,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
      v14);
  }
  *((_DWORD *)a3 + 43) = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      43,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  InputTraceLogging::Pointer::DropInput();
  CInputDest::~CInputDest((CInputDest *)v68);
  return 0LL;
}
