/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x140023500
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSwitchContext @ 0x14001FD00 (VidSchiSwitchContext.c)
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSelectContext @ 0x1400230C0 (VidSchiSelectContext.c)
 *     VidSchiReadCommandFromContextQueue @ 0x140024CE0 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiCheckPreemptionPolicy @ 0x140024ED0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1400268DC (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140028570 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x14002A3F4 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x14002B738 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x14004992C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x140054F34 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1400C4B80 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x14011AC68 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x14011D524 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x14012733C (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x140025730 (McTemplateK0pqqxqqtppx_EtwWriteTransfer.c)
 *     McTemplateK0pqqttp_EtwWriteTransfer @ 0x140025834 (McTemplateK0pqqttp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer @ 0x1400258F8 (McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqPR4PR4_EtwWriteTransfer @ 0x1400259E0 (McTemplateK0ppqqqPR4PR4_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqpq_EtwWriteTransfer @ 0x140025AB0 (McTemplateK0ppqxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pqqpxpp_EtwWriteTransfer @ 0x140025B70 (McTemplateK0pqqpxpp_EtwWriteTransfer.c)
 *     McTemplateK0pqqPR2p_EtwWriteTransfer @ 0x140025C2C (McTemplateK0pqqPR2p_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqqxqp_EtwWriteTransfer @ 0x140025D54 (McTemplateK0pqxqqqxqp_EtwWriteTransfer.c)
 *     McTemplateK0pqxqt_EtwWriteTransfer @ 0x140025E48 (McTemplateK0pqxqt_EtwWriteTransfer.c)
 *     McTemplateK0qtpiixi_EtwWriteTransfer @ 0x140025EF8 (McTemplateK0qtpiixi_EtwWriteTransfer.c)
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140026C50 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x140044C6C (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  unsigned __int64 v11; // r8
  int v12; // r13d
  int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 *v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // r8d
  __int16 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  _BYTE *Pool2; // rcx
  __int64 v59; // r10
  unsigned int v60; // r8d
  unsigned int v61; // edx
  __int64 v62; // r9
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // r10
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 *v69; // r14
  __int64 v70; // rcx
  unsigned int v71; // r8d
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // r9
  int v89; // edx
  __int64 v90; // rcx
  __int64 v91; // r9
  __int64 v92; // r8
  int v93; // r9d
  __int64 v94; // r10
  int v95; // ecx
  __int64 v96; // r11
  __int64 v97; // rdx
  char v98; // al
  __int64 v99; // rax
  __int64 v100; // r10
  __int64 v101; // rcx
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 *v104; // r14
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r9
  __int64 v114; // r9
  __int64 v115; // r10
  __int64 v116; // rcx
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 *v119; // r14
  __int64 v120; // rax
  void (__fastcall *v121)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v122; // r10
  __int64 v123; // rcx
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 *v126; // r14
  __int64 v127; // rax
  int v128; // [rsp+70h] [rbp-89h]
  int v129; // [rsp+70h] [rbp-89h]
  int v130; // [rsp+70h] [rbp-89h]
  __int64 v131; // [rsp+70h] [rbp-89h]
  int v132; // [rsp+70h] [rbp-89h]
  int v133; // [rsp+78h] [rbp-81h]
  __int64 v134; // [rsp+78h] [rbp-81h]
  char *v135; // [rsp+80h] [rbp-79h]
  __int64 v136; // [rsp+88h] [rbp-71h]
  __int64 v137; // [rsp+88h] [rbp-71h]
  _BYTE *v138; // [rsp+98h] [rbp-61h]
  _BYTE v139[16]; // [rsp+A0h] [rbp-59h] BYREF
  int v140; // [rsp+B0h] [rbp-49h]
  PVOID P; // [rsp+B8h] [rbp-41h]
  _BYTE v142[16]; // [rsp+C0h] [rbp-39h] BYREF
  int v143; // [rsp+D0h] [rbp-29h]
  PVOID v144; // [rsp+D8h] [rbp-21h]
  _BYTE v145[16]; // [rsp+E0h] [rbp-19h] BYREF
  int v146; // [rsp+F0h] [rbp-9h]

  v9 = 0LL;
  v11 = 0x140000000uLL;
  v12 = a8;
  v13 = a1;
  v133 = a1;
  if ( !bTracingEnabled )
    goto LABEL_2;
  if ( (_DWORD)a1 == 4 )
  {
    v20 = *(unsigned int *)(a6 + 48);
    if ( (_DWORD)v20 != 5 )
    {
      switch ( (_DWORD)v20 )
      {
        case 0:
          if ( (*(_DWORD *)(a6 + 72) & 0x4000) != 0 && (byte_14008A204 & 4) != 0 )
          {
            v112 = *(_QWORD *)(a6 + 88);
            if ( v112 )
            {
              v113 = *(_QWORD *)(v112 + 56);
              if ( !v113 || (*(_DWORD *)(v112 + 112) & 0x40) != 0 )
                v113 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v113 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v113 )
                v113 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqq_EtwWriteTransfer(
              v112,
              &EventPresentQueueSubmit,
              0x140000000LL,
              v113,
              0,
              *(_DWORD *)(a6 + 112));
          }
          if ( (byte_14008A201 & 1) != 0 )
          {
            v110 = *(_QWORD *)(a6 + 88);
            if ( v110 )
            {
              v111 = *(_QWORD *)(v110 + 56);
              if ( !v111 || (*(_DWORD *)(v110 + 112) & 0x40) != 0 )
                LODWORD(v111) = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v111 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v111 )
                v111 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqqxqqtppx_EtwWriteTransfer(
              (*(_DWORD *)(a6 + 72) >> 14) & 1,
              v110,
              *(_QWORD *)(a6 + 776),
              v111,
              *(_DWORD *)(a6 + 48),
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 332),
              *(_DWORD *)(a6 + 340),
              *(_DWORD *)(a6 + 348),
              (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
              *(_QWORD *)(a6 + 288),
              a6,
              *(_QWORD *)(a6 + 776));
          }
          v21 = *(_DWORD *)(a6 + 480);
          if ( v21 && (byte_14008A201 & 0x20) != 0 )
          {
            v22 = *(_QWORD *)(a6 + 88);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 56);
              if ( !v23 || (*(_DWORD *)(v22 + 112) & 0x40) != 0 )
                v23 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v23 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v23 )
                v23 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqqPR2p_EtwWriteTransfer(v21, v22, a6 + 488, v23, *(_DWORD *)(a6 + 112), v21, a6 + 488, a6);
          }
          goto LABEL_2;
        case 3:
          goto LABEL_81;
        case 4:
          v76 = *(_QWORD *)(a6 + 288);
          if ( (byte_14008A201 & 1) != 0 )
          {
            if ( v76 )
              v77 = *(_QWORD *)(v76 + 16);
            else
              LODWORD(v77) = 0;
            v78 = *(_QWORD *)(a6 + 88);
            if ( v78 )
            {
              v79 = *(_QWORD *)(v78 + 56);
              if ( !v79 || (*(_DWORD *)(v78 + 112) & 0x40) != 0 )
                v79 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v79 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v79 )
                v79 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqqpxpp_EtwWriteTransfer(
              v76,
              v78,
              v77,
              v79,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 280),
              v76,
              *(_QWORD *)(a6 + 328),
              a6,
              v77);
          }
          goto LABEL_2;
        case 7:
LABEL_81:
          if ( (byte_14008A204 & 4) != 0 )
            McTemplateK0pqq_EtwWriteTransfer(v20, &EventPresentQueueSubmit, *(unsigned int *)(a6 + 112));
          break;
      }
      if ( (byte_14008A201 & 1) != 0 )
      {
        v52 = *(_QWORD *)(a6 + 88);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 56);
          if ( !v53 || (*(_DWORD *)(v52 + 112) & 0x40) != 0 )
            v53 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v53 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v53 )
            v53 = *(_QWORD *)(a6 + 96);
        }
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          (*(_DWORD *)(a6 + 72) >> 14) & 1,
          v52,
          *(_QWORD *)(a6 + 776),
          v53,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112),
          0,
          0,
          0,
          (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
          *(_QWORD *)(a6 + 288),
          a6,
          *(_QWORD *)(a6 + 776));
      }
      goto LABEL_2;
    }
    v41 = *(unsigned int *)(a6 + 284);
    P = 0LL;
    v143 = 0;
    v128 = v41;
    if ( (unsigned int)v41 <= 2 )
    {
      P = v142;
      if ( !(_DWORD)v41 )
      {
LABEL_101:
        v135 = (char *)P;
        v143 = v41;
        goto LABEL_102;
      }
      memset(v142, 0, 8 * v41);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v41 < 8 )
      {
        v135 = 0LL;
LABEL_102:
        v56 = *(unsigned int *)(a6 + 284);
        v138 = 0LL;
        v140 = 0;
        v129 = v56;
        if ( (unsigned int)v56 <= 2 )
        {
          v138 = v139;
          if ( !(_DWORD)v56 )
          {
LABEL_108:
            v136 = (__int64)v138;
            v140 = v56;
            goto LABEL_109;
          }
          memset(v139, 0, 8 * v56);
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v56 < 8 )
          {
            v136 = 0LL;
LABEL_109:
            v57 = *(unsigned int *)(a6 + 284);
            Pool2 = 0LL;
            v144 = 0LL;
            v146 = 0;
            v130 = v57;
            if ( (unsigned int)v57 > 2 )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v57 < 8 )
              {
                v59 = 0LL;
LABEL_114:
                v131 = v59;
                if ( v135 && v136 && v59 )
                {
                  v60 = *(_DWORD *)(a6 + 284);
                  v61 = 0;
                  if ( v60 )
                  {
                    do
                    {
                      v62 = 8LL * v61;
                      *(_QWORD *)&v135[v62] = *(_QWORD *)(a6 + v62 + 288);
                      *(_QWORD *)(v62 + v136) = *(_QWORD *)(*(_QWORD *)(a6 + v62 + 288) + 16LL);
                      v63 = *(_DWORD *)(*(_QWORD *)(a6 + v62 + 288) + 48LL);
                      if ( v63 == 2 || (unsigned int)(v63 - 4) < 2 )
                        v64 = *(_QWORD *)(a6 + 8LL * v61 + 544);
                      else
                        v64 = 0LL;
                      *(_QWORD *)(v59 + 8LL * v61++) = v64;
                      v60 = *(_DWORD *)(a6 + 284);
                    }
                    while ( v61 < v60 );
                    Pool2 = v144;
                    v13 = v133;
                  }
                  if ( (byte_14008A204 & 4) != 0 )
                  {
                    v89 = *(_DWORD *)(a6 + 280);
                    if ( (v89 & 0x10) != 0 )
                    {
                      v90 = *(_QWORD *)(a6 + 88);
                      if ( v90 )
                      {
                        v91 = *(_QWORD *)(v90 + 56);
                        if ( !v91 || (*(_DWORD *)(v90 + 112) & 0x40) != 0 )
                          v91 = *(_QWORD *)(a6 + 88);
                      }
                      else
                      {
                        v91 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                        if ( !v91 )
                          v91 = *(_QWORD *)(a6 + 96);
                      }
                      McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
                        v90,
                        v89,
                        v60,
                        0,
                        v91,
                        *(_DWORD *)(a6 + 112),
                        v89,
                        v60,
                        (__int64)v135,
                        v59,
                        a6);
                      Pool2 = v144;
                      v59 = v131;
                    }
                  }
                  if ( (byte_14008A201 & 1) != 0 )
                  {
                    v106 = *(_QWORD *)(a6 + 88);
                    if ( v106 )
                    {
                      v107 = *(_QWORD *)(v106 + 56);
                      if ( !v107 || (*(_DWORD *)(v106 + 112) & 0x40) != 0 )
                        v107 = *(_QWORD *)(a6 + 88);
                    }
                    else
                    {
                      v107 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                      if ( !v107 )
                        v107 = *(_QWORD *)(a6 + 96);
                    }
                    McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer(
                      v106,
                      *(_DWORD *)(a6 + 284),
                      *(_DWORD *)(a6 + 280),
                      v107,
                      *(_DWORD *)(a6 + 112),
                      *(_DWORD *)(a6 + 280),
                      *(_DWORD *)(a6 + 284),
                      (__int64)v135,
                      v59,
                      a6,
                      v136);
                    Pool2 = v144;
                  }
                }
                if ( Pool2 != v145 && Pool2 )
                  ExFreePoolWithTag(Pool2, 0);
                v144 = 0LL;
                v146 = 0;
                if ( v138 != v139 && v138 )
                  ExFreePoolWithTag(v138, 0);
                v140 = 0;
                if ( P != v142 && P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_2;
              }
              Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v57, 945908054LL);
              v144 = Pool2;
            }
            else
            {
              Pool2 = v145;
              v144 = v145;
              if ( !(_DWORD)v57 )
              {
LABEL_113:
                v146 = v57;
                v59 = (__int64)Pool2;
                goto LABEL_114;
              }
              memset(v145, 0, 8LL * (unsigned int)v57);
              Pool2 = v144;
            }
            LODWORD(v57) = v130;
            goto LABEL_113;
          }
          v138 = (_BYTE *)ExAllocatePool2(64LL, 8LL * (unsigned int)v56, 945908054LL);
        }
        LODWORD(v56) = v129;
        goto LABEL_108;
      }
      P = (PVOID)ExAllocatePool2(64LL, 8LL * (unsigned int)v41, 945908054LL);
    }
    LODWORD(v41) = v128;
    goto LABEL_101;
  }
  if ( (_DWORD)a1 == 5 )
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(*(_QWORD *)(a6 + 88), &EventQueueSelect, *(unsigned int *)(a6 + 48));
  }
  else
  {
    switch ( (int)a1 )
    {
      case 1:
        if ( (byte_14008A201 & 1) != 0 )
        {
          v51 = *(_QWORD *)(a5 + 56);
          if ( !v51 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            v51 = a5;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventAttemptPreemption, 0x140000000uLL, v51, a8);
        }
        break;
      case 2:
        if ( (byte_14008A201 & 2) != 0 )
        {
          v42 = ((unsigned __int64)*(unsigned int *)(a2 + 92) + 63) >> 6;
          if ( a5 )
          {
            v43 = *(_QWORD *)(a5 + 96);
            v44 = *(_QWORD *)(a5 + 56);
            v45 = *(_DWORD *)(v43 + 1888);
            v46 = *(_WORD *)(v43 + 4);
            if ( !v44 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
              LODWORD(v44) = a5;
          }
          else
          {
            v45 = 0;
            LOBYTE(v46) = 0;
            LODWORD(v44) = 0;
          }
          McTemplateK0ppqqqPR4PR4_EtwWriteTransfer(
            v42,
            v44,
            v45,
            *(_QWORD *)(a2 + 16),
            v44,
            v46,
            v45,
            v42,
            *(_QWORD *)(a2 + 520),
            *(_QWORD *)(a2 + 568));
        }
        break;
      case 7:
        v137 = 0LL;
        if ( *(_DWORD *)(a7 + 88) == 1 )
        {
          v105 = *(_QWORD *)(a7 + 56);
          if ( v105 )
          {
            if ( *(_DWORD *)(v105 + 48) == 8 )
              v137 = *(_QWORD *)(v105 + 88);
          }
        }
        v70 = *(_QWORD *)(a7 + 48);
        v134 = v70;
        v71 = *(_DWORD *)(v70 + 992);
        if ( v71 >= 0x80 )
        {
          v72 = *(_QWORD *)(v70 + 1000);
          if ( v72 )
          {
            if ( (byte_14008A202 & 8) != 0 )
            {
              v114 = *(_QWORD *)(v70 + 56);
              if ( !v114 || (*(_DWORD *)(v70 + 112) & 0x40) != 0 )
                LODWORD(v114) = *(_QWORD *)(a7 + 48);
              McTemplateK0pqIR1_EtwWriteTransfer(v70, v72, v71, v114, v71, *(_QWORD *)(v70 + 1000));
              v70 = v134;
            }
            *(_DWORD *)(v70 + 992) = 0;
          }
        }
        if ( *(_QWORD *)(v70 + 1000)
          || (v120 = ExAllocatePool2(64LL, 1024LL, 1633773910LL), (*(_QWORD *)(v134 + 1000) = v120) != 0LL) )
        {
          *(LARGE_INTEGER *)(*(_QWORD *)(v134 + 1000) + 8LL * (unsigned int)(*(_DWORD *)(v134 + 992))++) = KeQueryPerformanceCounter(0LL);
        }
        else
        {
          WdLogSingleEntry0(1LL);
          v121 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
          WdLogGlobalForLineNumber = 462;
          v121(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to allocate GpuWorkRecords for long haul logging",
            462LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (byte_14008A201 & 1) != 0 )
        {
          v73 = *(_QWORD *)(a7 + 48);
          if ( v137 )
          {
            v74 = *(_QWORD *)(v137 + 56);
            if ( !v74 || (*(_DWORD *)(v137 + 112) & 0x40) != 0 )
              LODWORD(v74) = v137;
          }
          else
          {
            LODWORD(v74) = 0;
          }
          v75 = *(_QWORD *)(v73 + 56);
          if ( !v75 || (*(_DWORD *)(v73 + 112) & 0x40) != 0 )
            LODWORD(v75) = *(_QWORD *)(a7 + 48);
          McTemplateK0ppqxqpq_EtwWriteTransfer(
            v137,
            v73,
            v74,
            v75,
            v74,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            *(_QWORD *)(a7 + 64),
            *(_DWORD *)(v73 + 444));
        }
        break;
      case 8:
      case 10:
      case 12:
        LODWORD(v92) = 0;
        LOBYTE(v93) = 0;
        LOBYTE(v94) = 0;
        v95 = 0;
        switch ( v13 )
        {
          case 8:
            v95 = 1;
            break;
          case 10:
            v95 = 2;
            break;
          case 12:
            v92 = *(_QWORD *)(a8 + 40);
            v95 = 9;
            v93 = *(_DWORD *)(a8 + 32);
            v94 = *(_QWORD *)(a8 + 64);
            break;
        }
        if ( (byte_14008A201 & 1) != 0 )
        {
          v96 = *(_QWORD *)(a7 + 48);
          v132 = *(_DWORD *)(v96 + 444);
          v97 = *(_QWORD *)(v96 + 56);
          v98 = v132;
          if ( !v97 || (v98 = v132, (*(_DWORD *)(v96 + 112) & 0x40) != 0) )
            LODWORD(v97) = *(_QWORD *)(a7 + 48);
          McTemplateK0pqxqqqxqp_EtwWriteTransfer(
            v95,
            v97,
            v92,
            v97,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v95,
            v98,
            v92,
            v93,
            v94);
        }
        break;
      case 9:
      case 11:
      case 13:
        if ( a7 )
        {
          if ( (byte_14008A201 & 1) != 0 )
          {
            v86 = *(_QWORD *)(a7 + 48);
            v87 = *(_DWORD *)(a7 + 88);
            v88 = *(_QWORD *)(v86 + 56);
            if ( !v88 || (*(_DWORD *)(v86 + 112) & 0x40) != 0 )
              LODWORD(v88) = *(_QWORD *)(a7 + 48);
            McTemplateK0pqxqt_EtwWriteTransfer(
              v86,
              a7,
              v13 == 11,
              v88,
              v87,
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              v13 == 11);
          }
        }
        else
        {
          if ( !a6 )
            break;
          v14 = *(unsigned int *)(a6 + 48);
          if ( (_DWORD)v14 == 4 && v13 == 9 )
          {
            if ( (byte_14008A201 & 1) != 0 )
            {
              v84 = *(_QWORD *)(a6 + 88);
              if ( v84 )
              {
                v85 = *(_QWORD *)(v84 + 56);
                if ( !v85 || (*(_DWORD *)(v84 + 112) & 0x40) != 0 )
                  v85 = *(_QWORD *)(a6 + 88);
              }
              else
              {
                v85 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                if ( !v85 )
                  v85 = *(_QWORD *)(a6 + 96);
              }
              McTemplateK0pqqttp_EtwWriteTransfer(
                4,
                (*(_DWORD *)(a6 + 280) >> 1) & 1,
                v84,
                v85,
                4,
                *(_DWORD *)(a6 + 112),
                (*(_DWORD *)(a6 + 280) & 2) != 0);
            }
          }
          else if ( (byte_14008A201 & 1) != 0 )
          {
            v108 = *(_QWORD *)(a6 + 88);
            if ( v108 )
            {
              v109 = *(_QWORD *)(v108 + 56);
              if ( !v109 || (*(_DWORD *)(v108 + 112) & 0x40) != 0 )
                v109 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v109 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v109 )
                v109 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqqttp_EtwWriteTransfer(v14, v108, v13 == 11, v109, v14, *(_DWORD *)(a6 + 112), v13 == 11);
          }
          v15 = *(_DWORD *)(a6 + 48);
          if ( v15 )
          {
            if ( ((v15 - 3) & 0xFFFFFFFB) != 0 )
              break;
          }
          else if ( (*(_DWORD *)(a6 + 72) & 0x4000) == 0 )
          {
            break;
          }
          if ( (byte_14008A204 & 4) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, &EventPresentQueueComplete, v11, *(unsigned int *)(a6 + 112));
        }
        break;
      case 14:
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterWorkerThread, 0x140000000uLL, *(_QWORD *)(a2 + 16), 1);
        break;
      case 15:
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, 0x140000000uLL, *(_QWORD *)(a2 + 16), 1);
        break;
      case 16:
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterWorkerThread, 0x140000000uLL, *(_QWORD *)(a2 + 16), 3);
        break;
      case 17:
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, 0x140000000uLL, *(_QWORD *)(a2 + 16), 3);
        break;
      case 18:
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterWorkerThread, 0x140000000uLL, *(_QWORD *)(a2 + 16), 2);
        break;
      case 19:
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, 0x140000000uLL, *(_QWORD *)(a2 + 16), 2);
        break;
      case 20:
        if ( (*(_DWORD *)(a2 + 2824) & 8) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 412)] )
        {
          v54 = *(_QWORD *)(a5 + 448);
          if ( v54 <= 0 && (byte_14008A201 & 1) != 0 )
          {
            v55 = *(_QWORD *)(a5 + 56);
            if ( !v55 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
              LODWORD(v55) = a5;
            McTemplateK0qtpiixi_EtwWriteTransfer(
              v55,
              v54,
              *(_QWORD *)(a5 + 456),
              *(unsigned __int16 *)(a3 + 4),
              a8 != 0,
              v55,
              *(_QWORD *)(a5 + 480),
              v54,
              *(_QWORD *)(a5 + 472),
              *(_QWORD *)(a5 + 456));
          }
        }
        break;
      default:
        break;
    }
  }
