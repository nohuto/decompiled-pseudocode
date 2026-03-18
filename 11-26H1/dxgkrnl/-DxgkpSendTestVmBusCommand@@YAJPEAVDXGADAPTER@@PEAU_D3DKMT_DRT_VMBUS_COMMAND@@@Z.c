/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1403CA87C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000CFBC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006B110 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x140196470 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x14020F160 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x14021022C (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1402212E4 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2, __int64 a3)
{
  __int64 v5; // rsi
  _BYTE *Pool2; // r15
  _BYTE *v7; // r13
  struct _KPROCESS *v8; // r10
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edx
  DXGGLOBAL *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONDATA *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  struct _KPROCESS *v33; // rbx
  struct DXGPROCESS *v34; // rax
  struct DXGPROCESS *v35; // r13
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v39; // rax
  const wchar_t *v40; // r9
  __int64 v41; // rax
  const wchar_t *v42; // r9
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // eax
  DXGGLOBAL *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  DXGSESSIONDATA *v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // eax
  DXGGLOBAL *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  DXGSESSIONDATA *v71; // rbx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned int v79; // eax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned int v90; // eax
  struct _KPROCESS *v91; // rbx
  struct DXGPROCESS *v92; // rax
  struct DXGPROCESS *v93; // r13
  DXGGLOBAL *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rcx
  DXGSESSIONDATA *v100; // rbx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned int v108; // eax
  const EVENT_DESCRIPTOR *v109; // rdx
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // r8
  const EVENT_DESCRIPTOR *v114; // rdx
  PVOID v115; // rbx
  int v116; // ecx
  int v117; // ecx
  int v118; // ecx
  DXGGLOBAL *Global; // rax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  DXGSESSIONDATA *SessionData; // rbx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  unsigned int v133; // eax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  unsigned int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  unsigned int v144; // eax
  struct _KPROCESS *v145; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v147; // r13
  DXGGLOBAL *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // rcx
  DXGSESSIONDATA *v154; // rbx
  __int64 v155; // r8
  __int64 v156; // r9
  unsigned int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned int v162; // eax
  int v163; // eax
  DXGGLOBAL *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // rcx
  DXGSESSIONDATA *v170; // rbx
  __int64 v171; // r8
  __int64 v172; // r9
  unsigned int v173; // eax
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  unsigned int v178; // eax
  int v179; // eax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  unsigned int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  unsigned int v189; // eax
  struct _KPROCESS *v190; // rbx
  struct DXGPROCESS *v191; // rax
  struct DXGPROCESS *v192; // r13
  DXGGLOBAL *v193; // rax
  __int64 v194; // rdx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rdx
  __int64 v198; // rcx
  DXGSESSIONDATA *v199; // rbx
  __int64 v200; // r8
  __int64 v201; // r9
  unsigned int v202; // eax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  unsigned int v207; // eax
  void *v208; // rcx
  NTSTATUS v209; // eax
  const EVENT_DESCRIPTOR *v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  const EVENT_DESCRIPTOR *v213; // rdx
  void *v214; // rcx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-310h]
  char v216; // [rsp+50h] [rbp-2E8h]
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-2E0h] BYREF
  unsigned int v218; // [rsp+60h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+68h] [rbp-2D0h]
  PVOID Object[2]; // [rsp+70h] [rbp-2C8h] BYREF
  _BYTE *v221; // [rsp+80h] [rbp-2B8h]
  _BYTE v222[24]; // [rsp+88h] [rbp-2B0h] BYREF
  PVOID v223[2]; // [rsp+A0h] [rbp-298h] BYREF
  unsigned int v224; // [rsp+B0h] [rbp-288h]
  char v225; // [rsp+B4h] [rbp-284h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp-178h] BYREF
  char v227; // [rsp+1F0h] [rbp-148h]
  _BYTE v228[128]; // [rsp+200h] [rbp-138h] BYREF
  _BYTE v229[128]; // [rsp+280h] [rbp-B8h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  v221 = 0LL;
  v7 = 0LL;
  P = 0LL;
  v218 = 0;
  v8 = 0LL;
  PROCESS = 0LL;
  LOBYTE(a3) = 0;
  v216 = 0;
  *(_OWORD *)v223 = 0LL;
  v224 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(2LL);
    v39 = 16486LL;
    v40 = L"NULL vmbus command";
