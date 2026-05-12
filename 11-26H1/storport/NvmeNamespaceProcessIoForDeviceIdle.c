/*
 * XREFs of NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 * Callees:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     GetNVMePrpListBufferEntry @ 0x140047000 (GetNVMePrpListBufferEntry.c)
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x140119C60 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeSGLBufferContext @ 0x140119DA0 (FreeNVMeSGLBufferContext.c)
 *     GetNVMeSGLBufferContext @ 0x140119E00 (GetNVMeSGLBufferContext.c)
 *     StorPopRequestFromDeviceQueue @ 0x14011E470 (StorPopRequestFromDeviceQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeNamespaceProcessIoForDeviceIdle(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned __int8 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  IRP *v10; // r12
  __int64 v11; // rdi
  unsigned __int8 *v12; // rax
  __int64 v13; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 QuadPart; // rcx
  unsigned int v16; // r9d
  __int64 v17; // r13
  int v18; // r14d
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  unsigned int v20; // edi
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // r10d
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int8 v28; // di
  __int64 v29; // rbx
  KIRQL v30; // al
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rdx
  unsigned int v42; // edx
  char v43; // al
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r10
  __int64 NVMeSGLBufferContext; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  bool v49; // zf
  char v50; // al
  char v51; // cl
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // ebx
  unsigned __int16 *v56; // rdi
  __int64 v57; // r14
  KIRQL v58; // al
  unsigned int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned int v64; // r9d
  int v65; // eax
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // rdx
  __int16 v69; // r11
  __int64 v70; // r8
  unsigned int v71; // edx
  char v72; // al
  unsigned int v73; // eax
  __int64 NVMePrpListBufferEntry; // r9
  __int64 v75; // r10
  __int64 v76; // r8
  __int64 v77; // rax
  signed __int32 v78[8]; // [rsp+0h] [rbp-B9h] BYREF
  unsigned __int64 v79; // [rsp+20h] [rbp-99h]
  __int64 v80; // [rsp+28h] [rbp-91h]
  __int64 v81; // [rsp+30h] [rbp-89h]
  union _SLIST_HEADER *v82; // [rsp+38h] [rbp-81h]
  unsigned __int16 *v83; // [rsp+40h] [rbp-79h]
  _BYTE *v84; // [rsp+48h] [rbp-71h]
  KIRQL MajorFunction; // [rsp+60h] [rbp-59h]
  char v86; // [rsp+61h] [rbp-58h] BYREF
  bool v87; // [rsp+62h] [rbp-57h]
  bool v88; // [rsp+63h] [rbp-56h]
  unsigned int v89; // [rsp+64h] [rbp-55h]
  unsigned int v90; // [rsp+68h] [rbp-51h]
  __int64 v91; // [rsp+70h] [rbp-49h]
  __int16 v92; // [rsp+78h] [rbp-41h]
  unsigned int v93; // [rsp+7Ch] [rbp-3Dh]
  __int16 v94; // [rsp+80h] [rbp-39h] BYREF
  __int64 MdlAddress; // [rsp+88h] [rbp-31h]
  __int64 v96; // [rsp+90h] [rbp-29h]
  unsigned int v97; // [rsp+98h] [rbp-21h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-11h]
  __int64 v100; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-1h] BYREF
  unsigned __int64 QpcTimeStamp[2]; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = a3;
  v98 = 0LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( (int)IoGetIoAttributionHandle(a2, &v98) >= 0 )
  {
    v6 = *(unsigned __int8 **)(a2 + 184);
    v7 = v98;
    v101 = 0LL;
    LODWORD(v101) = 1;
    *(_OWORD *)QpcTimeStamp = 0LL;
    DWORD1(v101) = *v6 | 0x300;
    QpcTimeStamp[1] = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp[1]);
    IoRecordIoAttribution(v7, &v101);
  }
  StorPushRequestToDeviceQueue(*(_QWORD *)(a1 + 256), v3, a2);
  _InterlockedOr(v78, 0);
  v8 = *(_QWORD *)(a1 + 128);
  if ( *(_BYTE *)(v8 + 1) == 1 && !*(_BYTE *)(*(_QWORD *)(v8 + 8) + 64LL) )
    return;
  v9 = StorPopRequestFromDeviceQueue(*(_QWORD *)(a1 + 256), (unsigned int)v3);
  v10 = (IRP *)v9;
  if ( !v9 )
    return;
  v11 = v98;
  if ( v98 )
  {
    v12 = *(unsigned __int8 **)(v9 + 184);
    v101 = 0LL;
    LODWORD(v101) = 1;
    *(_OWORD *)QpcTimeStamp = 0LL;
    DWORD1(v101) = *v12 | 0x200;
    QpcTimeStamp[1] = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp[1]);
    IoRecordIoAttribution(v11, &v101);
  }
  v13 = *(_QWORD *)(a1 + 16);
  CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
  QuadPart = 0LL;
  v86 = 0;
  v94 = 0;
  v16 = 0;
  v100 = 0LL;
  v17 = 0LL;
  v97 = 0;
  v18 = 0;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v20 = (unsigned int)SecurityContext;
  v21 = HIDWORD(*(_QWORD *)(v13 + 136));
  LOBYTE(v21) = v21 & 1;
  MdlAddress = (__int64)CurrentStackLocation;
  v91 = 0LL;
  v87 = 0;
  v92 = 0;
  v90 = 0;
  v99 = v13;
  v96 = v21;
  v89 = (unsigned int)SecurityContext;
  if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
  {
    QuadPart = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    v91 = QuadPart;
  }
  else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
  {
    v17 = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    v89 = 0;
  }
  v22 = *(_DWORD *)(a1 + 96);
  if ( v22 == 5 || v22 == 6 )
  {
    v86 = 1;
    v18 = -1073741810;
    if ( !QuadPart )
      goto LABEL_36;
    goto LABEL_33;
  }
  v23 = *(_QWORD *)(v13 + 128);
  MajorFunction = CurrentStackLocation->MajorFunction;
  v88 = MajorFunction == 3;
  v24 = *(_DWORD *)(v23 + 200);
  v93 = v24;
  if ( !QuadPart )
  {
    if ( (_BYTE)v21 )
    {
      v37 = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
LABEL_87:
      if ( !(_DWORD)SecurityContext )
      {
        v18 = 0;
        goto LABEL_36;
      }
      v66 = *(unsigned int *)(a1 + 64);
      if ( !((unsigned int)SecurityContext % (unsigned int)v66) )
      {
        v67 = v37 / v66;
        if ( !(v37 % v66) )
        {
          v68 = *(_QWORD *)(a1 + 424);
          v69 = (unsigned int)SecurityContext / (unsigned int)v66;
          v89 = (unsigned int)SecurityContext / (unsigned int)v66;
          if ( v67 >= v68 || v68 - v67 < (unsigned int)SecurityContext / (unsigned int)v66 )
          {
            QuadPart = v91;
            v18 = -1073741811;
            goto LABEL_36;
          }
          v70 = *(_QWORD *)(a1 + 16);
          MdlAddress = v70;
          if ( (unsigned int)SecurityContext <= *(_DWORD *)(*(_QWORD *)(v70 + 128) + 200LL) )
          {
            v71 = *(_DWORD *)(a1 + 420);
            if ( !v71 )
            {
LABEL_101:
              NVMePrpListBufferEntry = 0LL;
              if ( (((unsigned int)SecurityContext
                   + ((LODWORD(v10->MdlAddress->StartVa) + v10->MdlAddress->ByteOffset) & 0xFFF)
                   + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
              {
                NVMePrpListBufferEntry = (__int64)GetNVMePrpListBufferEntry(v70, v3);
                if ( !NVMePrpListBufferEntry )
                {
                  NVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(a1 + 16), v3);
                  if ( !NVMePrpListBufferEntry )
                  {
                    NvmeNamespaceQueueIo(a1, (__int64)v10, v3);
                    v18 = -2147483631;
                    goto LABEL_84;
                  }
                }
                v69 = v89;
              }
              v75 = *(_QWORD *)(a1 + 16);
              if ( (*(_BYTE *)(v75 + 136) & 2) != 0 )
                v76 = *(_QWORD *)(v75 + 728) + 192 * v3;
              else
                v76 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v75 + 872) + 2 * v3) + *(_QWORD *)(v75 + 728) - 192LL;
              LOBYTE(v80) = 0;
              v65 = NvmeSubmitIoToSQ(
                      a1,
                      (__int64)v10,
                      v76,
                      NVMePrpListBufferEntry,
                      v3,
                      v80,
                      (unsigned int)SecurityContext,
                      v37,
                      v67,
                      v69,
                      v88,
                      0LL);
LABEL_83:
              v18 = v65;
LABEL_84:
              QuadPart = v91;
              goto LABEL_34;
            }
            if ( (unsigned int)SecurityContext <= v71 )
            {
              v72 = *(_BYTE *)(a1 + 419);
              if ( v72 )
                v73 = ((unsigned __int64)(unsigned int)SecurityContext >> v72)
                    + ((((unsigned int)v37 & (v71 - 1))
                      + ((unsigned int)SecurityContext & (v71 - 1))
                      + (unsigned __int64)v71
                      - 1) >> v72);
              else
                v73 = (unsigned int)SecurityContext / v71
                    + ((unsigned int)SecurityContext % v71 - 1LL + v71 + v37 % v71) / v71;
              if ( v73 <= 1 )
              {
                v70 = MdlAddress;
                v69 = v89;
                goto LABEL_101;
              }
              v24 = v93;
            }
          }
          v64 = (unsigned int)SecurityContext;
          v84 = 0LL;
          v83 = 0LL;
          v82 = 0LL;
          LODWORD(v81) = v3;
          LODWORD(v80) = v24;
          v79 = v37;
LABEL_82:
          v65 = NvmeSplitIoParallel(a1, (__int64)v10, v88, v64, v79, v80, v81, v82, v83, v84);
          goto LABEL_83;
        }
        QuadPart = v91;
      }
      v18 = -1073741811;
      goto LABEL_36;
    }
    if ( v17 )
    {
      v37 = *(_QWORD *)(v17 + 96);
      LODWORD(SecurityContext) = *(_DWORD *)(v17 + 116);
      *(_QWORD *)(v17 + 64) = 0LL;
      *(_QWORD *)(v17 + 72) = 0LL;
      goto LABEL_87;
    }
    v38 = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    if ( !v20 )
      goto LABEL_66;
    v39 = *(unsigned int *)(a1 + 64);
    if ( v20 % (unsigned int)v39
      || (v40 = v38 / v39, v38 % v39)
      || (v41 = *(_QWORD *)(a1 + 424), v90 = v20 / (unsigned int)v39, v40 >= v41)
      || v41 - v40 < v20 / (unsigned int)v39 )
    {
      v18 = -1073741811;
      goto LABEL_66;
    }
    if ( v20 <= v24 )
    {
      v42 = *(_DWORD *)(a1 + 420);
      if ( !v42 )
      {
LABEL_64:
        NVMeSGLBufferContext = GetNVMeSGLBufferContext(v99, v3);
        v17 = NVMeSGLBufferContext;
        if ( !NVMeSGLBufferContext )
        {
          v18 = -1073741670;
          goto LABEL_66;
        }
        v49 = MajorFunction == 3;
        *(_QWORD *)(NVMeSGLBufferContext + 40) = v10;
        v50 = *(_BYTE *)(NVMeSGLBufferContext + 126);
        *(_QWORD *)(v17 + 96) = v38;
        v51 = v50 & 0xFE | v49;
        *(_DWORD *)(v17 + 116) = v20;
        v52 = v90;
        *(_BYTE *)(v17 + 126) = v51;
        v53 = MdlAddress;
        *(_DWORD *)(v17 + 112) = v52;
        *(_QWORD *)(v17 + 64) = 0LL;
        *(_QWORD *)(v17 + 72) = 0LL;
        *(_QWORD *)(v17 + 32) = a1;
        *(_QWORD *)(v17 + 104) = v40;
        *(_QWORD *)(v17 + 56) = *(_QWORD *)(v53 + 24);
        v54 = *(_QWORD *)(v53 + 8);
        *(_QWORD *)(v53 + 24) = v17;
        *(_QWORD *)(v17 + 48) = v54;
        *(_QWORD *)(v53 + 8) = 0xFEDCBA9000000000uLL;
        v55 = *(unsigned __int16 *)(v17 + 124);
        v56 = *(unsigned __int16 **)(v17 + 16);
        v57 = (__int64)v10->MdlAddress->StartVa + v10->MdlAddress->ByteOffset;
        *(_QWORD *)(v17 + 80) = v57;
        MdlAddress = (__int64)v10->MdlAddress;
        v96 = *(_QWORD *)(a1 + 16);
        v99 = v57;
        v58 = KfRaiseIrql(2u);
        LODWORD(v84) = v55;
        v59 = v89;
        v83 = v56;
        v60 = *(_QWORD *)(v96 + 128);
        v61 = MdlAddress;
        LOBYTE(v82) = MajorFunction != 3;
        v87 = v58;
        v62 = *(_QWORD *)(v60 + 1160);
        v63 = *(_QWORD *)(v60 + 8);
        v81 = v17;
        MajorFunction = MajorFunction != 3;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, _DWORD, unsigned __int16 *, _DWORD))(*(_QWORD *)(v62 + 8) + 112LL))(
                v62,
                v63,
                MdlAddress,
                v57,
                v89,
                NvmeContinueScatterGatherProcessIO,
                v17,
                (_DWORD)v82,
                v83,
                (_DWORD)v84);
        if ( v18 == -1073741789 )
        {
          LOBYTE(v82) = MajorFunction;
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v96 + 128) + 1160LL) + 8LL) + 88LL))(
                  *(_QWORD *)(*(_QWORD *)(v96 + 128) + 1160LL),
                  *(_QWORD *)(*(_QWORD *)(v96 + 128) + 8LL),
                  v61,
                  v99,
                  v59,
                  NvmeContinueScatterGatherProcessIO,
                  v17,
                  (_DWORD)v82);
        }
        if ( (unsigned __int8)v87 < 2u )
          KeLowerIrql(v87);
        QuadPart = v91;
        if ( v18 >= 0 )
          v18 = 259;
        goto LABEL_34;
      }
      if ( v20 <= v42 )
      {
        v43 = *(_BYTE *)(a1 + 419);
        if ( v43 )
        {
          v44 = ((v20 & (v42 - 1)) + ((v42 - 1) & (unsigned int)v38) + (unsigned __int64)v42 - 1) >> v43;
          v45 = (unsigned __int64)v20 >> *(_BYTE *)(a1 + 419);
        }
        else
        {
          LODWORD(v45) = v20 / v42;
          v44 = (v20 % v42 + v42 + v38 % v42 - 1) / v42;
        }
        if ( (unsigned int)(v45 + v44) <= 1 )
          goto LABEL_64;
        v24 = v93;
      }
    }
    v64 = v20;
    v84 = 0LL;
    v83 = 0LL;
    v82 = 0LL;
    LODWORD(v81) = v3;
    LODWORD(v80) = v24;
    v79 = v38;
    goto LABEL_82;
  }
LABEL_15:
  v25 = QuadPart;
LABEL_16:
  if ( v25 )
  {
    while ( 1 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 104), 4, 3) == 3 )
        goto LABEL_22;
      if ( !(_BYTE)v21 )
      {
        if ( *(_DWORD *)(v25 + 104) == 1 )
        {
          LOWORD(v16) = v16 + 1;
          v90 = v16;
        }
        goto LABEL_28;
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 104), 4, 1) == 1 )
      {
LABEL_22:
        v26 = NvmeSendSplitIo(v25, v3, 0LL, 0LL, (bool *)&v86, &v100, &v97, &v94, v87);
        v18 = v26;
        if ( v26 == 259 )
        {
          v27 = *(_QWORD *)(a1 + 16);
          v87 = (unsigned __int16)++v92 % (unsigned int)*(unsigned __int8 *)(v27 + 1730) == 0;
        }
        else
        {
          if ( v26 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 104), 3, 4);
            NvmeNamespaceQueueIo(a1, *(_QWORD *)(v25 + 24), v3);
            return;
          }
          if ( !*(_WORD *)(v25 + 34) )
          {
            v86 = 1;
LABEL_32:
            QuadPart = v91;
            break;
          }
          if ( v86 )
            goto LABEL_32;
        }
        v16 = v90;
        LOBYTE(v21) = v96;
        QuadPart = v91;
      }
LABEL_28:
      v25 = *(_QWORD *)(v25 + 96);
      if ( !(_WORD)v16 )
        goto LABEL_16;
      if ( !v25 )
      {
        v16 = 0;
        v90 = 0;
        goto LABEL_15;
      }
    }
  }
LABEL_33:
  _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
LABEL_34:
  if ( v18 == -2147483631 || v18 >= 1 )
    return;
LABEL_36:
  if ( v17 )
  {
    MdlAddress = *(_QWORD *)(v17 + 24);
    if ( MdlAddress )
    {
      v28 = *(_BYTE *)(v17 + 126) & 1;
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      v30 = KfRaiseIrql(2u);
      v31 = *(_QWORD *)(v29 + 1160);
      MajorFunction = v30;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v31 + 8) + 96LL))(v31, MdlAddress, v28 ^ 1u);
      if ( MajorFunction < 2u )
        KeLowerIrql(MajorFunction);
    }
    v32 = *(_QWORD *)(v17 + 88);
    if ( v32 )
    {
      v33 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v32 + 88) = 0LL;
      *(_DWORD *)(v32 + 108) = 0;
      *(_DWORD *)(v32 + 104) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v33 + 888) + 8 * v3), (PSLIST_ENTRY)v32);
    }
    FreeNVMeSGLBufferContext(*(_QWORD *)(a1 + 16), v17, 1);
    v10->IoStatus.Status = v18;
    IofCompleteRequest(v10, 0);
    v34 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v34
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v34 + 24) + 8 * v3), 0xFFFFFFFF) == 1 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      if ( !NvmeNamespaceCheckAndAcquirePoFx(a1) )
        goto LABEL_46;
      goto LABEL_45;
    }
    return;
  }
  if ( !QuadPart )
  {
LABEL_66:
    v10->IoStatus.Status = v18;
    IofCompleteRequest(v10, 0);
    v47 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v47
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v47 + 24) + 8 * v3), 0xFFFFFFFF) == 1 )
    {
      v48 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
        NvmeNamespaceReleasePoFx(a1);
      }
      v36 = *(_QWORD *)(v48 + 160);
      if ( *(_BYTE *)v36 == 1 )
      {
LABEL_71:
        PoFxIdleComponent(**(_QWORD **)(v36 + 8), 0LL, 2LL);
        return;
      }
    }
    return;
  }
  if ( v86 )
  {
    FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(a1 + 16), QuadPart);
    FreeNVMeChainedIoSplitContext(*(_QWORD *)(a1 + 16), v3, v91, (__int64)v10);
    v10->IoStatus.Status = v18;
    IofCompleteRequest(v10, 0);
    v77 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v77
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v77 + 24) + 8 * v3), 0xFFFFFFFF) == 1 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      if ( !NvmeNamespaceCheckAndAcquirePoFx(a1) )
      {
LABEL_46:
        v36 = *(_QWORD *)(v35 + 160);
        if ( *(_BYTE *)v36 != 1 )
          return;
        goto LABEL_71;
      }
LABEL_45:
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
      NvmeNamespaceReleasePoFx(a1);
      goto LABEL_46;
    }
  }
}