LABEL_2:
  if ( *(int *)(a2 + 6720) >= 1 )
  {
    if ( v13 == 1 )
    {
      if ( (int)a8 < 0 )
      {
        v12 = -(int)a8;
      }
      else if ( (int)a8 >= 16 )
      {
        v12 = 1;
      }
      ++*(_DWORD *)(a3 + 2788);
      ++*(_DWORD *)(a3 + 4LL * v12 + 2788);
      v36 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v36 + 12) & 0x40) != 0 )
      {
        ++MEMORY[0xC];
        ++*(_DWORD *)(4LL * v12 + 0xC);
      }
      else
      {
        v37 = *(unsigned __int16 *)(v36 + 4);
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 48LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v36 + 24) + 4LL));
        v39 = *(__int64 **)(v38 + 8);
        if ( (unsigned int)v37 < *(_DWORD *)(v38 + 80) )
          v39 += v37;
        v40 = *v39;
        ++*(_DWORD *)(v40 + 12);
        ++*(_DWORD *)(v40 + 4LL * v12 + 12);
      }
    }
    else if ( v13 == 3 )
    {
      ++*(_DWORD *)(a3 + 2784);
      v16 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v16 + 12) & 0x40) == 0 )
      {
        v17 = *(unsigned __int16 *)(v16 + 4);
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 48LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 24) + 4LL));
        v19 = *(_QWORD *)(v18 + 8);
        if ( (unsigned int)v17 < *(_DWORD *)(v18 + 80) )
          v19 += 8 * v17;
        if ( *(_QWORD *)v19 )
          ++*(_DWORD *)(*(_QWORD *)v19 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 6720) >= 2 )
  {
    if ( v13 != 4 )
    {
      switch ( v13 )
      {
        case 7:
          ++*(_DWORD *)(16LL * *(int *)(a7 + 88) + a3 + 2924);
          v65 = *(_QWORD *)(a7 + 48);
          v66 = *(_QWORD *)(v65 + 96);
          if ( (*(_DWORD *)(v66 + 12) & 0x40) == 0 )
          {
            v67 = *(unsigned __int16 *)(v66 + 4);
            v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 104) + 48LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v66 + 24) + 4LL));
            v69 = *(__int64 **)(v68 + 8);
            if ( (unsigned int)v67 < *(_DWORD *)(v68 + 80) )
              v69 += v67;
            v9 = *v69;
          }
          ++*(_DWORD *)(16LL * *(int *)(a7 + 88) + v9 + 148);
          return;
        case 8:
          v99 = 16 * (*(int *)(a7 + 88) + 183LL);
          ++*(_DWORD *)(v99 + a3);
          v100 = *(_QWORD *)(a7 + 48);
          v101 = *(_QWORD *)(v100 + 96);
          if ( (*(_DWORD *)(v101 + 12) & 0x40) == 0 )
          {
            v102 = *(unsigned __int16 *)(v101 + 4);
            v103 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v100 + 104) + 48LL) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(v101 + 24) + 4LL));
            v104 = *(__int64 **)(v103 + 8);
            if ( (unsigned int)v102 < *(_DWORD *)(v103 + 80) )
              v104 += v102;
            v9 = *v104;
          }
          ++*(_DWORD *)(16LL * *(int *)(a7 + 88) + v9 + 152);
          return;
        case 9:
        case 11:
        case 13:
          if ( !a6 )
            return;
          ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2856);
          v30 = *(_QWORD *)(a6 + 96);
          if ( v30 )
          {
            v80 = *(_QWORD *)(v30 + 40);
            v81 = *(_QWORD *)(v80 + 16);
            v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) + 48LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v81 + 24) + 4LL));
            if ( !v82 )
            {
LABEL_50:
              if ( v9 )
                ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 80);
              return;
            }
            v83 = *(unsigned __int16 *)(v81 + 4);
            v35 = *(__int64 **)(v82 + 8);
            if ( (unsigned int)v83 < *(_DWORD *)(v82 + 80) )
              v35 += v83;
          }
          else
          {
            v31 = *(_QWORD *)(a6 + 88);
            v32 = *(_QWORD *)(v31 + 96);
            if ( (*(_DWORD *)(v32 + 12) & 0x40) != 0 )
              goto LABEL_50;
            v33 = *(unsigned __int16 *)(v32 + 4);
            v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 104) + 48LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v32 + 24) + 4LL));
            v35 = *(__int64 **)(v34 + 8);
            if ( (unsigned int)v33 < *(_DWORD *)(v34 + 80) )
              v35 += v33;
          }
          v9 = *v35;
          goto LABEL_50;
        case 10:
          ++*(_DWORD *)(16LL * *(int *)(a7 + 88) + a3 + 2932);
          v115 = *(_QWORD *)(a7 + 48);
          v116 = *(_QWORD *)(v115 + 96);
          if ( (*(_DWORD *)(v116 + 12) & 0x40) == 0 )
          {
            v117 = *(unsigned __int16 *)(v116 + 4);
            v118 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v115 + 104) + 48LL) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(v116 + 24) + 4LL));
            v119 = *(__int64 **)(v118 + 8);
            if ( (unsigned int)v117 < *(_DWORD *)(v118 + 80) )
              v119 += v117;
            v9 = *v119;
          }
          ++*(_DWORD *)(16LL * *(int *)(a7 + 88) + v9 + 156);
          return;
        case 12:
          ++*(_DWORD *)(16LL * *(int *)(a7 + 88) + a3 + 2936);
          v122 = *(_QWORD *)(a7 + 48);
          v123 = *(_QWORD *)(v122 + 96);
          if ( (*(_DWORD *)(v123 + 12) & 0x40) == 0 )
          {
            v124 = *(unsigned __int16 *)(v123 + 4);
            v125 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v122 + 104) + 48LL) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(v123 + 24) + 4LL));
            v126 = *(__int64 **)(v125 + 8);
            if ( (unsigned int)v124 < *(_DWORD *)(v125 + 80) )
              v126 += v124;
            v9 = *v126;
          }
          v127 = 16 * (*(int *)(a7 + 88) + 10LL);
          ++*(_DWORD *)(v127 + v9);
          return;
        default:
          return;
      }
    }
    ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2852);
    v24 = *(_QWORD *)(a6 + 96);
    if ( v24 )
    {
      v47 = *(_QWORD *)(v24 + 40);
      v48 = *(_QWORD *)(v47 + 16);
      v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) + 48LL) + 32LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(v48 + 24) + 4LL));
      if ( !v49 )
      {
LABEL_40:
        if ( v9 )
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 76);
        return;
      }
      v50 = *(unsigned __int16 *)(v48 + 4);
      v29 = *(__int64 **)(v49 + 8);
      if ( (unsigned int)v50 < *(_DWORD *)(v49 + 80) )
        v29 += v50;
    }
    else
    {
      v25 = *(_QWORD *)(a6 + 88);
      v26 = *(_QWORD *)(v25 + 96);
      if ( (*(_DWORD *)(v26 + 12) & 0x40) != 0 )
        goto LABEL_40;
      v27 = *(unsigned __int16 *)(v26 + 4);
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 104) + 48LL) + 32LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(v26 + 24) + 4LL));
      v29 = *(__int64 **)(v28 + 8);
      if ( (unsigned int)v27 < *(_DWORD *)(v28 + 80) )
        v29 += v27;
    }
    v9 = *v29;
    goto LABEL_40;
  }
}
