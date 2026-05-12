/*
 * XREFs of NvmeCompletionDpcRoutine @ 0x140030E20
 * Callers:
 *     NvmeStorMQCompletionDpcRoutine @ 0x140078AB0 (NvmeStorMQCompletionDpcRoutine.c)
 *     NvmeControllerIoPollingTimerCallback @ 0x1400F6D00 (NvmeControllerIoPollingTimerCallback.c)
 *     NvmeIoPollingDpcRoutine @ 0x14011A450 (NvmeIoPollingDpcRoutine.c)
 *     NvmeInvokeCompletionDpcRoutineAtDispatchLevel @ 0x14011FF64 (NvmeInvokeCompletionDpcRoutineAtDispatchLevel.c)
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     FreeNVMePrpListBufferEntry @ 0x140045980 (FreeNVMePrpListBufferEntry.c)
 *     NvmeControllerSendNonReadWriteCommand @ 0x14004CB10 (NvmeControllerSendNonReadWriteCommand.c)
 *     StorpTelemetryCollectNvmePerfData @ 0x140056700 (StorpTelemetryCollectNvmePerfData.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorpTelemetryCollectNvmeErrorData @ 0x1400BA2B8 (StorpTelemetryCollectNvmeErrorData.c)
 *     FreeNVMeSGLBufferContext @ 0x140119DA0 (FreeNVMeSGLBufferContext.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     StRtlIoStorInfoSetNvmeStatus @ 0x1401306D8 (StRtlIoStorInfoSetNvmeStatus.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeCompletionDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        volatile signed __int32 *SystemArgument1,
        _QWORD **SystemArgument2)
{
  _DWORD *v4; // r13
  volatile signed __int32 *v5; // r15
  char v6; // di
  char v7; // r14
  ULONG CurrentProcessorNumber; // eax
  _WORD *v9; // r9
  __int64 v10; // r12
  __int16 v11; // di
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r11
  int v15; // ecx
  unsigned int v16; // r10d
  __int64 v17; // r14
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  PIRP v25; // r15
  signed __int32 v26; // edi
  IRP *v27; // r12
  int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rcx
  IRP *v31; // rbx
  bool v32; // zf
  bool v33; // si
  __int16 v34; // bx
  _DWORD *v35; // rdi
  unsigned int v36; // ecx
  int v37; // r12d
  __int64 Namespace; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rcx
  _DWORD *v48; // r14
  __int64 v49; // rbx
  int v50; // r15d
  __int64 v51; // rdi
  unsigned int v52; // eax
  IRP *v53; // r8
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // r11d
  IRP *v58; // rbx
  PIRP v59; // r10
  _LARGE_INTEGER v60; // r15
  signed __int32 v61; // r13d
  __int64 v62; // r14
  int v63; // edi
  unsigned __int64 v64; // rax
  char v65; // al
  __int64 v66; // rax
  _DWORD *v67; // r13
  IRP *v68; // r14
  unsigned __int64 v69; // rcx
  __int64 v70; // rsi
  unsigned int v71; // edx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // edx
  unsigned int v76; // ecx
  __int64 v77; // rdx
  unsigned int v78; // ecx
  unsigned int v79; // edx
  unsigned __int64 v80; // rsi
  signed __int32 v81; // ecx
  _QWORD *v82; // rcx
  __int128 v83; // xmm1
  _LARGE_INTEGER ByteOffset; // r13
  _QWORD *v85; // rbx
  __int64 v86; // rdi
  unsigned __int8 v87; // si
  KIRQL v88; // al
  __int64 v89; // rcx
  __int64 v90; // r8
  _LARGE_INTEGER v91; // rdx
  __int64 v92; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v94; // rbx
  int MajorFunction; // ecx
  __int64 v96; // rax
  ULONG64 v97; // rax
  bool v98; // sf
  int v99; // edx
  _IO_STACK_LOCATION *v100; // rcx
  unsigned __int8 v101; // al
  int *Information; // rax
  int v103; // ecx
  _IO_SECURITY_CONTEXT *SecurityContext; // r10
  _ACCESS_STATE *v105; // rdx
  char v106; // r12
  unsigned __int8 v107; // bl
  char v108; // r13
  char Flags; // di
  char LowPart_high; // r11
  unsigned __int8 *v111; // rdi
  unsigned int AccessState; // esi
  unsigned int v113; // r11d
  __int64 v114; // rcx
  unsigned __int64 DesiredAccess; // r9
  __int64 v116; // r8
  int v117; // ecx
  int v118; // ecx
  unsigned __int64 v119; // rcx
  char v120; // r9
  char v121; // al
  char v122; // r8
  char *v123; // r8
  unsigned int v124; // eax
  unsigned __int8 v125; // di
  __int64 v126; // rbx
  KIRQL v127; // al
  __int64 v128; // r9
  __int64 v129; // rcx
  PIRP v130; // r14
  _LIST_ENTRY *Blink; // rax
  __int64 v132; // rbx
  __int64 v133; // rcx
  __int64 v134; // rbx
  unsigned int v135; // eax
  __int64 v136; // r15
  KIRQL v137; // di
  __int64 v138; // r9
  signed __int32 v139; // r8d
  __int64 v140; // r14
  unsigned int v141; // edx
  unsigned int v142; // r8d
  unsigned int v143; // edx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rax
  int v151; // edi
  int v152; // eax
  __int64 v153; // rax
  unsigned int v154; // eax
  char v155; // al
  __int64 v156; // r9
  signed __int32 v157; // r8d
  __int64 v158; // r13
  unsigned int v159; // edx
  unsigned int v160; // r8d
  unsigned int v161; // edx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  int v167; // r12d
  unsigned int v168; // eax
  __int64 v169; // rax
  unsigned int v170; // eax
  unsigned int v171; // eax
  signed __int32 v172[8]; // [rsp+0h] [rbp-120h] BYREF
  __int64 v173; // [rsp+20h] [rbp-100h]
  __int64 v174; // [rsp+98h] [rbp-88h]
  IRP *v175; // [rsp+A0h] [rbp-80h]
  KIRQL v176; // [rsp+A8h] [rbp-78h]
  unsigned int v177; // [rsp+ACh] [rbp-74h]
  __int64 v178; // [rsp+B0h] [rbp-70h]
  KIRQL v179; // [rsp+B8h] [rbp-68h]
  char v180; // [rsp+B9h] [rbp-67h]
  __int16 v181; // [rsp+BAh] [rbp-66h]
  _QWORD **v182; // [rsp+C0h] [rbp-60h]
  PIRP Irp; // [rsp+C8h] [rbp-58h]
  _DWORD *v184; // [rsp+D0h] [rbp-50h]
  unsigned int v185; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int16 v186; // [rsp+DCh] [rbp-44h]
  volatile signed __int32 *v187; // [rsp+E0h] [rbp-40h]
  ULONG v188; // [rsp+E8h] [rbp-38h]
  signed __int32 v189; // [rsp+ECh] [rbp-34h]
  __int64 v190; // [rsp+F0h] [rbp-30h]
  __int64 v191; // [rsp+F8h] [rbp-28h] BYREF
  IRP *v192; // [rsp+100h] [rbp-20h]
  PVOID v193; // [rsp+108h] [rbp-18h]
  unsigned __int64 QpcTimeStamp; // [rsp+110h] [rbp-10h] BYREF
  __int128 v195; // [rsp+118h] [rbp-8h] BYREF
  __int128 v196; // [rsp+128h] [rbp+8h]

  v182 = SystemArgument2;
  v187 = SystemArgument1;
  v4 = SystemArgument2;
  v193 = DeferredContext;
  v5 = SystemArgument1;
  v185 = 0;
  v6 = (char)DeferredContext;
  v181 = 0;
  v189 = 0;
  v191 = 0LL;
  v190 = 0LL;
  if ( !SystemArgument2 || !SystemArgument1 )
    return;
  while ( _InterlockedCompareExchange(SystemArgument1 + 10, 1, 0) )
    ;
  if ( _InterlockedCompareExchange(SystemArgument1 + 11, 1, 0) )
  {
    _InterlockedExchange(SystemArgument1 + 10, 0);
    goto LABEL_42;
  }
  _InterlockedOr(v172, 0);
  _InterlockedExchange(SystemArgument1 + 10, 0);
  _InterlockedOr(v172, 0);
  if ( *SystemArgument2[161] == 1LL )
    goto LABEL_99;
  v7 = *((_BYTE *)SystemArgument2 + 1728);
  v184 = (_DWORD *)(16LL * *((unsigned __int16 *)SystemArgument1 + 17) + *(_QWORD *)SystemArgument1);
  v180 = v7;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v9 = v184;
  v188 = CurrentProcessorNumber;
  while ( 1 )
  {
    if ( (v9[7] & 1) == *((_WORD *)v5 + 18) )
    {
LABEL_40:
      v34 = v181;
      goto LABEL_41;
    }
    v10 = (unsigned __int16)v9[5];
    v11 = v9[4];
    v12 = (unsigned __int16)v9[6];
    v13 = (unsigned __int16)v9[7];
    v186 = v9[6];
    v14 = (_WORD)v10 ? 192 * v10 + *((_QWORD *)v4 + 91) - 192LL : *((_QWORD *)v4 + 89);
    v15 = *(_DWORD *)(v14 + 124);
    v178 = v14;
    v16 = v15 - 1;
    v177 = v15 - 1;
    if ( (unsigned int)v12 >= v15 - 1 )
      break;
    v17 = v12 << 7;
    *(_BYTE *)(*(_QWORD *)(v14 + 32) + (v12 << 7) + 60) &= ~1u;
    if ( (*(_BYTE *)((v12 << 7) + *(_QWORD *)(v14 + 32) + 60) & 8) != 0
      || (*(_BYTE *)(*(_QWORD *)(v14 + 32) + v17 + 60) & 2) != 0 )
    {
      v18 = 0;
      Irp = 0LL;
    }
    else
    {
      v18 = 0;
      Irp = *(PIRP *)(*(_QWORD *)(v14 + 32) + v17 + 24);
    }
    v19 = *(_QWORD *)(v14 + 32);
    v20 = *(_QWORD *)(v19 + v17 + 16);
    if ( v20 )
    {
      *(_QWORD *)(v19 + v17 + 16) = 0LL;
      FreeNVMePrpListBufferEntry(v4, *(unsigned __int16 *)(*(_QWORD *)(v14 + 32) + v17 + 52), v20);
      v16 = v177;
      v14 = v178;
    }
    *(_WORD *)(v14 + 140) = v11;
    if ( (((unsigned int)v13 >> 9) & 7) != 0 )
    {
      if ( (((unsigned int)v13 >> 9) & 7) == 1 )
      {
        switch ( (unsigned __int8)((unsigned int)v13 >> 1) )
        {
          case 0u:
          case 1u:
          case 2u:
          case 3u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x1Cu:
          case 0x1Fu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x80u:
          case 0x81u:
          case 0x83u:
            goto LABEL_46;
          case 0xBu:
          case 0x10u:
          case 0x11u:
            v22 = 2147484086LL;
            break;
          case 0x12u:
          case 0x13u:
          case 0x16u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
LABEL_128:
            v22 = 3221225860LL;
            break;
          case 0x14u:
            v22 = 3221225496LL;
            break;
          case 0x1Bu:
            v22 = 3221225659LL;
            break;
          case 0x1Eu:
          case 0x82u:
            goto LABEL_121;
          default:
            goto LABEL_120;
        }
      }
      else if ( (((unsigned int)v13 >> 9) & 7) == 2 )
      {
        if ( (unsigned __int8)((unsigned int)v13 >> 1) != 134 )
          JUMPOUT(0x14014805ALL);
LABEL_121:
        v22 = 3221225506LL;
      }
      else
      {
LABEL_120:
        v22 = 3221225861LL;
      }
    }
    else
    {
      v21 = (unsigned int)v13 >> 1;
      if ( (unsigned __int8)((unsigned int)v13 >> 1) )
      {
        if ( (unsigned __int8)v21 == 2 )
        {
LABEL_46:
          v22 = 3221225488LL;
        }
        else
        {
          switch ( (char)v21 )
          {
            case 1:
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 22:
            case 24:
            case 30:
            case -128:
            case -127:
            case -125:
              goto LABEL_46;
            case 5:
            case 6:
            case 20:
              goto LABEL_128;
            case 7:
            case 8:
            case 9:
            case 10:
            case 27:
              v22 = 3221226048LL;
              break;
            case 12:
              v22 = 3221226538LL;
              break;
            case 21:
              goto LABEL_121;
            case 25:
            case 26:
              v22 = 3221225653LL;
              break;
            case -126:
              v22 = 3221225635LL;
              break;
            default:
              goto LABEL_120;
          }
        }
      }
      else
      {
        v22 = 0LL;
      }
    }
    v23 = *(_QWORD *)(v14 + 32);
    LODWORD(v175) = v22;
    if ( (*(_BYTE *)(v23 + v17 + 61) & 1) != 0
      && !_InterlockedCompareExchange(
            (volatile signed __int32 *)(*(_QWORD *)_InterlockedExchange64(
                                                     (volatile __int64 *)(*(_QWORD *)(v14 + 32) + v17 + 72),
                                                     0LL)
                                      + 4268LL),
            1,
            0) )
    {
      v72 = *((_QWORD *)v4 + 16);
      v73 = *(_QWORD *)(v72 + 160);
      if ( *(_BYTE *)v73 == 1
        && _InterlockedExchangeAdd(
             *(volatile signed __int32 **)(*(_QWORD *)(v73 + 16)
                                         + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v14 + 32) + v17 + 52)),
             0xFFFFFFFF) == 1 )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v72 + 160) + 8LL), 0LL, 2LL);
        v16 = v177;
        v14 = v178;
      }
      v22 = (unsigned int)v175;
    }
    v24 = *(_QWORD *)(v14 + 32);
    if ( *(_QWORD *)(v24 + v17 + 32) )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD, _DWORD *))(v24 + v17 + 32))(v4, *(_QWORD *)(v24 + v17 + 40), v184);
      v16 = v177;
      v22 = (unsigned int)v175;
      v14 = v178;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 32) + v17 + 60) & 0x20) != 0 && !_interlockedbittestandset(v4 + 268, 6u) )
    {
      IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 130), NvmeControllerRestartRoutine, DelayedWorkQueue, v4);
      v16 = v177;
      v22 = (unsigned int)v175;
      v14 = v178;
    }
    v25 = Irp;
    if ( !Irp )
    {
      v26 = (int)v175;
      v27 = 0LL;
      goto LABEL_25;
    }
    if ( (int)v22 < 0 )
    {
      Irp->IoStatus.Information = 0LL;
      StRtlIoStorInfoSetNvmeStatus(v25, (unsigned __int16)v13);
      v174 = v13;
      v74 = *(_QWORD *)(*(_QWORD *)(v178 + 24) + 16LL * *(unsigned __int16 *)(*(_QWORD *)(v178 + 32) + v17 + 56));
      StorEtwNvmeControllerEvent(
        (_DWORD)v4,
        1,
        2,
        (unsigned int)L"NVMe command failed",
        (__int64)L"CDW0",
        *(_DWORD *)v74,
        (__int64)L"NSID",
        *(_DWORD *)(v74 + 4),
        (__int64)L"CDW10|CDW11",
        *(_QWORD *)(v74 + 40),
        (__int64)L"CDW12|CDW13",
        *(_QWORD *)(v74 + 48),
        (__int64)L"CDW14|CDW15",
        *(_QWORD *)(v74 + 56),
        (__int64)L"SQ ID",
        v10,
        (__int64)L"Irp",
        (char)v25,
        (__int64)L"Command status",
        v13);
      v14 = v178;
    }
    else
    {
      Irp->IoStatus.Information = *(unsigned int *)(*(_QWORD *)(v14 + 32) + v17 + 48);
    }
    v35 = *(_DWORD **)(*(_QWORD *)(v14 + 24) + 16LL * *(unsigned __int16 *)(*(_QWORD *)(v14 + 32) + v17 + 56));
    if ( (v4[340] & 2) != 0 )
    {
      v75 = v184[1];
      v76 = *v184;
      v32 = *v4 == 1314276178;
      *(_DWORD *)((char *)&v196 + 10) = 0;
      HIWORD(v196) = 0;
      LOWORD(v195) = v10;
      WORD1(v195) = *((_WORD *)v187 + 16);
      DWORD1(v195) = *v35;
      *((_QWORD *)&v195 + 1) = v25;
      *(_QWORD *)&v196 = __PAIR64__(v75, v76);
      WORD4(v196) = v13;
      if ( v32 )
      {
        v77 = *(_QWORD *)(*((_QWORD *)v4 + 171) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
        v78 = *(_DWORD *)(v77 + 12);
        v22 = v77 + 64;
        _InterlockedOr(v172, 0);
        if ( v78 && v77 != -64 )
        {
          v79 = _InterlockedIncrement((volatile signed __int32 *)v77) % v78;
          v80 = v22 + ((unsigned __int64)v79 << 6);
          v81 = v79;
          if ( (v4[334] & 1) != 0 )
            v81 = _InterlockedIncrement(v4 + 352);
          *(_DWORD *)(v80 + 4) = v81;
          *(_WORD *)v80 = 1;
          v82 = (_QWORD *)(v80 + 8);
          *(_WORD *)(v80 + 2) = (_WORD)v10 != 0;
          if ( (v4[334] & 2) != 0 )
            KeQuerySystemTimePrecise(v82);
          else
            *v82 = MEMORY[0xFFFFF78000000014];
          v83 = v196;
          *(_OWORD *)(v80 + 16) = v195;
          *(_OWORD *)(v80 + 32) = v83;
          v18 = 0;
        }
        v14 = v178;
      }
    }
    v36 = (unsigned __int8)*v35;
    if ( v36 == 2 || v36 <= 0x19 && (v43 = 33554738, _bittest(&v43, v36)) )
    {
      v37 = 1;
    }
    else
    {
      v37 = 0;
      if ( (v36 != 9 || (v35[11] & 4) == 0) && (unsigned __int8)*v35 )
        goto LABEL_57;
    }
    Namespace = NvmeControllerGetNamespace(v4, *(unsigned int *)(*(_QWORD *)(v14 + 32) + v17 + 80), v22, 1LL);
    v190 = Namespace;
    v39 = Namespace;
    if ( Namespace )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Namespace + 608) + 4LL) & 1) != 0 )
      {
        StorpTelemetryCollectNvmePerfData(v17 + *(_QWORD *)(v178 + 32), (_DWORD)v35, Namespace, (_DWORD)v175, v188);
        v39 = v190;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v39 + 608) + 4LL) & 2) != 0 && (v13 & 0x1FE) != 0 )
        StorpTelemetryCollectNvmeErrorData(v17 + *(_QWORD *)(v178 + 32), v39, v35, v184);
    }
    v14 = v178;
LABEL_57:
    if ( *(char *)(*(_QWORD *)(v14 + 32) + v17 + 60) < 0 )
    {
      ByteOffset = v25->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset;
      v85 = v182[16];
      v86 = *(_QWORD *)(ByteOffset.QuadPart + 24);
      v87 = *(_BYTE *)(ByteOffset.QuadPart + 126) & 1;
      v88 = KfRaiseIrql(2u);
      v89 = v85[145];
      v176 = v88;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v89 + 8) + 96LL))(v89, v86, v87 ^ 1u);
      if ( v176 < 2u )
        KeLowerIrql(v176);
      v91 = ByteOffset;
      LOBYTE(v90) = 1;
      v4 = v182;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))FreeNVMeSGLBufferContext)(v182, (_LARGE_INTEGER)v91.QuadPart, v90);
      v18 = 0;
    }
    if ( (int)IoGetIoAttributionHandle(v25, &v191) >= 0 )
    {
      v92 = *(_QWORD *)(*(_QWORD *)(v178 + 32) + v17 + 64);
      CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
      v94 = v191;
      v195 = 0LL;
      QpcTimeStamp = 0LL;
      v196 = 0LL;
      LODWORD(v195) = 1;
      MajorFunction = CurrentStackLocation->MajorFunction;
      *(_QWORD *)&v196 = v92;
      v96 = *(_QWORD *)(v178 + 32);
      DWORD1(v195) = MajorFunction;
      DWORD2(v195) = *(_DWORD *)(v96 + v17 + 48);
      v97 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v98 = v25->IoStatus.Status < 0;
      *((_QWORD *)&v196 + 1) = v97;
      if ( v98 )
        DWORD1(v195) |= 0x400u;
      IoRecordIoAttribution(v94, &v195);
    }
    v40 = v188;
    v26 = (int)v175;
    v41 = *(unsigned __int16 *)(*(_QWORD *)(v178 + 32) + v17 + 52);
    if ( (_DWORD)v41 != v188 )
    {
      v42 = *(_QWORD *)(*((_QWORD *)v4 + 138) + 8 * v41);
      v25->IoStatus.Status = (int)v175;
      if ( v37 )
        v25->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = v190;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(v42 + 192),
        (PSLIST_ENTRY)(((unsigned __int64)&v25->Tail.Overlay.DriverContext[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL));
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v42 + 256), 1, 0) )
        KeInsertQueueDpc(*(PRKDPC *)(v42 + 24), (PVOID)v42, 0LL);
LABEL_64:
      v27 = 0LL;
LABEL_65:
      v16 = v177;
      v14 = v178;
      goto LABEL_25;
    }
    v25->IoStatus.Status = (int)v175;
    if ( !v37 )
    {
      v32 = StorEtwLoggingEnabled == 0;
      *((_BYTE *)&v25->Tail.CompletionKey + 21) = -84;
      if ( !v32 )
      {
        v195 = 0LL;
        IoGetActivityIdIrp(v25, &v195);
        v100 = v25->Tail.Overlay.CurrentStackLocation;
        v101 = v100->MajorFunction;
        if ( v100->MajorFunction == 15 )
        {
          if ( byte_140173441 < 0 )
          {
            SecurityContext = v100->Parameters.Create.SecurityContext;
            v105 = 0LL;
            LOBYTE(v18) = 0;
            v106 = 0;
            v107 = 0;
            LODWORD(Irp) = v18;
            v108 = 0;
            Flags = 0;
            LowPart_high = 0;
            if ( BYTE2(SecurityContext->SecurityQos) == 40 )
            {
              v111 = 0LL;
              if ( SecurityContext->FullCreateOptions )
                goto LABEL_220;
              AccessState = (unsigned int)SecurityContext[2].AccessState;
              v113 = 0;
              if ( !AccessState )
                goto LABEL_220;
              while ( 1 )
              {
                v114 = *((unsigned int *)&SecurityContext[5].SecurityQos + v113);
                if ( (unsigned int)v114 >= 0x80 )
                {
                  DesiredAccess = SecurityContext->DesiredAccess;
                  if ( (unsigned int)v114 < (unsigned int)DesiredAccess )
                  {
                    v116 = (unsigned int)v114;
                    v117 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v114);
                    if ( v117 == 64 )
                    {
                      if ( v116 + 40 <= DesiredAccess )
                      {
                        if ( !*((_BYTE *)&SecurityContext->AccessState + v116 + 2) )
                          goto LABEL_186;
LABEL_185:
                        v111 = (unsigned __int8 *)&SecurityContext[1] + v116;
LABEL_186:
                        v105 = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + v116);
                        goto LABEL_187;
                      }
                    }
                    else
                    {
                      v118 = v117 - 65;
                      if ( v118 )
                      {
                        if ( v118 == 1 && v116 + 40 <= DesiredAccess )
                        {
                          if ( *(_DWORD *)((char *)&SecurityContext->AccessState + v116 + 4) )
                            v111 = (unsigned __int8 *)&SecurityContext[1].AccessState + v116;
                          v105 = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + v116);
LABEL_187:
                          v106 = *((_BYTE *)&SecurityContext->AccessState + v116);
                          v107 = *((_BYTE *)&SecurityContext->AccessState + v116 + 1);
LABEL_188:
                          if ( v111 )
                          {
                            LODWORD(v119) = *v111;
                            LowPart_high = 0;
                            LOBYTE(v18) = (_BYTE)Irp;
                            Flags = 0;
                            goto LABEL_196;
                          }
                          goto LABEL_220;
                        }
                      }
                      else if ( v116 + 56 <= DesiredAccess )
                      {
                        if ( *((_BYTE *)&SecurityContext->AccessState + v116 + 2) )
                          goto LABEL_185;
                        goto LABEL_186;
                      }
                    }
                  }
                }
                if ( ++v113 >= AccessState )
                  goto LABEL_188;
              }
            }
            LODWORD(v119) = LOBYTE(SecurityContext[3].SecurityQos);
            v105 = SecurityContext[1].AccessState;
            v107 = BYTE3(SecurityContext->AccessState);
            v106 = BYTE4(SecurityContext->SecurityQos);
            if ( BYTE2(SecurityContext->SecurityQos) )
              goto LABEL_220;
LABEL_196:
            LOBYTE(v119) = v119 - 8;
            if ( (v119 & 0x5D) == 0 )
            {
              v120 = BYTE3(SecurityContext->SecurityQos);
              if ( v120 != 1 && v105 && v107 )
              {
                v121 = v105->OperationID.LowPart & 0x7F;
                if ( v121 == 114 || v121 == 115 )
                {
                  v119 = (unsigned __int64)v105 + v107;
                  v122 = 0;
                  if ( (unsigned __int64)&v105->SecurityEvaluated <= v119 )
                  {
                    Flags = BYTE2(v105->OperationID.LowPart);
                    v108 = BYTE1(v105->OperationID.LowPart) & 0xF;
                    LowPart_high = HIBYTE(v105->OperationID.LowPart);
                    goto LABEL_213;
                  }
                }
                else
                {
                  v119 = (unsigned __int64)v105 + v107;
                  v122 = 0;
                  if ( (unsigned __int64)&v105->SecurityEvaluated <= v119 )
                  {
                    v123 = (char *)&v105->Flags + 1;
                    v108 = BYTE2(v105->OperationID.LowPart) & 0xF;
                    v124 = v107;
                    if ( (unsigned int)HIBYTE(v105->OperationID.HighPart) + 8 <= v107 )
                      v124 = HIBYTE(v105->OperationID.HighPart) + 8;
                    v119 = (unsigned __int64)v105 + v124;
                    if ( (unsigned __int64)v123 > v119 )
                      Flags = 0;
                    else
                      Flags = v105->Flags;
                    if ( (unsigned __int64)&v105->Flags + 2 > v119 )
                      LowPart_high = 0;
                    else
                      LowPart_high = *v123;
LABEL_213:
                    v122 = 1;
                  }
                }
                if ( v122 )
                  LOBYTE(v18) = 1;
              }
              if ( byte_140173441 < 0 )
              {
                if ( !(_BYTE)v18 )
                {
                  LowPart_high = 0;
                  Flags = 0;
                  v108 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  v119,
                  (_DWORD)v105,
                  (unsigned int)&v195,
                  (_DWORD)v25,
                  v25->IoStatus.Status,
                  v120,
                  v106,
                  v108,
                  Flags,
                  LowPart_high,
                  (char)v25);
              }
            }
LABEL_220:
            v26 = (int)v175;
            v4 = v182;
          }
        }
        else if ( v101 == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v100, &EventNonReadWriteRequestComplete, &v195, v25, v25->IoStatus.Status);
        }
        else if ( v101 == 27 )
        {
          if ( v100->MinorFunction != 7 || v100->Parameters.Read.Length )
          {
            if ( (byte_140173442 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v100, &EventPnpRequestComplete, &v195, v25, v25->IoStatus.Status);
          }
          else if ( (byte_140173442 & 0x40) != 0 )
          {
            Information = (int *)v25->IoStatus.Information;
            v27 = 0LL;
            if ( Information )
              v103 = *Information;
            else
              v103 = 0;
            McTemplateK0pqd_EtwWriteTransfer(v103, v99, (unsigned int)&v195, (_DWORD)v25, v103, v25->IoStatus.Status);
            goto LABEL_222;
          }
        }
      }
      v27 = 0LL;
LABEL_222:
      IofCompleteRequest(v25, 0);
      goto LABEL_65;
    }
    IofCompleteRequest(v25, 0);
    v44 = v190;
    v45 = *(_QWORD *)(v190 + 128);
    if ( *(_BYTE *)v45
      || _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v45 + 24) + 8 * v40), 0xFFFFFFFF) != 1 )
    {
      goto LABEL_64;
    }
    v46 = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 128LL);
    if ( (unsigned __int8)NvmeNamespaceCheckAndAcquirePoFx(v44) )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v44 + 128) + 8LL), 0LL, 2LL);
      NvmeNamespaceReleasePoFx(v44);
    }
    v47 = *(_QWORD *)(v46 + 160);
    if ( *(_BYTE *)v47 != 1 )
      goto LABEL_64;
    PoFxIdleComponent(**(_QWORD **)(v47 + 8), 0LL, 2LL);
    v16 = v177;
    v27 = 0LL;
    v14 = v178;
LABEL_25:
    _InterlockedOr(v172, 0);
    v5 = v187;
    while ( _InterlockedCompareExchange(v5 + 10, 1, 0) )
      ;
    v28 = *((unsigned __int16 *)v5 + 17);
    if ( v28 == v16 )
    {
      *((_WORD *)v5 + 18) = *((_WORD *)v5 + 18) != 1;
      *((_WORD *)v5 + 17) = 0;
    }
    else
    {
      *((_WORD *)v5 + 17) = v28 + 1;
    }
    v9 = (_WORD *)(*(_QWORD *)v5 + 16LL * *((unsigned __int16 *)v5 + 17));
    v184 = v9;
    if ( (v9[7] & 1) == *((_WORD *)v5 + 18) )
    {
      v29 = *((unsigned __int16 *)v5 + 17) | v185 & 0xFFFF0000;
      v185 = v29;
      if ( v180 == 1 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(*((_QWORD *)v4 + 16) + 528LL))(
          *((_QWORD *)v4 + 206) + 64LL,
          *((unsigned int *)v5 + 4),
          4LL,
          0LL,
          &v185);
        v14 = v178;
        v9 = v184;
      }
      else
      {
        **((_DWORD **)v5 + 2) = v29;
        _InterlockedOr(v172, 0);
      }
      v189 = _InterlockedCompareExchange(v5 + 11, 0, 1);
    }
    _InterlockedCompareExchange(v5 + 10, 0, 1);
    _InterlockedOr(v172, 0);
    v30 = *(_QWORD *)(v14 + 32);
    ++v181;
    v31 = (IRP *)(v17 + v30 + 54);
    v32 = v4[237] == 0;
    v175 = v31;
    if ( !v32 )
    {
      if ( **((_DWORD **)v4 + 161) == 1 && !*(_DWORD *)(*((_QWORD *)v4 + 161) + 4LL) )
        goto LABEL_39;
LABEL_108:
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(v14 + 64),
        (PSLIST_ENTRY)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)v186 << 7)));
      v9 = v184;
      goto LABEL_39;
    }
    if ( *(_WORD *)(v14 + 136) )
    {
      v33 = 0;
      if ( (*(_BYTE *)(((unsigned __int64)(unsigned __int16)v31->Type << 7) + v30 + 60) & 8) != 0 )
      {
        v54 = *(_QWORD *)(v14 + 32);
        v55 = (unsigned __int64)(unsigned __int16)v31->Type << 7;
        v56 = *(_QWORD *)(v55 + v54 + 40);
        v57 = *(unsigned __int16 *)(v55 + v54 + 52);
        v177 = v57;
        v58 = *(IRP **)(v56 + 24);
        v59 = *(PIRP *)(v56 + 16);
        Irp = v59;
        v192 = v58;
        v60 = v58->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset;
        v61 = *(unsigned __int16 *)(v60.QuadPart + 32);
        _InterlockedExchange((volatile __int32 *)(v56 + 104), 5);
        *(_DWORD *)(v56 + 112) = v26;
        if ( v26 < 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v60.QuadPart + 112), v26, 0);
        v62 = _InterlockedExchange64((volatile __int64 *)(v56 + 88), 0LL);
        if ( v62 )
        {
          *(_QWORD *)&v195 = *(_QWORD *)(v62 + 24);
          if ( (_QWORD)v195 )
          {
            v125 = *(_BYTE *)(v62 + 126) & 1;
            v126 = *(_QWORD *)(*(_QWORD *)&v59->Flags + 128LL);
            v127 = KfRaiseIrql(2u);
            v128 = *(_QWORD *)(v126 + 1160);
            v179 = v127;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v128 + 8) + 96LL))(v128, v195, v125 ^ 1u);
            if ( v179 < 2u )
              KeLowerIrql(v179);
            v59 = Irp;
            v58 = v192;
          }
          v129 = *(_QWORD *)&v59->Flags;
          *(_QWORD *)(v62 + 24) = 0LL;
          *(_QWORD *)(v62 + 88) = 0LL;
          *(_BYTE *)(v62 + 126) = 0;
          ExpInterlockedPushEntrySList(
            *(PSLIST_HEADER *)(*(_QWORD *)(v129 + 896) + 8LL * *(unsigned int *)(v62 + 120)),
            (PSLIST_ENTRY)v62);
          v59 = Irp;
          v57 = v177;
          v9 = v184;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)(v60.QuadPart + 116)) >= v61 )
        {
          v63 = *(_DWORD *)(v60.QuadPart + 112);
          if ( v63 < 0 )
            v64 = 0LL;
          else
            v64 = *(unsigned int *)(v60.QuadPart + 48);
          v58->IoStatus.Information = v64;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FreeNVMeChainedIoSplitContext)(
            *(_QWORD *)&v59->Flags,
            v57,
            (_LARGE_INTEGER)v60.QuadPart,
            v58);
          v58->IoStatus.Status = v63;
          IofCompleteRequest(v58, 0);
          v130 = Irp;
          Blink = Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
          if ( !LOBYTE(Blink->Flink)
            && _InterlockedExchangeAdd(*((volatile signed __int32 **)&Blink[1].Blink->Flink + v177), 0xFFFFFFFF) == 1 )
          {
            v132 = *(_QWORD *)(*(_QWORD *)&v130->Flags + 128LL);
            if ( (unsigned __int8)NvmeNamespaceCheckAndAcquirePoFx(v130) )
            {
              PoFxIdleComponent(v130->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink->Blink->Flink, 0LL, 2LL);
              NvmeNamespaceReleasePoFx(v130);
            }
            v133 = *(_QWORD *)(v132 + 160);
            if ( *(_BYTE *)v133 == 1 )
              PoFxIdleComponent(**(_QWORD **)(v133 + 8), 0LL, 2LL);
          }
          v4 = v182;
          v5 = v187;
          v14 = v178;
          v9 = v184;
          if ( v63 == 259 )
          {
            v33 = 1;
            goto LABEL_38;
          }
        }
        else
        {
          v4 = v182;
          v5 = v187;
          v14 = v178;
        }
        v31 = v175;
      }
      if ( v4[238] )
      {
        v65 = NvmeProcessPendingIoInCompletionDpc(v4, v14, v22, v31);
        v14 = v178;
        v33 = v65;
        v9 = v184;
      }
      else if ( v4[240] )
      {
        v66 = *(_QWORD *)(v14 + 32);
        v67 = g_CpuInfo;
        v68 = v175;
        v69 = (unsigned __int64)(unsigned __int16)v31->Type << 7;
        v70 = *(unsigned __int16 *)(v69 + v66 + 52);
        v71 = *(unsigned __int16 *)(v69 + v66 + 52);
        v177 = v71;
        while ( 2 )
        {
          while ( 1 )
          {
            v134 = v182[128][v70 + 3];
            if ( *(_DWORD *)v134 || *(_DWORD *)(v134 + 48) != *(_DWORD *)(v134 + 52) )
              break;
            v135 = v70 + 1;
            v70 = 0LL;
            if ( v135 < v67[2] )
              v70 = v135;
            if ( v71 == (_DWORD)v70 )
              goto LABEL_290;
          }
          v136 = 0LL;
          v137 = KfRaiseIrql(2u);
          do
          {
            v138 = *(unsigned int *)(v134 + 52);
            if ( (_DWORD)v138 == *(_DWORD *)(v134 + 48) )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)v134, 0, 1) == 1 )
              {
                v153 = *(_QWORD *)(v134 + 24);
                if ( *(_BYTE *)(*(_QWORD *)(v134 + 16) + 20LL) == 1 )
                  _InterlockedDecrement((volatile signed __int32 *)(v153 + 956));
                else
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v153 + 16) + 952LL));
              }
              KeLowerIrql(v137);
              goto LABEL_286;
            }
            v139 = 0;
            if ( (unsigned int)(v138 + 1) < *(_DWORD *)(*(_QWORD *)(v134 + 16) + 4LL) )
              v139 = v138 + 1;
          }
          while ( (_DWORD)v138 != _InterlockedCompareExchange((volatile signed __int32 *)(v134 + 52), v139, v138) );
          do
            v140 = _InterlockedExchange64((volatile __int64 *)(8 * v138 + *(_QWORD *)(v134 + 56)), 0LL);
          while ( !v140 );
          if ( !*(_DWORD *)(*(_QWORD *)(v134 + 16) + 16LL)
            && (*(_DWORD *)v134 == 2
             || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v134 + 32) + 16LL * *(unsigned int *)(v134 + 8)))) )
          {
            if ( *(_DWORD *)(v134 + 48) == *(_DWORD *)(v134 + 52)
              || ((v141 = *(_DWORD *)(v134 + 48), v142 = *(_DWORD *)(v134 + 52), v141 != v142)
                ? (v141 <= v142
                 ? ((v144 = *(_QWORD *)(v134 + 24), *(_BYTE *)(*(_QWORD *)(v134 + 16) + 20LL))
                  ? (v145 = *(_QWORD *)(v144 + 1024))
                  : (v145 = *(_QWORD *)(v144 + 256)),
                    v143 = *(_DWORD *)(v145 + 4) - v142 + v141)
                 : (v143 = v141 - v142))
                : (v143 = 0),
                  v143 <= *(_DWORD *)(*(_QWORD *)(v134 + 16) + 8LL)) )
            {
              if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v134 + 16) + 16LL), 1, 0) )
              {
                v146 = *(_QWORD *)(v134 + 24);
                if ( *(_BYTE *)(*(_QWORD *)(v134 + 16) + 20LL) )
                  IoQueueWorkItem(
                    *(PIO_WORKITEM *)(v146 + 1032),
                    NvmeControllerRefillShadowQueueRoutine,
                    DelayedWorkQueue,
                    *(PVOID *)(v134 + 24));
                else
                  KeSetEvent((PRKEVENT)(v146 + 472), 0, 0);
              }
            }
          }
          KeLowerIrql(v137);
          if ( (*(_BYTE *)(*(_QWORD *)(v134 + 24) + 136LL) & 2) != 0 )
          {
            v68 = v175;
          }
          else
          {
            if ( v175 && (*(_DWORD *)(*(_QWORD *)v140 + 4256LL) & 1) == 0 )
              v136 = (__int64)v175;
            v150 = *(_QWORD *)v140;
            v173 = v136;
            v151 = *(_DWORD *)(v150 + 4256) & 1;
            v152 = NvmeControllerSendNonReadWriteCommand(*(PVOID *)(v134 + 24), v136);
            v68 = v175;
            if ( v152 == 259 )
            {
              if ( v136 )
                v68 = 0LL;
              v175 = v68;
            }
            if ( !(_BYTE)v151 )
            {
              v148 = *(_QWORD *)(v134 + 24);
              _InterlockedDecrement((volatile signed __int32 *)(v148 + 960));
            }
            if ( v152 == 259 )
              goto LABEL_289;
            if ( v152 == -2147483631 )
              break;
            v175 = v68;
            if ( v152 != -2147483622 )
              goto LABEL_289;
          }
LABEL_286:
          v154 = v70 + 1;
          v70 = 0LL;
          if ( v154 < v67[2] )
            v70 = v154;
          if ( v177 == (_DWORD)v70 )
            break;
LABEL_289:
          LOBYTE(v147) = 5;
          LOBYTE(v148) = 10;
          v155 = StorCheckDpcWatchdogTimerExpire(v148, v147, v149);
          v71 = v177;
          if ( !v155 )
            continue;
          break;
        }
LABEL_290:
        v4 = v182;
        v5 = v187;
        v14 = v178;
        v33 = v68 == 0LL;
        v9 = v184;
      }
    }
    else if ( v4[239] )
    {
      v48 = g_CpuInfo;
      v49 = *(unsigned __int16 *)(((unsigned __int64)(unsigned __int16)v31->Type << 7) + *(_QWORD *)(v14 + 32) + 52);
      v50 = v49;
      while ( 2 )
      {
        while ( 1 )
        {
          v51 = *(_QWORD *)(*((_QWORD *)v4 + 128) + 8 * v49 + 24);
          if ( *(_DWORD *)v51 || *(_DWORD *)(v51 + 48) != *(_DWORD *)(v51 + 52) )
            break;
          v52 = v49 + 1;
          v49 = 0LL;
          if ( v52 < v48[2] )
            v49 = v52;
          if ( v50 == (_DWORD)v49 )
            goto LABEL_88;
        }
        Irp = 0LL;
        v176 = KfRaiseIrql(2u);
        do
        {
          v156 = *(unsigned int *)(v51 + 52);
          if ( (_DWORD)v156 == *(_DWORD *)(v51 + 48) )
          {
            v27 = 0LL;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v51, 0, 1) == 1 )
            {
              v169 = *(_QWORD *)(v51 + 24);
              if ( *(_BYTE *)(*(_QWORD *)(v51 + 16) + 20LL) == 1 )
                _InterlockedDecrement((volatile signed __int32 *)(v169 + 956));
              else
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v169 + 16) + 952LL));
            }
            KeLowerIrql(v176);
            goto LABEL_334;
          }
          v157 = 0;
          if ( (unsigned int)(v156 + 1) < *(_DWORD *)(*(_QWORD *)(v51 + 16) + 4LL) )
            v157 = v156 + 1;
        }
        while ( (_DWORD)v156 != _InterlockedCompareExchange((volatile signed __int32 *)(v51 + 52), v157, v156) );
        do
          v158 = _InterlockedExchange64((volatile __int64 *)(8 * v156 + *(_QWORD *)(v51 + 56)), 0LL);
        while ( !v158 );
        if ( !*(_DWORD *)(*(_QWORD *)(v51 + 16) + 16LL)
          && (*(_DWORD *)v51 == 2
           || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v51 + 32) + 16LL * *(unsigned int *)(v51 + 8)))) )
        {
          if ( *(_DWORD *)(v51 + 48) == *(_DWORD *)(v51 + 52)
            || ((v159 = *(_DWORD *)(v51 + 48), v160 = *(_DWORD *)(v51 + 52), v159 != v160)
              ? (v159 <= v160
               ? ((v162 = *(_QWORD *)(v51 + 24), *(_BYTE *)(*(_QWORD *)(v51 + 16) + 20LL))
                ? (v163 = *(_QWORD *)(v162 + 1024))
                : (v163 = *(_QWORD *)(v162 + 256)),
                  v161 = *(_DWORD *)(v163 + 4) - v160 + v159)
               : (v161 = v159 - v160))
              : (v161 = 0),
                v161 <= *(_DWORD *)(*(_QWORD *)(v51 + 16) + 8LL)) )
          {
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v51 + 16) + 16LL), 1, 0) )
            {
              v164 = *(_QWORD *)(v51 + 24);
              if ( *(_BYTE *)(*(_QWORD *)(v51 + 16) + 20LL) )
                IoQueueWorkItem(
                  *(PIO_WORKITEM *)(v164 + 1032),
                  NvmeControllerRefillShadowQueueRoutine,
                  DelayedWorkQueue,
                  *(PVOID *)(v51 + 24));
              else
                KeSetEvent((PRKEVENT)(v164 + 472), 0, 0);
            }
          }
        }
        KeLowerIrql(v176);
        if ( (*(_BYTE *)(*(_QWORD *)(v51 + 24) + 136LL) & 2) != 0 )
        {
          v4 = v182;
          v27 = 0LL;
        }
        else
        {
          if ( v175 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)v158 + 4256LL) & 1) != 0 )
              v27 = v175;
            Irp = v27;
          }
          v167 = *(_DWORD *)(*(_QWORD *)v158 + 4256LL) & 1;
          v168 = NvmeControllerSendNonReadWriteCommand(*(PVOID *)(v51 + 24), (__int64)Irp);
          v53 = v175;
          v165 = v168;
          if ( v168 == 259 )
          {
            if ( Irp )
              v53 = 0LL;
            v175 = v53;
          }
          if ( !(_BYTE)v167 )
          {
            v166 = *(_QWORD *)(v51 + 24);
            _InterlockedDecrement((volatile signed __int32 *)(v166 + 960));
          }
          v4 = v182;
          v27 = 0LL;
          if ( v168 == 259 )
            goto LABEL_337;
          if ( v168 == -2147483631 )
            goto LABEL_89;
          v175 = v53;
          if ( v168 != -2147483622 )
            goto LABEL_337;
        }
LABEL_334:
        v170 = v49 + 1;
        v49 = 0LL;
        if ( v170 < v48[2] )
          v49 = v170;
        if ( v50 == (_DWORD)v49 )
          break;
LABEL_337:
        LOBYTE(v165) = 5;
        LOBYTE(v166) = 10;
        if ( !(unsigned __int8)StorCheckDpcWatchdogTimerExpire(v166, v165, v53) )
          continue;
        break;
      }
LABEL_88:
      v53 = v175;
LABEL_89:
      v5 = v187;
      v14 = v178;
      v9 = v184;
      v33 = v53 == 0LL;
    }
    else
    {
      v33 = 0;
    }
LABEL_38:
    if ( !v33 )
      goto LABEL_108;
LABEL_39:
    if ( v189 )
      goto LABEL_40;
  }
  StorEtwNvmeControllerEvent(
    (_DWORD)v4,
    1,
    2,
    (unsigned int)L"Invalid command ID in CQ entry",
    (__int64)L"CQ ID",
    *((_WORD *)v5 + 16),
    (__int64)L"CQ Head",
    *((_WORD *)v5 + 17),
    (__int64)L"CQ entry DW2",
    v184[2],
    (__int64)L"CQ entry DW3",
    *((_DWORD *)v9 + 3),
    (__int64)L"Queue Depth",
    v15,
    (__int64)L"SQ Head",
    *(_WORD *)(v14 + 140),
    (__int64)L"SQ Tail",
    *(_WORD *)(v14 + 142),
    (__int64)L"Controller state",
    *((_QWORD *)v4 + 121));
  v34 = v181;
  if ( v181 )
  {
    while ( _InterlockedCompareExchange(v5 + 10, 1, 0) )
      ;
    v171 = *((unsigned __int16 *)v5 + 17) | v185 & 0xFFFF0000;
    v185 = v171;
    if ( v180 == 1 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(*((_QWORD *)v4 + 16) + 528LL))(
        *((_QWORD *)v4 + 206) + 64LL,
        *((unsigned int *)v5 + 4),
        4LL,
        0LL,
        &v185);
    }
    else
    {
      **((_DWORD **)v5 + 2) = v171;
      _InterlockedOr(v172, 0);
    }
    _InterlockedCompareExchange(v5 + 11, 0, 1);
    _InterlockedCompareExchange(v5 + 10, 0, 1);
  }
LABEL_41:
  v6 = (char)v193;
  if ( !v34 )
LABEL_99:
    _InterlockedCompareExchange(v5 + 11, 0, 1);
LABEL_42:
  if ( (v6 & 1) == 0 && v4[226] != 3 )
  {
    *(_DWORD *)(*((_QWORD *)v4 + 115) + 16LL) = 1 << *((_BYTE *)v5 + 24);
    _InterlockedOr(v172, 0);
  }
}