LABEL_40:
    WdLogGlobalForLineNumber = v39;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741811;
    goto LABEL_32;
  }
  v9 = *((_DWORD *)a2 + 3);
  if ( !v9 )
  {
    v8 = (struct _KPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 212);
    PROCESS = v8;
    if ( !v8 )
    {
      WdLogSingleEntry0(2LL);
      v39 = 16498LL;
      goto LABEL_48;
    }
LABEL_49:
    LOBYTE(a3) = 1;
    v216 = 1;
    goto LABEL_5;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(2LL);
      v39 = 16508LL;
      v40 = L"Adapter is expected";
      goto LABEL_40;
    }
    v8 = (struct DXGADAPTER *)((char *)a1 + 4712);
    PROCESS = (struct DXGADAPTER *)((char *)a1 + 4712);
    if ( a1 == (struct DXGADAPTER *)-4712LL )
    {
      WdLogSingleEntry0(2LL);
      v39 = 16516LL;
LABEL_48:
      v40 = L"Invalid VM bus channel";
      goto LABEL_40;
    }
    goto LABEL_49;
  }
  if ( (unsigned int)(v10 - 1) > 1 )
  {
    WdLogSingleEntry0(2LL);
    v39 = 16528LL;
    v40 = L"Invalid channel type";
    goto LABEL_40;
  }
LABEL_5:
  v11 = *((_QWORD *)a2 + 3);
  if ( v11 )
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      WdLogSingleEntry0(2LL);
      v39 = 16542LL;
      v40 = L"Invalid input buffer";
      goto LABEL_40;
    }
    if ( (_BYTE)a3 )
    {
      DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v223, v8, *((_DWORD *)a2 + 6), 0LL, 0LL, 0LL);
      if ( !v223[0] )
        goto LABEL_33;
      if ( a1 )
        *((_QWORD *)v223[1] + 1) = *(_QWORD *)((char *)a1 + 4820);
      Pool2 = v223[0];
    }
    else
    {
      if ( v11 > 0x80 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(64LL, v11, 1265072196LL);
        v221 = Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry0(6LL);
          v41 = 16570LL;
          v42 = L"Failed to allocate pInputBuffer";
          goto LABEL_62;
        }
        goto LABEL_63;
      }
      Pool2 = v228;
    }
    v221 = Pool2;
LABEL_63:
    RtlCopyFromUser(Pool2, *((void **)a2 + 2), *((_QWORD *)a2 + 3));
  }
  if ( *((_QWORD *)a2 + 5) && *((_QWORD *)a2 + 4) )
  {
    v43 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
    v218 = v43;
    if ( v43 <= 0x80 )
    {
      v7 = v229;
      P = v229;
      goto LABEL_7;
    }
    v7 = (_BYTE *)ExAllocatePool2(64LL, v43, 1265072196LL);
    P = v7;
    if ( v7 )
      goto LABEL_7;
    WdLogSingleEntry0(6LL);
    v41 = 16603LL;
    v42 = L"Failed to allocate pOutputBuffer";
LABEL_62:
    WdLogGlobalForLineNumber = v41;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v42, v41, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_32;
  }
