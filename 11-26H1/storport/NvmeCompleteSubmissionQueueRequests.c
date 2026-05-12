/*
 * XREFs of NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeControllerCompleteAllRequests @ 0x1400F189C (NvmeControllerCompleteAllRequests.c)
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     FreeNVMePrpListBufferEntry @ 0x140045980 (FreeNVMePrpListBufferEntry.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400D1B5C (IsOutstandingRequestInNvmeControllerQueue.c)
 *     NvmeAdapterDetachXrbFromSrb @ 0x1400E78A0 (NvmeAdapterDetachXrbFromSrb.c)
 *     NvmeControllerRestart @ 0x1400FA9B4 (NvmeControllerRestart.c)
 *     FreeNVMeSGLBufferContext @ 0x140119DA0 (FreeNVMeSGLBufferContext.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeCompleteSubmissionQueueRequests(__int64 a1, char a2, int a3)
{
  int v3; // edi
  __int64 v4; // r13
  int v6; // ebp
  unsigned int v7; // ebx
  _QWORD *Namespace; // r15
  bool v9; // zf
  char v10; // al
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  void (__fastcall *v23)(__int64, __int64, __int64, _QWORD, _QWORD *, __int64); // r10
  __int64 v24; // r11
  __int64 v25; // rcx
  char v26; // r14
  __int64 v27; // r8
  char v28; // r14
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64, _QWORD, _QWORD); // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned int v35; // eax
  int v36; // ecx
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rdx
  int v42; // ebp
  unsigned int v43; // edi
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // r12
  __int64 v47; // rbx
  char v48; // di
  KIRQL v49; // r13
  __int64 v50; // r8
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rbp
  __int64 v54; // r14
  __int64 v55; // rbx
  char v56; // di
  KIRQL v57; // r12
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // r8
  unsigned int *v68; // rax
  __int64 v69; // rcx
  const EVENT_DESCRIPTOR *v70; // rdx
  __int64 v71; // r8
  _BYTE *v72; // r9
  unsigned __int8 v73; // r11
  char v74; // r10
  char v75; // r13
  char v76; // bp
  char v77; // bl
  char *v78; // rbx
  unsigned int v79; // r12d
  __int64 v80; // rdi
  unsigned __int64 v81; // r10
  int v82; // ecx
  char v83; // di
  char v84; // cl
  char v85; // al
  unsigned int v86; // eax
  char v87; // al
  unsigned int i; // edx
  __int64 v89; // rcx
  signed __int32 v91[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v92; // [rsp+20h] [rbp-D8h]
  __int64 v93; // [rsp+28h] [rbp-D0h]
  __int64 v94; // [rsp+30h] [rbp-C8h]
  __int64 v95; // [rsp+38h] [rbp-C0h]
  __int64 v96; // [rsp+40h] [rbp-B8h]
  __int64 v97; // [rsp+48h] [rbp-B0h]
  __int64 v98; // [rsp+50h] [rbp-A8h]
  char v99; // [rsp+60h] [rbp-98h]
  char v100; // [rsp+61h] [rbp-97h]
  char v101; // [rsp+62h] [rbp-96h]
  char v102; // [rsp+63h] [rbp-95h]
  int v103; // [rsp+68h] [rbp-90h]
  unsigned int v104; // [rsp+6Ch] [rbp-8Ch]
  __int64 v105; // [rsp+70h] [rbp-88h]
  unsigned int v106; // [rsp+78h] [rbp-80h]
  unsigned int v107; // [rsp+7Ch] [rbp-7Ch]
  int v108; // [rsp+80h] [rbp-78h]
  __int64 v109; // [rsp+88h] [rbp-70h]
  _QWORD *v110; // [rsp+90h] [rbp-68h]
  unsigned int v111; // [rsp+98h] [rbp-60h]
  __int64 v112; // [rsp+A0h] [rbp-58h]
  union _LARGE_INTEGER Interval; // [rsp+A8h] [rbp-50h] BYREF
  GUID v114; // [rsp+B0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  v102 = a2;
  Interval.QuadPart = 0LL;
  LOBYTE(v3) = 0;
  v6 = a3;
  v103 = a3;
  v7 = *(_DWORD *)(a1 + 124);
  Namespace = 0LL;
  v9 = (*(_BYTE *)(v4 + 136) & 2) == 0;
  v105 = v4;
  v108 = v3;
  v110 = 0LL;
  if ( v9 )
    --v7;
  v106 = 0;
  v111 = v7;
  v100 = 0;
  if ( a3 == -1073741810 || (v10 = *(_BYTE *)(v4 + 1228), v101 = 0, v10) )
    v101 = 1;
  LOBYTE(v11) = IsOutstandingRequestInNvmeControllerQueue(v4, a1);
  if ( !(_BYTE)v11 )
    return v11;
  *(_QWORD *)(a1 + 112) |= 4uLL;
  _InterlockedOr(v91, 0);
  v12 = 0;
  v104 = 0;
  if ( !v7 )
    goto LABEL_147;
  v13 = 0LL;
  v109 = 0LL;
  v14 = 0LL;
  v112 = 0LL;
  do
  {
    v11 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v14 + v11 + 60) & 1) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      v16 = v13 << 7;
      v17 = *(unsigned __int16 *)((v13 << 7) + v15 + 56);
      *(_BYTE *)((v13 << 7) + v15 + 60) &= ~1u;
      v18 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v4 + 136) & 2) != 0 )
      {
        v19 = *(_QWORD *)(v16 + v18 + 24);
        v20 = 96LL;
        if ( *(_BYTE *)(v19 + 2) != 40 )
          v20 = 48LL;
        v21 = *(_QWORD *)(v20 + v19);
        if ( !v21 )
          goto LABEL_139;
        if ( *(char *)(v21 + 17) < 0 )
        {
          v26 = 1;
          v100 = 1;
LABEL_140:
          v11 = *(_QWORD *)(a1 + 32);
          Namespace = v110;
          v6 = v103;
          v7 = v111;
          LOBYTE(v3) = v108;
          *(_WORD *)((v13 << 7) + v11 + 56) = -1;
          goto LABEL_144;
        }
        if ( *(_DWORD *)(v4 + 572) == 1 )
        {
          Namespace = NvmeControllerGetNamespace(v4, *(_DWORD *)(v16 + v18 + 80));
          v110 = Namespace;
        }
        *(_BYTE *)(v19 + 3) = v102;
        v22 = *(_QWORD *)(v21 + 160);
        v106 = *(_DWORD *)(v21 + 20);
        NvmeAdapterDetachXrbFromSrb(v21);
        if ( v23 )
          v23(v4, v19, v22, v106, Namespace, v24);
        else
          KeSetEvent((PRKEVENT)(v21 + 664), 0, 0);
        v25 = 2 * v17;
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v25) = 0LL;
        *(_WORD *)(*(_QWORD *)(a1 + 24) + 8 * v25 + 8) = -1;
        *(_QWORD *)((v13 << 7) + *(_QWORD *)(a1 + 32) + 24) = 0LL;
        *(_DWORD *)((v13 << 7) + *(_QWORD *)(a1 + 32) + 80) = 0;
        *(_QWORD *)((v13 << 7) + *(_QWORD *)(a1 + 32) + 32) = 0LL;
        *(_QWORD *)((v13 << 7) + *(_QWORD *)(a1 + 32) + 40) = 0LL;
LABEL_138:
        v14 = v112;
        v12 = v104;
LABEL_139:
        v26 = v100;
        goto LABEL_140;
      }
      v27 = *(_QWORD *)(v16 + v18 + 16);
      v28 = 0;
      if ( v27 )
        FreeNVMePrpListBufferEntry(v4, *(unsigned __int16 *)(v16 + v18 + 52), v27);
      v29 = *(_QWORD *)(a1 + 32);
      v30 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + v29 + 32);
      if ( v30 )
        v30(v4, *(_QWORD *)(v16 + v29 + 40), 0LL);
      v3 = (unsigned __int8)v3;
      v31 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v16 + v31 + 60) & 0x20) != 0 )
        v3 = 1;
      v108 = v3;
      v32 = _InterlockedExchange64((volatile __int64 *)(v16 + v31 + 24), 0LL);
      if ( v32 )
      {
        v33 = *(_QWORD *)(a1 + 32);
        v34 = *(_QWORD *)(v32 + 184);
        v35 = (unsigned __int8)**(_DWORD **)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned __int16 *)((v13 << 7) + v33 + 56));
        v99 = v35 == 2 || v35 <= 0x19 && (v36 = 33554738, _bittest(&v36, v35));
        v37 = v13 << 7;
        v110 = NvmeControllerGetNamespace(v4, *(_DWORD *)(v33 + (v13 << 7) + 80));
        v39 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)((v13 << 7) + v39 + 60) & 8) != 0 )
        {
          v40 = *(_QWORD *)(v34 + 24);
          v41 = *(_QWORD *)(v37 + v39 + 40);
          v42 = v103;
          v43 = *(unsigned __int16 *)(v40 + 32);
          _InterlockedExchange((volatile __int32 *)(v41 + 104), 5);
          *(_DWORD *)(v41 + 112) = v42;
          v44 = *(_QWORD *)(a1 + 32);
          v107 = v43;
          if ( *(char *)((v13 << 7) + v44 + 60) < 0 )
          {
            v45 = _InterlockedExchange64((volatile __int64 *)(v41 + 88), 0LL);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 24);
              if ( v46 )
              {
                v47 = *(_QWORD *)(v4 + 128);
                v48 = *(_BYTE *)(v45 + 126) & 1;
                v49 = KfRaiseIrql(2u);
                LOBYTE(v50) = v48 ^ 1;
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v47 + 1160) + 8LL) + 96LL))(
                  *(_QWORD *)(v47 + 1160),
                  v46,
                  v50);
                if ( v49 < 2u )
                  KeLowerIrql(v49);
                v4 = v105;
                v43 = v107;
              }
              FreeNVMeSGLBufferContext(v4, v45, 0LL);
              v13 = v109;
            }
            v42 = v103;
          }
          if ( _InterlockedIncrement((volatile signed __int32 *)(v40 + 116)) < v43 )
            goto LABEL_137;
          if ( v42 < 0 )
            v51 = 0LL;
          else
            v51 = *(unsigned int *)(v40 + 48);
          v52 = v106;
          *(_QWORD *)(v32 + 56) = v51;
          FreeNVMeChainedIoSplitContext(v4, v52, v40, v32);
          v28 = 0;
LABEL_60:
          if ( v99 )
          {
            if ( !v101 )
            {
              v60 = (__int64)v110;
              if ( v110 )
              {
                v61 = *(unsigned __int16 *)((v13 << 7) + *(_QWORD *)(a1 + 32) + 52);
                *(_DWORD *)(v32 + 48) = v42;
                IofCompleteRequest((PIRP)v32, 0);
                v62 = *(_QWORD *)(v60 + 128);
                if ( !*(_BYTE *)v62
                  && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v62 + 24) + 8 * v61), 0xFFFFFFFF) == 1 )
                {
                  v63 = *(_QWORD *)(*(_QWORD *)(v60 + 16) + 128LL);
                  if ( NvmeNamespaceCheckAndAcquirePoFx(v60) )
                  {
                    PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v60 + 128) + 8LL), 0LL, 2LL);
                    NvmeNamespaceReleasePoFx(v60);
                  }
                  v64 = *(_QWORD *)(v63 + 160);
                  if ( *(_BYTE *)v64 == 1 )
                    PoFxIdleComponent(**(_QWORD **)(v64 + 8), 0LL, 2LL);
                }
                goto LABEL_137;
              }
            }
          }
          v9 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v32 + 141) = -84;
          *(_DWORD *)(v32 + 48) = v42;
          if ( v9 )
            goto LABEL_136;
          v114 = 0LL;
          IoGetActivityIdIrp(v32, &v114);
          v67 = *(_QWORD *)(v32 + 184);
          if ( *(_BYTE *)v67 == 14 )
          {
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_136;
            v70 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
            goto LABEL_82;
          }
          if ( *(_BYTE *)v67 != 15 )
          {
            if ( *(_BYTE *)v67 != 27 )
              goto LABEL_136;
            if ( *(_BYTE *)(v67 + 1) == 7 && !*(_DWORD *)(v67 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v68 = *(unsigned int **)(v32 + 56);
                if ( v68 )
                  v69 = *v68;
                else
                  v69 = 0LL;
                LODWORD(v93) = *(_DWORD *)(v32 + 48);
                LODWORD(v92) = v69;
                McTemplateK0pqd_EtwWriteTransfer(v69, v65, &v114, v32, v92, v93);
              }
              goto LABEL_136;
            }
            if ( (byte_140173442 & 0x20) == 0 )
            {
LABEL_136:
              IofCompleteRequest((PIRP)v32, 0);
              goto LABEL_137;
            }
            v70 = &EventPnpRequestComplete;
LABEL_82:
            LODWORD(v92) = *(_DWORD *)(v32 + 48);
            McTemplateK0pd_EtwWriteTransfer(v66, v70, &v114, v32, v92);
            goto LABEL_136;
          }
          if ( byte_140173441 >= 0 )
            goto LABEL_136;
          v71 = *(_QWORD *)(v67 + 8);
          v72 = 0LL;
          v99 = 0;
          v73 = 0;
          v74 = 0;
          v75 = 0;
          v76 = 0;
          v77 = 0;
          if ( *(_BYTE *)(v71 + 2) == 40 )
          {
            v78 = 0LL;
            if ( *(_DWORD *)(v71 + 20) )
              goto LABEL_135;
            v79 = *(_DWORD *)(v71 + 56);
            v80 = 0LL;
            if ( !v79 )
              goto LABEL_135;
            do
            {
              v66 = *(unsigned int *)(v71 + 4 * v80 + 120);
              if ( (unsigned int)v66 >= 0x80 )
              {
                v81 = *(unsigned int *)(v71 + 16);
                if ( (unsigned int)v66 < (unsigned int)v81 )
                {
                  v65 = (unsigned int)v66;
                  v82 = *(_DWORD *)(v66 + v71) - 64;
                  if ( v82 )
                  {
                    v66 = (unsigned int)(v82 - 1);
                    if ( (_DWORD)v66 )
                    {
                      if ( (_DWORD)v66 == 1 )
                      {
                        v66 = v65 + 40;
                        if ( v65 + 40 <= v81 )
                        {
                          if ( *(_DWORD *)(v65 + v71 + 12) )
                            v78 = (char *)(v65 + v71 + 32);
                          v72 = *(_BYTE **)(v65 + v71 + 24);
LABEL_96:
                          v83 = *(_BYTE *)(v65 + v71 + 8);
                          v73 = *(_BYTE *)(v65 + v71 + 9);
                          goto LABEL_105;
                        }
                      }
                    }
                    else
                    {
                      v66 = v65 + 56;
                      if ( v65 + 56 <= v81 )
                      {
                        v28 = 1;
                        if ( *(_BYTE *)(v65 + v71 + 10) )
                          v78 = (char *)(v65 + v71 + 24);
                        v72 = *(_BYTE **)(v65 + v71 + 16);
                        v73 = *(_BYTE *)(v65 + v71 + 9);
                        v99 = *(_BYTE *)(v65 + v71 + 8);
                      }
                    }
                  }
                  else
                  {
                    v66 = v65 + 40;
                    if ( v65 + 40 <= v81 )
                    {
                      if ( *(_BYTE *)(v65 + v71 + 10) )
                        v78 = (char *)(v65 + v71 + 24);
                      v72 = *(_BYTE **)(v65 + v71 + 16);
                      goto LABEL_96;
                    }
                  }
                  if ( v28 )
                    break;
                }
              }
              v80 = (unsigned int)(v80 + 1);
            }
            while ( (unsigned int)v80 < v79 );
            v83 = v99;
LABEL_105:
            if ( !v78 )
              goto LABEL_135;
            v84 = *v78;
            v74 = 0;
            v77 = 0;
          }
          else
          {
            v84 = *(_BYTE *)(v71 + 72);
            v72 = *(_BYTE **)(v71 + 32);
            v73 = *(_BYTE *)(v71 + 11);
            v83 = *(_BYTE *)(v71 + 4);
            if ( *(_BYTE *)(v71 + 2) )
              goto LABEL_135;
          }
          LOBYTE(v66) = v84 - 8;
          if ( (v66 & 0x5D) == 0 )
          {
            if ( *(_BYTE *)(v71 + 3) == 1 || !v72 || !v73 )
            {
LABEL_131:
              if ( byte_140173441 < 0 )
              {
                if ( !v77 )
                {
                  v76 = 0;
                  v75 = 0;
                  v74 = 0;
                }
                v87 = *(_BYTE *)(v71 + 3);
                v98 = v32;
                LOBYTE(v97) = v76;
                LOBYTE(v96) = v75;
                LOBYTE(v95) = v74;
                LOBYTE(v94) = v83;
                LOBYTE(v93) = v87;
                LODWORD(v92) = *(_DWORD *)(v32 + 48);
                McTemplateK0pduuuuup_EtwWriteTransfer(v66, v65, &v114, v32, v92, v93, v94, v95, v96, v97, v32);
              }
              goto LABEL_135;
            }
            v85 = *v72 & 0x7F;
            if ( v85 == 114 || v85 == 115 )
            {
              v66 = (unsigned __int64)&v72[v73];
              LOBYTE(v65) = 0;
              if ( (unsigned __int64)(v72 + 8) > v66 )
                goto LABEL_129;
              v75 = v72[2];
              v74 = v72[1] & 0xF;
              v76 = v72[3];
            }
            else
            {
              v66 = (unsigned __int64)&v72[v73];
              LOBYTE(v65) = 0;
              if ( (unsigned __int64)(v72 + 8) > v66 )
                goto LABEL_129;
              v65 = (unsigned __int64)(v72 + 13);
              v74 = v72[2] & 0xF;
              v86 = v73;
              if ( (unsigned int)(unsigned __int8)v72[7] + 8 <= v73 )
                v86 = (unsigned __int8)v72[7] + 8;
              v66 = (unsigned __int64)&v72[v86];
              if ( v65 > v66 )
                v75 = 0;
              else
                v75 = v72[12];
              if ( (unsigned __int64)(v72 + 14) > v66 )
                v76 = 0;
              else
                v76 = *(_BYTE *)v65;
            }
            LOBYTE(v65) = 1;
LABEL_129:
            if ( (_BYTE)v65 )
              v77 = 1;
            goto LABEL_131;
          }
LABEL_135:
          v4 = v105;
          goto LABEL_136;
        }
        if ( *(char *)(v37 + v39 + 60) >= 0 )
        {
          if ( (*(_BYTE *)((v13 << 7) + *(_QWORD *)(a1 + 32) + 60) & 2) == 0 )
          {
LABEL_59:
            v42 = v103;
            goto LABEL_60;
          }
        }
        else if ( *(_QWORD *)(v34 + 8) == 0xFEDCBA9000000000uLL )
        {
          v53 = *(_QWORD *)(v34 + 24);
          v54 = *(_QWORD *)(v53 + 24);
          if ( v54 )
          {
            v55 = *(_QWORD *)(v4 + 128);
            v56 = *(_BYTE *)(v53 + 126) & 1;
            v57 = KfRaiseIrql(2u);
            LOBYTE(v58) = v56 ^ 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v55 + 1160) + 8LL) + 96LL))(
              *(_QWORD *)(v55 + 1160),
              v54,
              v58);
            if ( v57 < 2u )
              KeLowerIrql(v57);
            v13 = v109;
          }
          v28 = 0;
          if ( v103 < 0 )
            v59 = 0LL;
          else
            v59 = *(unsigned int *)(v53 + 116);
          LOBYTE(v38) = 1;
          *(_QWORD *)(v32 + 56) = v59;
          FreeNVMeSGLBufferContext(v4, v53, v38);
          goto LABEL_59;
        }
      }
LABEL_137:
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(a1 + 64),
        (PSLIST_ENTRY)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v104 << 7)));
      v13 = v109;
      goto LABEL_138;
    }
    v26 = v100;
LABEL_144:
    ++v12;
    ++v13;
    v14 += 128LL;
    v104 = v12;
    v109 = v13;
    v112 = v14;
  }
  while ( v12 < v7 );
  if ( v26 )
  {
    Interval.QuadPart = -10000000LL;
    LOBYTE(v11) = KeDelayExecutionThread(0, 0, &Interval);
  }
LABEL_147:
  for ( i = 0; i < *(_DWORD *)(a1 + 124); *(_WORD *)(v11 + 8 * v89 + 8) = -1 )
  {
    v89 = i++;
    v89 *= 2LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v89) = 0LL;
    v11 = *(_QWORD *)(a1 + 24);
  }
  *(_WORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  if ( !v101 && v6 != -1073740534 && (_BYTE)v3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(v4 + 948), 1u);
    LOBYTE(v11) = NvmeControllerRestart(v4);
  }
  *(_QWORD *)(a1 + 112) &= ~4uLL;
  return v11;
}
