/*
 * XREFs of RaidStartIoPacket @ 0x140005F70
 * Callers:
 *     RaUnitFlushSrb @ 0x140003AB0 (RaUnitFlushSrb.c)
 *     RaidUnitSubmitRequest @ 0x140004BD0 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidInsertDeviceQueue @ 0x1400234A0 (RaidInsertDeviceQueue.c)
 *     RaidCheckPerProcessorCompletions @ 0x14002ACE0 (RaidCheckPerProcessorCompletions.c)
 *     RaidAdapterRestartGateway @ 0x14002F760 (RaidAdapterRestartGateway.c)
 *     RaUnitRequestPowerUp @ 0x140034934 (RaUnitRequestPowerUp.c)
 *     RaidNotifyPerProcessorCompletions @ 0x1400552C0 (RaidNotifyPerProcessorCompletions.c)
 *     StorSubmitIoGatewayItem @ 0x1400563B0 (StorSubmitIoGatewayItem.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x14005A824 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x140078484 (RaidUnitIsRegisteredForIdleDetection.c)
 *     McTemplateK0zquuujqx_EtwWriteTransfer @ 0x1400B0968 (McTemplateK0zquuujqx_EtwWriteTransfer.c)
 *     PortSrbGetLbaFromCdb @ 0x14012FABC (PortSrbGetLbaFromCdb.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // r15
  char v7; // al
  unsigned __int8 *v9; // r11
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  int *v23; // rax
  int v24; // eax
  _BYTE *v25; // r11
  unsigned int v26; // r9d
  unsigned int v27; // ebx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r8
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r9
  signed __int32 v36; // r8d
  signed __int32 v37; // eax
  char v38; // al
  char v39; // al
  char v40; // dl
  __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  char *v44; // r8
  char v45; // al
  int *v46; // rax
  __int64 v47; // r8
  char v48; // r12
  unsigned __int8 v49; // r11
  char v50; // bl
  char v51; // r15
  char v52; // r14
  bool v53; // r13
  unsigned __int8 *v54; // rdi
  unsigned int v55; // esi
  unsigned int v56; // r10d
  __int64 v57; // rcx
  __int64 v58; // r9
  int v59; // ecx
  int v60; // ecx
  _BYTE *v61; // r10
  unsigned __int64 v62; // rcx
  char *v63; // rcx
  char v64; // al
  unsigned int v65; // eax
  signed __int32 v67; // eax
  signed __int32 v68; // r12d
  __int64 v69; // rcx
  __int64 v70; // r11
  __int64 v71; // rdi
  ULONG_PTR v72; // r8
  unsigned int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rax
  _WORD *v76; // rdx
  ULONG_PTR v77; // rdi
  __int64 v78; // rdi
  char v79; // al
  char *v81; // rsi
  unsigned int v82; // r10d
  unsigned int v83; // ebx
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // r9
  __int64 v87; // r8
  int v88; // ecx
  int v89; // ecx
  unsigned __int64 v90; // rcx
  unsigned __int8 v91; // bl
  unsigned int v92; // edi
  unsigned int i; // r9d
  __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  __int64 v96; // r10
  __int64 v97; // r8
  int v98; // ecx
  int v99; // ecx
  unsigned __int64 v100; // rcx
  char v101; // al
  __int64 v102; // rax
  __int64 LbaFromCdb; // rax
  __int64 ZoneIndexFromUnitAndLba; // rsi
  char *v105; // r9
  unsigned int v106; // r10d
  unsigned int v107; // ebx
  __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  __int64 v110; // r11
  __int64 v111; // r8
  int v112; // ecx
  int v113; // ecx
  unsigned __int64 v114; // rcx
  char v115; // cl
  unsigned __int64 v116; // r8
  __int64 v117; // rcx
  __int64 v118; // rbx
  unsigned int v119; // r10d
  __int64 v120; // r9
  __int64 v121; // rcx
  int v122; // esi
  int v123; // eax
  __int64 v124; // rax
  int v125; // esi
  __int64 v126; // r14
  unsigned int v127; // esi
  __int64 v128; // rdi
  unsigned __int8 v129; // bl
  __int64 v130; // r8
  volatile signed __int32 *v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rbx
  __int64 v134; // rsi
  _BYTE *v135; // rdi
  unsigned __int8 v136; // bl
  __int64 v137; // rcx
  _QWORD *v138; // rbx
  _DWORD *Pool; // rax
  int v140; // edi
  ULONGLONG v141; // rax
  KIRQL v142; // si
  int v143; // edi
  int v144; // r9d
  char v145; // r12
  __int64 v146; // rax
  char v147; // r14
  __int64 v148; // rcx
  __int64 v149; // rsi
  unsigned int v150; // edi
  unsigned __int64 v151; // r13
  unsigned __int64 v152; // rbx
  unsigned __int64 v153; // rax
  __int64 v154; // rbx
  unsigned int v155; // ebx
  char inserted; // di
  __int64 v157; // r10
  int v158; // eax
  _BYTE *v159; // r11
  unsigned int v160; // r9d
  unsigned int v161; // ebx
  __int64 v162; // rcx
  unsigned __int64 v163; // rdx
  __int64 v164; // r10
  unsigned __int64 v165; // rcx
  __int64 v166; // rdx
  bool v167; // zf
  KSPIN_LOCK *v168; // rcx
  char v169; // [rsp+60h] [rbp-A0h]
  KIRQL v170; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v173; // [rsp+70h] [rbp-90h]
  unsigned __int64 v174; // [rsp+70h] [rbp-90h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp-88h] BYREF
  __int64 v176; // [rsp+80h] [rbp-80h]
  __int64 v177; // [rsp+88h] [rbp-78h]
  int v178; // [rsp+94h] [rbp-6Ch] BYREF
  int v179; // [rsp+98h] [rbp-68h] BYREF
  int v180; // [rsp+9Ch] [rbp-64h]
  __int64 v181; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v182; // [rsp+A8h] [rbp-58h]
  __int128 v183; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v184; // [rsp+C0h] [rbp-40h]
  int v185; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v187; // [rsp+E8h] [rbp-18h] BYREF

  LOBYTE(v3) = 0;
  v177 = a1;
  v4 = a1;
  ProcNumber = 0;
  v184 = 0LL;
  v185 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v183 = 0LL;
  v182 = v5;
  v6 = *(_QWORD *)(v5 + 8);
  v176 = 0LL;
  v181 = 0LL;
  v179 = 0;
  v178 = 0;
  if ( !*(_BYTE *)(v4 + 3368) )
    goto LABEL_36;
  v7 = *(_BYTE *)(v6 + 2);
  if ( v7 == 40 ? *(_DWORD *)(v6 + 20) : *(unsigned __int8 *)(v6 + 2) )
    goto LABEL_36;
  if ( v7 != 40 )
  {
    v9 = (unsigned __int8 *)(v6 + 72);
    goto LABEL_25;
  }
  v9 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v10 = 0;
    v11 = *(_DWORD *)(v6 + 56);
    if ( !v11 )
    {
LABEL_21:
      LOBYTE(v3) = 0;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v12 = *(unsigned int *)(v6 + 4LL * v10 + 120);
      if ( (unsigned int)v12 < 0x80 )
        goto LABEL_20;
      v13 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v12 >= (unsigned int)v13 )
        goto LABEL_20;
      v14 = v12 + v6;
      v15 = (unsigned int)v12;
      v16 = *(_DWORD *)(v12 + v6);
      if ( v16 == 64 )
      {
        v18 = v15 + 40;
      }
      else
      {
        v17 = v16 - 65;
        if ( v17 )
        {
          if ( v17 == 1 && v15 + 40 <= v13 )
          {
            LOBYTE(v3) = 0;
            if ( *(_DWORD *)(v14 + 12) )
              v9 = (unsigned __int8 *)(v14 + 32);
            break;
          }
          goto LABEL_20;
        }
        v18 = v15 + 56;
      }
      if ( v18 <= v13 )
      {
        LOBYTE(v3) = 0;
        if ( *(_BYTE *)(v14 + 10) )
          v9 = (unsigned __int8 *)(v14 + 24);
        break;
      }
LABEL_20:
      if ( ++v10 >= v11 )
        goto LABEL_21;
    }
  }
LABEL_25:
  if ( v9
    && ((v19 = *v9, (_BYTE)v19 == 8)
     || (unsigned __int8)v19 <= 0x2Au && (v20 = 0x50000000400LL, _bittest64(&v20, v19))
     || (unsigned __int8)(v19 + 120) <= 0x22u && (v21 = 0x500000005LL, _bittest64(&v21, (unsigned int)(v19 + 120)))
     || (_BYTE)v19 == 37
     || (_BYTE)v19 == 0x9E
     || (_BYTE)v19 == 94
     || (_BYTE)v19 == 95) )
  {
    v169 = 1;
  }
  else
  {
LABEL_36:
    v169 = 0;
  }
  v22 = *(unsigned __int8 *)(v6 + 2);
  v23 = (int *)(v6 + 24);
  if ( (_BYTE)v22 != 40 )
    v23 = (int *)(v6 + 12);
  v167 = (*(_BYTE *)(v4 + 506) & 2) == 0;
  v180 = *v23;
  if ( !v167 )
  {
    v24 = (_BYTE)v22 == 40 ? *(_DWORD *)(v6 + 20) : v22;
    if ( v24 != 32 && v24 != 19 )
    {
      if ( v24 )
        goto LABEL_68;
      if ( (_BYTE)v22 != 40 )
      {
        v25 = (_BYTE *)(v6 + 72);
        goto LABEL_65;
      }
      v25 = 0LL;
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v26 = 0;
        v27 = *(_DWORD *)(v6 + 56);
        if ( !v27 )
        {
LABEL_61:
          LOBYTE(v3) = 0;
          goto LABEL_65;
        }
        while ( 1 )
        {
          v28 = *(unsigned int *)(v6 + 4LL * v26 + 120);
          if ( (unsigned int)v28 < 0x80 )
            goto LABEL_60;
          v29 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v28 >= (unsigned int)v29 )
            goto LABEL_60;
          v30 = v28 + v6;
          v31 = (unsigned int)v28;
          v32 = *(_DWORD *)(v28 + v6);
          if ( v32 == 64 )
          {
            v34 = v31 + 40;
          }
          else
          {
            v33 = v32 - 65;
            if ( v33 )
            {
              if ( v33 == 1 && v31 + 40 <= v29 )
              {
                LOBYTE(v3) = 0;
                if ( *(_DWORD *)(v30 + 12) )
                  v25 = (_BYTE *)(v30 + 32);
                break;
              }
              goto LABEL_60;
            }
            v34 = v31 + 56;
          }
          if ( v34 <= v29 )
          {
            LOBYTE(v3) = 0;
            if ( *(_BYTE *)(v30 + 10) )
              v25 = (_BYTE *)(v30 + 24);
            break;
          }
LABEL_60:
          if ( ++v26 >= v27 )
            goto LABEL_61;
        }
      }
LABEL_65:
      if ( !v25 || *v25 != 18 && *v25 != 0xA0 )
      {
LABEL_68:
        v35 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v36 = *(_DWORD *)(v35 + *(_QWORD *)(v4 + 40));
        if ( (v36 & 1) != 0 )
        {
LABEL_71:
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v4 + 520), 0, 0);
        }
        else
        {
          while ( 1 )
          {
            v37 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 40) + v35), v36 - 2, v36);
            v167 = v36 == v37;
            v36 = v37;
            if ( v167 )
              break;
            if ( (v37 & 1) != 0 )
              goto LABEL_71;
          }
        }
        v38 = *(_BYTE *)(v6 + 3);
        if ( *(_BYTE *)(v6 + 2) == 40 )
        {
          v39 = ((v38 >> 7) & 0x80) + 56;
        }
        else
        {
          v40 = 56;
          if ( v38 < 0 )
            v40 = -72;
          v39 = v40;
        }
        v41 = a2;
        *(_BYTE *)(v6 + 3) = v39;
        v167 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = -1073740534;
        if ( v167 )
          goto LABEL_138;
        v187 = 0LL;
        IoGetActivityIdIrp(a2, &v187);
        v44 = *(char **)(a2 + 184);
        v45 = *v44;
        if ( *v44 != 15 )
        {
          if ( v45 == 14 )
          {
            if ( (byte_140173442 & 8) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v43, &EventNonReadWriteRequestComplete, &v187, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( v45 == 27 )
          {
            if ( v44[1] != 7 || *((_DWORD *)v44 + 2) )
            {
              if ( (byte_140173442 & 0x20) != 0 )
                McTemplateK0pd_EtwWriteTransfer(v43, &EventPnpRequestComplete, &v187, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( (byte_140173442 & 0x40) != 0 )
            {
              v46 = *(int **)(a2 + 56);
              if ( v46 )
                v3 = *v46;
              McTemplateK0pqd_EtwWriteTransfer(v43, v42, (unsigned int)&v187, a2, v3, *(_DWORD *)(a2 + 48));
            }
          }
          goto LABEL_138;
        }
        if ( byte_140173441 < 0 )
        {
          v47 = *((_QWORD *)v44 + 1);
          v48 = 0;
          v49 = 0;
          v50 = 0;
          v51 = 0;
          v52 = 0;
          v53 = 0;
          if ( *(_BYTE *)(v47 + 2) == 40 )
          {
            v54 = 0LL;
            if ( *(_DWORD *)(v47 + 20) )
              goto LABEL_137;
            v55 = *(_DWORD *)(v47 + 56);
            v56 = 0;
            if ( !v55 )
              goto LABEL_137;
            while ( 1 )
            {
              v57 = *(unsigned int *)(v47 + 4LL * v56 + 120);
              if ( (unsigned int)v57 < 0x80 )
                goto LABEL_108;
              v42 = *(unsigned int *)(v47 + 16);
              if ( (unsigned int)v57 >= (unsigned int)v42 )
                goto LABEL_108;
              v58 = (unsigned int)v57;
              v59 = *(_DWORD *)(v57 + v47);
              if ( v59 == 64 )
              {
                v62 = v58 + 40;
              }
              else
              {
                v60 = v59 - 65;
                if ( v60 )
                {
                  if ( v60 == 1 && v58 + 40 <= v42 )
                  {
                    if ( *(_DWORD *)(v58 + v47 + 12) )
                      v54 = (unsigned __int8 *)(v58 + v47 + 32);
                    v48 = *(_BYTE *)(v58 + v47 + 8);
                    v61 = *(_BYTE **)(v58 + v47 + 24);
                    v49 = *(_BYTE *)(v58 + v47 + 9);
                    goto LABEL_110;
                  }
                  goto LABEL_108;
                }
                v62 = v58 + 56;
              }
              if ( v62 <= v42 )
              {
                if ( *(_BYTE *)(v58 + v47 + 10) )
                  v54 = (unsigned __int8 *)(v58 + v47 + 24);
                v48 = *(_BYTE *)(v58 + v47 + 8);
                v61 = *(_BYTE **)(v58 + v47 + 16);
                v49 = *(_BYTE *)(v58 + v47 + 9);
LABEL_110:
                if ( v54 )
                {
                  LODWORD(v63) = *v54;
                  v41 = a2;
                  goto LABEL_116;
                }
                goto LABEL_137;
              }
LABEL_108:
              if ( ++v56 >= v55 )
              {
                v61 = 0LL;
                goto LABEL_110;
              }
            }
          }
          LODWORD(v63) = *(unsigned __int8 *)(v47 + 72);
          v61 = *(_BYTE **)(v47 + 32);
          v49 = *(_BYTE *)(v47 + 11);
          v48 = *(_BYTE *)(v47 + 4);
          if ( *(_BYTE *)(v47 + 2) )
            goto LABEL_137;
LABEL_116:
          LOBYTE(v63) = (_BYTE)v63 - 8;
          if ( ((unsigned __int8)v63 & 0x5D) == 0 )
          {
            if ( *(_BYTE *)(v47 + 3) == 1 || !v61 || !v49 )
            {
LABEL_133:
              if ( byte_140173441 < 0 )
              {
                if ( !v53 )
                {
                  v52 = 0;
                  v51 = 0;
                  v50 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  (_DWORD)v63,
                  v42,
                  (unsigned int)&v187,
                  v41,
                  *(_DWORD *)(v41 + 48),
                  *(_BYTE *)(v47 + 3),
                  v48,
                  v50,
                  v51,
                  v52,
                  v41);
              }
              goto LABEL_137;
            }
            v64 = *v61 & 0x7F;
            if ( v64 == 114 || v64 == 115 )
            {
              v63 = &v61[v49];
              LOBYTE(v42) = 0;
              if ( v61 + 8 <= v63 )
              {
                v51 = v61[2];
                v50 = v61[1] & 0xF;
                v52 = v61[3];
LABEL_131:
                LOBYTE(v42) = 1;
              }
            }
            else
            {
              v63 = &v61[v49];
              LOBYTE(v42) = 0;
              if ( v61 + 8 <= v63 )
              {
                v50 = v61[2] & 0xF;
                v65 = v49;
                if ( (unsigned int)(unsigned __int8)v61[7] + 8 <= v49 )
                  v65 = (unsigned __int8)v61[7] + 8;
                v63 = v61 + 13;
                v42 = (unsigned __int64)&v61[v65];
                if ( (unsigned __int64)(v61 + 13) <= v42 )
                  v51 = v61[12];
                if ( (unsigned __int64)(v61 + 14) <= v42 )
                  v52 = *v63;
                goto LABEL_131;
              }
            }
            v53 = (_BYTE)v42 != 0;
            goto LABEL_133;
          }
LABEL_137:
          v4 = v177;
        }
LABEL_138:
        IofCompleteRequest((PIRP)a2, 0);
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2232));
        return 1LL;
      }
    }
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
    v176 = v6;
  }
  else
  {
    if ( !*(_QWORD *)(v6 + 40) )
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 56);
    *(struct _PROCESSOR_NUMBER *)(v6 + 56) = ProcNumber;
  }
  v67 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 896), 0, 0);
  v167 = (*(_BYTE *)(v4 + 136) & 2) == 0;
  *(_QWORD *)&v187 = -1LL;
  v68 = v67;
  if ( v167 )
  {
    v78 = a2;
    goto LABEL_249;
  }
  v69 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v69 != 15 )
    goto LABEL_248;
  v70 = *(_QWORD *)(v69 + 8);
  if ( !v70 )
  {
    v71 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL);
    v72 = *(_QWORD *)(v71 + 48);
    if ( !v72 )
      goto LABEL_154;
    v73 = *(unsigned __int16 *)(v71 + 40);
    if ( !(_WORD)v73 )
      goto LABEL_154;
    v74 = v73 >> 1;
    if ( !(v73 >> 1) )
      goto LABEL_154;
    while ( 1 )
    {
      v75 = v74 - 1;
      v76 = (_WORD *)(v72 + 2 * v75);
      --v74;
      if ( *v76 == 92 )
        break;
      if ( !(_DWORD)v75 )
        goto LABEL_154;
    }
    v77 = (ULONG_PTR)(v76 + 1);
    if ( !v76 )
LABEL_154:
      v77 = v72;
    if ( MiniportBugActionPolicy == 1 )
    {
      if ( (byte_140173444 & 0x10) != 0 )
        McTemplateK0zquuujqx_EtwWriteTransfer(
          MEMORY[0xA8],
          *(_DWORD *)(MEMORY[0xE0] + 104LL) >> 8,
          728,
          v77,
          *(_DWORD *)(*(_QWORD *)(MEMORY[0xE0] + 24LL) + 56LL),
          *(_DWORD *)(MEMORY[0xE0] + 104LL),
          BYTE1(*(_DWORD *)(MEMORY[0xE0] + 104LL)),
          BYTE2(*(_DWORD *)(MEMORY[0xE0] + 104LL)),
          MEMORY[0xE0] + 2104LL,
          **(_BYTE **)(a2 + 184),
          MEMORY[0xA8]);
    }
    else if ( MiniportBugActionPolicy == 2 )
    {
      KeBugCheckEx(0xF0u, 7uLL, v77, **(unsigned __int8 **)(a2 + 184), MEMORY[0xA8]);
    }
    ++*(_DWORD *)(v4 + 3484);
    goto LABEL_159;
  }
  v79 = *(_BYTE *)(v70 + 2);
  if ( v79 == 40 ? *(_DWORD *)(v70 + 20) : *(unsigned __int8 *)(v70 + 2) )
  {
LABEL_248:
    v78 = a2;
    goto LABEL_249;
  }
  if ( v79 != 40 )
  {
    v91 = *(_BYTE *)(v70 + 10);
    v81 = (char *)(v70 + 72);
    goto LABEL_200;
  }
  v81 = 0LL;
  if ( !*(_DWORD *)(v70 + 20) )
  {
    v82 = 0;
    v83 = *(_DWORD *)(v70 + 56);
    if ( v83 )
    {
      do
      {
        v84 = *(unsigned int *)(v70 + 4LL * v82 + 120);
        if ( (unsigned int)v84 < 0x80 )
          goto LABEL_180;
        v85 = *(unsigned int *)(v70 + 16);
        if ( (unsigned int)v84 >= (unsigned int)v85 )
          goto LABEL_180;
        v86 = v84 + v70;
        v87 = (unsigned int)v84;
        v88 = *(_DWORD *)(v84 + v70);
        if ( v88 == 64 )
        {
          v90 = v87 + 40;
        }
        else
        {
          v89 = v88 - 65;
          if ( v89 )
          {
            if ( v89 == 1 && v87 + 40 <= v85 )
            {
              if ( *(_DWORD *)(v86 + 12) )
                v81 = (char *)(v86 + 32);
              break;
            }
            goto LABEL_180;
          }
          v90 = v87 + 56;
        }
        if ( v90 <= v85 )
        {
          if ( *(_BYTE *)(v86 + 10) )
            v81 = (char *)(v86 + 24);
          break;
        }
LABEL_180:
        ++v82;
      }
      while ( v82 < v83 );
    }
  }
  v91 = 0;
  if ( !*(_DWORD *)(v70 + 20) )
  {
    v92 = *(_DWORD *)(v70 + 56);
    for ( i = 0; i < v92; ++i )
    {
      v94 = *(unsigned int *)(v70 + 4LL * i + 120);
      if ( (unsigned int)v94 < 0x80 )
        continue;
      v95 = *(unsigned int *)(v70 + 16);
      if ( (unsigned int)v94 >= (unsigned int)v95 )
        continue;
      v96 = v94 + v70;
      v97 = (unsigned int)v94;
      v98 = *(_DWORD *)(v94 + v70);
      if ( v98 == 64 )
      {
        v100 = v97 + 40;
      }
      else
      {
        v99 = v98 - 65;
        if ( v99 )
        {
          if ( v99 == 1 && v97 + 40 <= v95 )
            break;
          continue;
        }
        v100 = v97 + 56;
      }
      if ( v100 <= v95 )
      {
        v91 = *(_BYTE *)(v96 + 10);
        break;
      }
    }
  }
LABEL_200:
  if ( !v81 )
    goto LABEL_159;
  v101 = *v81;
  if ( *v81 != 10 && v101 != 42 && v101 != -86 && v101 != -118 )
    goto LABEL_159;
  if ( !*(_DWORD *)(v4 + 932) )
    goto LABEL_159;
  v102 = 24LL;
  if ( *(_BYTE *)(v70 + 2) != 40 )
    v102 = 12LL;
  if ( (*(_DWORD *)(v102 + v70) & 0x1000) == 0 || !*(_QWORD *)(v4 + 3440) )
  {
LABEL_159:
    v78 = a2;
    goto LABEL_249;
  }
  LbaFromCdb = PortSrbGetLbaFromCdb(v81, v91);
  v78 = a2;
  ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v4, LbaFromCdb);
  if ( (unsigned __int8)RaidUpdateZoneIoReceiveWithStatus(v4 + 720, a2) || v68 )
  {
    v122 = a3 | 0x20;
    a3 |= 0x20u;
    goto LABEL_250;
  }
  RtlInterlockedSetBitRun(v4 + 3448, (unsigned int)ZoneIndexFromUnitAndLba, 1LL);
  if ( (qword_140172448 & 0x1000) == 0 )
    goto LABEL_249;
  HIDWORD(v173) = 0;
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v105 = (char *)(v6 + 72);
    goto LABEL_232;
  }
  v105 = 0LL;
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_232;
  v106 = 0;
  v107 = *(_DWORD *)(v6 + 56);
  if ( !v107 )
    goto LABEL_232;
  while ( 1 )
  {
    v108 = *(unsigned int *)(v6 + 4LL * v106 + 120);
    if ( (unsigned int)v108 < 0x80 )
      goto LABEL_227;
    v109 = *(unsigned int *)(v6 + 16);
    if ( (unsigned int)v108 >= (unsigned int)v109 )
      goto LABEL_227;
    v110 = v108 + v6;
    v111 = (unsigned int)v108;
    v112 = *(_DWORD *)(v108 + v6);
    if ( v112 == 64 )
      break;
    v113 = v112 - 65;
    if ( !v113 )
    {
      v114 = v111 + 56;
      goto LABEL_226;
    }
    if ( v113 == 1 && v111 + 40 <= v109 )
    {
      if ( *(_DWORD *)(v110 + 12) )
        v105 = (char *)(v110 + 32);
      goto LABEL_232;
    }
LABEL_227:
    if ( ++v106 >= v107 )
      goto LABEL_232;
  }
  v114 = v111 + 40;
LABEL_226:
  if ( v114 > v109 )
    goto LABEL_227;
  if ( *(_BYTE *)(v110 + 10) )
    v105 = (char *)(v110 + 24);
LABEL_232:
  v115 = *v105;
  if ( *v105 == 8 || v115 == 10 )
  {
    v116 = (unsigned __int8)v105[3] | (((unsigned __int8)v105[2] | ((unsigned __int64)(v105[1] & 0x1F) << 8)) << 8);
  }
  else if ( ((v115 - 40) & 0xFD) != 0 && ((v115 + 88) & 0xFD) != 0 )
  {
    if ( ((v115 + 120) & 0xFD) != 0 )
    {
      v116 = -1LL;
    }
    else
    {
      HIBYTE(v174) = v105[2];
      BYTE6(v174) = v105[3];
      BYTE5(v174) = v105[4];
      BYTE4(v174) = v105[5];
      BYTE3(v174) = v105[6];
      BYTE2(v174) = v105[7];
      BYTE1(v174) = v105[8];
      LOBYTE(v174) = v105[9];
      v116 = v174;
    }
  }
  else
  {
    BYTE3(v173) = v105[2];
    BYTE2(v173) = v105[3];
    BYTE1(v173) = v105[4];
    LOBYTE(v173) = v105[5];
    v116 = v173;
  }
  v117 = *(_QWORD *)(v4 + 24);
  v118 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 3440) + ZoneIndexFromUnitAndLba);
  if ( v117 )
  {
    if ( *(_DWORD *)v117 != 1314275652 )
    {
      v119 = *(_DWORD *)(v117 + 4996);
      if ( v119 )
      {
        v120 = *(_QWORD *)(v117 + 5000);
        if ( v120 )
        {
          v121 = v120 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v117 + 4992)) % v119);
          *(_DWORD *)v121 = 47;
          *(_QWORD *)(v121 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v121 + 8) = v116;
          *(_QWORD *)(v121 + 16) = ZoneIndexFromUnitAndLba;
          *(_QWORD *)(v121 + 24) = v118;
          *(_QWORD *)(v121 + 32) = 1LL;
        }
      }
    }
  }
LABEL_249:
  v122 = a3;
LABEL_250:
  v123 = *(unsigned __int8 *)(v6 + 2);
  if ( (_BYTE)v123 == 40 )
    v123 = *(_DWORD *)(v6 + 20);
  if ( v123 == 9 )
    goto LABEL_260;
  if ( v123 != 8 )
  {
    switch ( v123 )
    {
      case 0:
      case 2:
      case 7:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        goto LABEL_260;
      case 16:
        v124 = *(_QWORD *)(v4 + 24);
        if ( !v124 || *(_DWORD *)v124 != 1094997074 || (*(_BYTE *)(v124 + 604) & 0x10) == 0 )
          goto LABEL_261;
        goto LABEL_260;
      default:
        goto LABEL_261;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 24) + 467LL) )
  {
LABEL_260:
    if ( (v180 & 0x100800) != 0 )
      goto LABEL_261;
LABEL_265:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(v4 + 504) < 0 || (*(_BYTE *)(v4 + 505) & 1) != 0 )
    {
      v133 = *(_QWORD *)(v4 + 24);
      v134 = *(_QWORD *)(v78 + 184);
      v135 = (_BYTE *)(v133 + 108);
      if ( *(_QWORD *)(v133 + 5024) )
      {
        if ( (*v135 & 1) != 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v133 + 5344));
          if ( (*v135 & 2) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(v133 + 5352));
        }
        PoFxActivateComponent(**(_QWORD **)(v133 + 5024), 0LL, 2LL);
        v136 = 2;
      }
      else
      {
        v136 = 0;
      }
      if ( (*(_DWORD *)(v4 + 504) & 0x8000) != 0
        && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864)) )
      {
        if ( (*v135 & 1) != 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2168));
          if ( (*v135 & 2) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2176));
        }
        v137 = *(_QWORD *)(v4 + 1872);
        if ( (*(_DWORD *)(v137 + 148) & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v137 + 144));
          v137 = *(_QWORD *)(v4 + 1872);
        }
        PoFxActivateComponent(*(_QWORD *)v137, 0LL, 2LL);
        v136 |= 1u;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864));
      }
      *(_QWORD *)(v134 + 16) = v136;
    }
    else
    {
      v126 = *(_QWORD *)(v78 + 184);
      v127 = 5;
      v128 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v128 + 5024) )
      {
        if ( (*(_BYTE *)(v128 + 108) & 1) != 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v128 + 5344));
          if ( (*(_BYTE *)(v128 + 108) & 2) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(v128 + 5352));
        }
        v130 = 5LL;
        if ( !*(_DWORD *)(v128 + 92) )
          v130 = 1LL;
        PoFxActivateComponent(**(_QWORD **)(v128 + 5024), 0LL, v130);
        v129 = 2;
      }
      else
      {
        v129 = 0;
      }
      if ( (*(_DWORD *)(v4 + 504) & 0x8000) != 0
        && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864)) )
      {
        if ( (*(_BYTE *)(v128 + 108) & 1) != 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2168));
          if ( (*(_BYTE *)(v128 + 108) & 2) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2176));
        }
        v131 = *(volatile signed __int32 **)(v4 + 1872);
        if ( (v131[37] & 1) != 0 )
        {
          _InterlockedIncrement(v131 + 36);
          v131 = *(volatile signed __int32 **)(v4 + 1872);
        }
        v132 = *(_QWORD *)v131;
        if ( !*(_DWORD *)(v4 + 1036) )
          v127 = 1;
        PoFxActivateComponent(v132, 0LL, v127);
        v129 |= 1u;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864));
      }
      *(_QWORD *)(v126 + 16) = v129;
    }
    v125 = a3;
  }
  else
  {
LABEL_261:
    v125 = v122 | 8;
    a3 = v125;
    *(_QWORD *)(v182 + 16) = 0LL;
    if ( (*(_DWORD *)(v4 + 504) & 0x8000) != 0
      && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864)) )
    {
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864));
    }
    else if ( *(_QWORD *)(*(_QWORD *)(v4 + 24) + 5024LL) )
    {
      goto LABEL_265;
    }
  }
  if ( v169 )
  {
    v138 = 0LL;
    if ( *(_DWORD *)(v4 + 3392) != -1 || *(_DWORD *)(v4 + 3376) != -1 || *(_DWORD *)(v4 + 3380) )
    {
      Pool = (_DWORD *)RaidAllocatePool(64LL, 56LL, 1413701970LL, *(_QWORD *)(v4 + 8));
      v138 = Pool;
      if ( Pool )
      {
        *Pool = 300819165;
        v140 = *(_DWORD *)(v4 + 3392);
        if ( v140 == -1 )
          v141 = -1LL;
        else
          v141 = (unsigned int)(5000000 * v140) + KeQueryUnbiasedInterruptTime();
        v138[1] = v141;
        v138[5] = a2;
        a3 = v125 | 0x10;
        v138[6] = v4;
      }
    }
    if ( *(_BYTE *)(v6 + 2) == 40 )
    {
      v176 = v6;
      if ( v138 )
      {
        v138[2] = *(_QWORD *)(v6 + 96);
        *(_QWORD *)(v6 + 96) = v138;
      }
      *(_DWORD *)(v6 + 40) = *(_DWORD *)(v4 + 3384);
    }
    else
    {
      if ( v138 )
      {
        v138[2] = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = v138;
      }
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(v4 + 3384);
    }
  }
  v142 = KfRaiseIrql(2u);
  v170 = v142;
  v143 = a2;
  v145 = RaidNotifyPerProcessorCompletions(*(_QWORD *)(v4 + 24), &ProcNumber);
  v146 = v182;
  v147 = 0;
  *(_BYTE *)(a2 + 141) = -87;
  *(_QWORD *)(v146 + 32) = v4;
  v148 = *(_QWORD *)(v4 + 24);
  if ( v148 )
  {
    v149 = *(_QWORD *)(v4 + 560);
    if ( v149 && *(_QWORD *)(v148 + 4960) )
    {
      v150 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *(_DWORD *)(v149 + 8) )
      {
        v151 = -1LL;
        do
        {
          v152 = (unsigned __int64)v150 << 6;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v152 + v149 + 104), &LockHandle);
          v153 = v152 + v149 + 64;
          if ( *(_QWORD *)v153 != v153 && *(_QWORD *)(*(_QWORD *)v153 + 40LL) < v151 )
            v151 = *(_QWORD *)(*(_QWORD *)v153 + 40LL);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          ++v150;
        }
        while ( v150 < *(_DWORD *)(v149 + 8) );
        *(_QWORD *)&v187 = v151;
        v4 = v177;
      }
      v154 = 0LL;
      if ( (_QWORD)v187 != -1LL )
        v154 = v187;
      if ( v154 )
        v147 = KeQueryUnbiasedInterruptTime() - v154 > *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4960LL);
      v143 = a2;
    }
    v142 = v170;
  }
  v155 = 0;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v176 = v6;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 28) = 0;
  }
  inserted = RaidInsertDeviceQueue((int)v4 + 720, v143, a3, v144, v147, (__int64)&v181, (__int64)&v179, (__int64)&v178);
  if ( !inserted )
    goto LABEL_378;
  if ( v147 )
    ++*(_QWORD *)(v4 + 2096);
  if ( *(_BYTE *)(v6 + 2) != 40 )
    goto LABEL_370;
  v157 = v176;
  v158 = HIDWORD(v181);
  *(_DWORD *)(v176 + 4) = v181;
  *(_DWORD *)(v157 + 28) = v158;
  if ( !*(_DWORD *)(v4 + 2372) )
    goto LABEL_370;
  if ( *(_BYTE *)(v157 + 2) != 40 )
  {
    v159 = (_BYTE *)(v157 + 72);
    goto LABEL_363;
  }
  v159 = 0LL;
  if ( *(_DWORD *)(v157 + 20) )
  {
LABEL_359:
    v157 = v176;
    goto LABEL_363;
  }
  v160 = 0;
  v161 = *(_DWORD *)(v157 + 56);
  if ( !v161 )
  {
LABEL_358:
    v155 = 0;
    goto LABEL_359;
  }
  while ( 1 )
  {
    v162 = *(unsigned int *)(v157 + 4LL * v160 + 120);
    if ( (unsigned int)v162 < 0x80 )
      goto LABEL_357;
    v163 = *(unsigned int *)(v157 + 16);
    if ( (unsigned int)v162 >= (unsigned int)v163 )
      goto LABEL_357;
    v164 = v162 + v157;
    if ( *(_DWORD *)v164 == 64 )
    {
      v165 = (unsigned int)v162 + 40LL;
    }
    else
    {
      if ( *(_DWORD *)v164 != 65 )
      {
        if ( *(_DWORD *)v164 == 66 && (unsigned __int64)(unsigned int)v162 + 40 <= v163 )
        {
          v155 = 0;
          if ( !*(_DWORD *)(v164 + 12) )
            goto LABEL_359;
          v159 = (_BYTE *)(v164 + 32);
          v157 = v176;
          goto LABEL_363;
        }
        goto LABEL_356;
      }
      v165 = (unsigned int)v162 + 56LL;
    }
    if ( v165 <= v163 )
      break;
LABEL_356:
    v157 = v176;
LABEL_357:
    if ( ++v160 >= v161 )
      goto LABEL_358;
  }
  v155 = 0;
  if ( !*(_BYTE *)(v164 + 10) )
    goto LABEL_359;
  v159 = (_BYTE *)(v164 + 24);
  v157 = v176;
LABEL_363:
  if ( v159 && !*(_DWORD *)(v157 + 20) && (((*v159 - 8) & 0x5D) == 0 || *v159 == 66 || *v159 == 53 || *v159 == 0x91) )
    *(_DWORD *)(v157 + 48) = v178;
LABEL_370:
  switch ( v179 )
  {
    case 1:
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2328));
      break;
    case 4:
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2336));
      break;
    case 5:
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2344));
      break;
    case 6:
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2352));
      break;
  }
LABEL_378:
  if ( (a3 & 8) == 0
    && *(_BYTE *)(v4 + 759)
    && !(unsigned __int8)RaidUnitIsRegisteredForIdleDetection(v4)
    && (*(_DWORD *)(v4 + 512) & 0x70) == 0 )
  {
    RaUnitRequestPowerUp();
  }
  if ( !inserted )
  {
    *(_BYTE *)(a2 + 141) = -88;
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(v4 + 728), a2 + 120, &v183) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v4 + 712))(*(_QWORD *)(v4 + 704), a2, &v183, 0LL);
      v155 = 1;
      goto LABEL_396;
    }
    v166 = *(_QWORD *)(v4 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(v166 + 48) + 112LL) & 4) != 0 )
    {
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( *(_DWORD *)(v166 + 40) == 1699901262 && *(_DWORD *)(v166 + 24) )
        {
          v167 = *(_DWORD *)(v166 + 192) == 0;
LABEL_394:
          if ( v167 )
          {
            v168 = *(KSPIN_LOCK **)(v4 + 728);
            *(_DWORD *)(v166 + 40) = 0;
            RaidAdapterRestartGateway(v168);
          }
        }
      }
      else if ( *(_DWORD *)(v166 + 40) == 1699901262 && *(_DWORD *)(v166 + 24) )
      {
        v167 = *(_DWORD *)(v166 + 192) == 0;
        goto LABEL_394;
      }
    }
  }
LABEL_396:
  if ( v145 == 1 )
    RaidCheckPerProcessorCompletions(*(_QWORD *)(v4 + 24), &ProcNumber);
  KeLowerIrql(v142);
  return v155;
}