LABEL_7:
  if ( v7 || *((_QWORD *)a2 + 5) )
  {
    v115 = 0LL;
    v116 = *((_DWORD *)a2 + 3);
    if ( v116 )
    {
      v117 = v116 - 1;
      if ( v117 )
      {
        v118 = v117 - 1;
        if ( v118 )
        {
          if ( v118 != 1 )
          {
            WdLogSingleEntry0(2LL);
            v39 = 16806LL;
LABEL_39:
            v40 = L"Invalid channel type for transmit.";
            goto LABEL_40;
          }
          PROCESS = 0LL;
          Global = DXGGLOBAL::GetGlobal();
          SessionData = DXGGLOBAL::GetSessionData(Global, v120, v121, v122);
          if ( !SessionData )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v124, v123, v126, v127);
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741790LL);
            WdLogGlobalForLineNumber = 16791;
            v133 = PsGetCurrentProcessSessionId(v130, v129, v131, v132);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v133,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 < 0 )
            goto LABEL_143;
          v134 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, &PROCESS);
          v5 = v134;
          if ( v134 < 0 )
          {
            v139 = PsGetCurrentProcessSessionId(v136, v135, v137, v138);
            WdLogSingleEntry2(2LL, v139, v5);
            WdLogGlobalForLineNumber = 16791;
            v144 = PsGetCurrentProcessSessionId(v141, v140, v142, v143);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v144,
              v5,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 < 0 )
            goto LABEL_143;
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)Object);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
          v145 = PROCESS;
          ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(PROCESS);
          v147 = ProcessDxgProcess;
          if ( !ProcessDxgProcess || (*((_DWORD *)ProcessDxgProcess + 102) & 0x800) != 0 )
            goto LABEL_142;
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v222, ProcessDxgProcess);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v222);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)Object);
          v227 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v145);
          KeEnterCriticalRegion();
          if ( !*((_DWORD *)v147 + 122) || (*((_DWORD *)v147 + 102) & 4) == 0 )
            goto LABEL_141;
          v148 = DXGGLOBAL::GetGlobal();
          v154 = DXGGLOBAL::GetSessionData(v148, v149, v150, v151);
          if ( !v154 )
          {
            LODWORD(v5) = -1073741811;
            v157 = PsGetCurrentProcessSessionId(v153, v152, v155, v156);
            WdLogSingleEntry2(2LL, v157, -1073741811LL);
            WdLogGlobalForLineNumber = 16791;
            v162 = PsGetCurrentProcessSessionId(v159, v158, v160, v161);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v162,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 < 0 )
            goto LABEL_141;
          v163 = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(v154, Pool2, *((_DWORD *)a2 + 6), P, &v218, 1);
        }
        else
        {
          PROCESS = 0LL;
          v164 = DXGGLOBAL::GetGlobal();
          v170 = DXGGLOBAL::GetSessionData(v164, v165, v166, v167);
          if ( !v170 )
          {
            v173 = PsGetCurrentProcessSessionId(v169, v168, v171, v172);
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, v173, -1073741790LL);
            WdLogGlobalForLineNumber = 16775;
            v178 = PsGetCurrentProcessSessionId(v175, v174, v176, v177);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v178,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 < 0 )
            goto LABEL_143;
          v179 = DXGSESSIONDATA::ReferenceDwmProcess(v170, &PROCESS);
          v5 = v179;
          if ( v179 < 0 )
          {
            v184 = PsGetCurrentProcessSessionId(v181, v180, v182, v183);
            WdLogSingleEntry2(2LL, v184, v5);
            WdLogGlobalForLineNumber = 16775;
            v189 = PsGetCurrentProcessSessionId(v186, v185, v187, v188);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v189,
              v5,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 < 0 )
            goto LABEL_143;
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)Object);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
          v190 = PROCESS;
          v191 = (struct DXGPROCESS *)PsGetProcessDxgProcess(PROCESS);
          v192 = v191;
          if ( !v191 || (*((_DWORD *)v191 + 102) & 0x800) != 0 )
          {
LABEL_142:
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)Object);
            v7 = P;
LABEL_143:
            if ( PROCESS )
              ObfDereferenceObject(PROCESS);
            goto LABEL_168;
          }
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v222, v191);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v222);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)Object);
          v227 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v190);
          KeEnterCriticalRegion();
          if ( !*((_DWORD *)v192 + 122) || (*((_DWORD *)v192 + 102) & 4) == 0 )
            goto LABEL_141;
          v193 = DXGGLOBAL::GetGlobal();
          v199 = DXGGLOBAL::GetSessionData(v193, v194, v195, v196);
          if ( !v199 )
          {
            LODWORD(v5) = -1073741811;
            v202 = PsGetCurrentProcessSessionId(v198, v197, v200, v201);
            WdLogSingleEntry2(2LL, v202, -1073741811LL);
            WdLogGlobalForLineNumber = 16775;
            v207 = PsGetCurrentProcessSessionId(v204, v203, v205, v206);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v207,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 < 0 )
          {
LABEL_141:
            KeLeaveCriticalRegion();
            CPROCESSATTACHHELPER::Detach(&ApcState);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v222);
            goto LABEL_142;
          }
          v163 = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(v199, Pool2, *((_DWORD *)a2 + 6), P, &v218, 1);
        }
        LODWORD(v5) = v163;
        goto LABEL_141;
      }
    }
    if ( !v216 )
    {
      WdLogSingleEntry0(1LL);
      v110 = 16705LL;
      goto LABEL_99;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)Pool2 + 4) == 1016 )
    {
      v208 = (void *)*((_QWORD *)Pool2 + 5);
      if ( v208 )
      {
        Object[0] = 0LL;
        v209 = ObReferenceObjectByHandle(v208, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
        v115 = Object[0];
        LODWORD(v5) = v209;
        if ( v209 < 0 )
          goto LABEL_168;
        *((PVOID *)Pool2 + 5) = Object[0];
      }
    }
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
        {
          v210 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
          goto LABEL_157;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        v210 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
LABEL_157:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v210, a3, 0LL, 0LL, HandleInformation);
      }
    }
    LODWORD(v5) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage((struct _KTHREAD **)PROCESS, v223[1], v224, v7, &v218);
    if ( (int)v5 < 0 && v115 )
      ObfDereferenceObject(v115);
    if ( !bTracingEnabled )
      goto LABEL_168;
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        v213 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_167;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      v213 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_167:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v211, v213, v212, 0LL, 0LL, HandleInformation, v5);
    }
LABEL_168:
    if ( !v7 && v218 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 16814;
    }
    goto LABEL_29;
  }
  v12 = *((_DWORD *)a2 + 3);
  if ( v12 >= 2 )
  {
    if ( v12 == 2 )
    {
      PROCESS = 0LL;
      v65 = DXGGLOBAL::GetGlobal();
      v71 = DXGGLOBAL::GetSessionData(v65, v66, v67, v68);
      if ( !v71 )
      {
        v74 = PsGetCurrentProcessSessionId(v70, v69, v72, v73);
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v74, -1073741790LL);
        WdLogGlobalForLineNumber = 16653;
        v79 = PsGetCurrentProcessSessionId(v76, v75, v77, v78);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v79,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 < 0 )
        goto LABEL_27;
      v80 = DXGSESSIONDATA::ReferenceDwmProcess(v71, &PROCESS);
      v5 = v80;
      if ( v80 < 0 )
      {
        v85 = PsGetCurrentProcessSessionId(v82, v81, v83, v84);
        WdLogSingleEntry2(2LL, v85, v5);
        WdLogGlobalForLineNumber = 16653;
        v90 = PsGetCurrentProcessSessionId(v87, v86, v88, v89);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
          v90,
          v5,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 < 0 )
        goto LABEL_27;
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)Object);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
      v91 = PROCESS;
      v92 = (struct DXGPROCESS *)PsGetProcessDxgProcess(PROCESS);
      v93 = v92;
      if ( !v92 || (*((_DWORD *)v92 + 102) & 0x800) != 0 )
        goto LABEL_26;
      DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v222, v92);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v222);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)Object);
      v227 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v91);
      KeEnterCriticalRegion();
      if ( *((_DWORD *)v93 + 122) && (*((_DWORD *)v93 + 102) & 4) != 0 )
      {
        v94 = DXGGLOBAL::GetGlobal();
        v100 = DXGGLOBAL::GetSessionData(v94, v95, v96, v97);
        if ( !v100 )
        {
          LODWORD(v5) = -1073741811;
          v103 = PsGetCurrentProcessSessionId(v99, v98, v101, v102);
          WdLogSingleEntry2(2LL, v103, -1073741811LL);
          WdLogGlobalForLineNumber = 16653;
          v108 = PsGetCurrentProcessSessionId(v105, v104, v106, v107);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v108,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
          LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                          v100,
                          Pool2,
                          *((_DWORD *)a2 + 6),
                          0LL,
                          0LL,
                          0);
      }
      KeLeaveCriticalRegion();
      CPROCESSATTACHHELPER::Detach(&ApcState);
      goto LABEL_25;
    }
    if ( v12 == 3 )
    {
      PROCESS = 0LL;
      v13 = DXGGLOBAL::GetGlobal();
      v19 = DXGGLOBAL::GetSessionData(v13, v14, v15, v16);
      if ( !v19 )
      {
        v44 = PsGetCurrentProcessSessionId(v18, v17, v20, v21);
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v44, -1073741790LL);
        WdLogGlobalForLineNumber = 16669;
        v49 = PsGetCurrentProcessSessionId(v46, v45, v47, v48);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v49,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 < 0 )
        goto LABEL_27;
      v22 = DXGSESSIONDATA::ReferenceDwmProcess(v19, &PROCESS);
      v5 = v22;
      if ( v22 < 0 )
      {
        v27 = PsGetCurrentProcessSessionId(v24, v23, v25, v26);
        WdLogSingleEntry2(2LL, v27, v5);
        WdLogGlobalForLineNumber = 16669;
        v32 = PsGetCurrentProcessSessionId(v29, v28, v30, v31);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
          v32,
          v5,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 < 0 )
        goto LABEL_27;
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)Object);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
      v33 = PROCESS;
      v34 = (struct DXGPROCESS *)PsGetProcessDxgProcess(PROCESS);
      v35 = v34;
      if ( !v34 || (*((_DWORD *)v34 + 102) & 0x800) != 0 )
      {
LABEL_26:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)Object);
        v7 = P;
LABEL_27:
        if ( PROCESS )
          ObfDereferenceObject(PROCESS);
        goto LABEL_29;
      }
      DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v222, v34);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v222);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)Object);
      v227 = 0;
      if ( (struct _KPROCESS *)PsGetCurrentProcess(v36) != v33 )
      {
        KeStackAttachProcess(v33, &ApcState);
        v227 = 1;
      }
      KeEnterCriticalRegion();
      if ( *((_DWORD *)v35 + 122) && (*((_DWORD *)v35 + 102) & 4) != 0 )
      {
        v50 = DXGGLOBAL::GetGlobal();
        v56 = DXGGLOBAL::GetSessionData(v50, v51, v52, v53);
        if ( !v56 )
        {
          LODWORD(v5) = -1073741811;
          v59 = PsGetCurrentProcessSessionId(v55, v54, v57, v58);
          WdLogSingleEntry2(2LL, v59, -1073741811LL);
          WdLogGlobalForLineNumber = 16669;
          v64 = PsGetCurrentProcessSessionId(v61, v60, v62, v63);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v64,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
          LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(v56, Pool2, *((_DWORD *)a2 + 6), 0LL, 0LL, 0);
      }
      KeLeaveCriticalRegion();
      if ( v227 )
      {
        KeUnstackDetachProcess(&ApcState);
        v227 = 0;
      }
LABEL_25:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v222);
      goto LABEL_26;
    }
    WdLogSingleEntry0(2LL);
    v39 = 16684LL;
    goto LABEL_39;
  }
  if ( !bTracingEnabled )
    goto LABEL_96;
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      v109 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
      goto LABEL_95;
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    v109 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
LABEL_95:
    LODWORD(HandleInformation) = 0;
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v109, a3, 0LL, 0LL, HandleInformation);
  }
LABEL_96:
  if ( !v216 )
  {
    WdLogSingleEntry0(1LL);
    v110 = 16634LL;
LABEL_99:
    WdLogGlobalForLineNumber = v110;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", v110, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v111 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync((struct _KTHREAD **)PROCESS, v223[1], v224);
  LODWORD(v5) = v111;
  if ( !bTracingEnabled )
    goto LABEL_29;
  if ( *((_DWORD *)a2 + 3) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
      goto LABEL_29;
    v114 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
      goto LABEL_29;
    v114 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
  }
  LODWORD(HandleInformation) = 0;
  McTemplateK0pxqt_EtwWriteTransfer(v112, v114, v113, 0LL, 0LL, HandleInformation, v111);
LABEL_29:
  if ( (int)v5 < 0 )
  {
LABEL_32:
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 16850;
    goto LABEL_33;
  }
  v37 = *((_QWORD *)a2 + 5);
  if ( v218 < v37 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 5), v218);
    WdLogGlobalForLineNumber = 16825;
    LODWORD(v5) = -1073741823;
    goto LABEL_32;
  }
  if ( v7 )
  {
    v214 = (void *)*((_QWORD *)a2 + 4);
    if ( v214 )
    {
      if ( v37 )
        RtlCopyToUser(v214, v7, *((_QWORD *)a2 + 5));
    }
  }
LABEL_33:
  if ( Pool2 && Pool2 != v228 && Pool2 != v223[0] )
    ExFreePoolWithTag(Pool2, 0);
  if ( P && P != v229 )
    ExFreePoolWithTag(P, 0);
  if ( v223[1] && v223[1] != &v225 )
    ExFreePoolWithTag(v223[1], 0x4D767844u);
  return (unsigned int)v5;
}
