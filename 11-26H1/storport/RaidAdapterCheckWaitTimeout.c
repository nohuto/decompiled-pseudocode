/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x14004B9A8
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x14004F1F0 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140012998 (RaidDeleteDeviceQueueEntry.c)
 *     GatewayCheckWaitTimeout @ 0x14004C4D8 (GatewayCheckWaitTimeout.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x140074394 (RaidLunQueueCheckWaitTimeout.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(KSPIN_LOCK *a1)
{
  KSPIN_LOCK v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // si
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // al
  char v14; // cl
  char v15; // cl
  char v16; // al
  int v17; // eax
  char v18; // al
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  int v23; // ecx
  void *v24; // rdx
  _BYTE *v25; // rdx
  _BYTE *v26; // r9
  unsigned __int8 v27; // r11
  char v28; // r10
  char v29; // r12
  char v30; // r15
  char v31; // bl
  char *v32; // rbx
  char v33; // si
  unsigned int v34; // r14d
  __int64 v35; // rdi
  unsigned __int64 v36; // r10
  __int64 v37; // r8
  int v38; // ecx
  char v39; // di
  char v40; // cl
  char v41; // r8
  char v42; // al
  unsigned int v43; // eax
  unsigned int v44; // r13d
  KSPIN_LOCK *v45; // rbx
  unsigned int v46; // r14d
  KSPIN_LOCK *v47; // r15
  unsigned int v48; // r12d
  KSPIN_LOCK *v49; // rsi
  KSPIN_LOCK *i; // rdi
  KSPIN_LOCK *v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // edi
  KSPIN_LOCK *v54; // rbx
  unsigned int v55; // r15d
  unsigned int v56; // eax
  KSPIN_LOCK v57; // r8
  unsigned __int64 v58; // r9
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rdi
  __int64 v64; // r8
  __int64 v65; // rsi
  char v66; // r14
  __int64 v67; // rbx
  unsigned __int64 v68; // r9
  signed __int32 v69; // eax
  signed __int32 v70; // ett
  __int64 v71; // rax
  char v72; // al
  char v73; // cl
  char v74; // cl
  char v75; // al
  int v76; // eax
  char v77; // al
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  int *v80; // rax
  int v81; // ecx
  void *v82; // rdx
  _BYTE *v83; // rdx
  _BYTE *v84; // r9
  unsigned __int8 v85; // r11
  char v86; // r15
  char v87; // r12
  char v88; // r14
  char v89; // bl
  char *v90; // rbx
  char v91; // r13
  __int64 v92; // rdi
  unsigned __int64 v93; // r10
  __int64 v94; // r8
  int v95; // ecx
  char v96; // r10
  char v97; // cl
  char v98; // r8
  char v99; // al
  unsigned int v100; // eax
  char v101; // [rsp+68h] [rbp-29h]
  char v102; // [rsp+68h] [rbp-29h]
  unsigned int v103; // [rsp+6Ch] [rbp-25h]
  unsigned int v104; // [rsp+6Ch] [rbp-25h]
  _QWORD v105[2]; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v106; // [rsp+80h] [rbp-11h]
  int v107; // [rsp+84h] [rbp-Dh]
  KSPIN_LOCK *Pool; // [rsp+90h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp+7h] BYREF
  __int128 v110; // [rsp+B0h] [rbp+1Fh] BYREF

  Pool = a1;
  v1 = a1[128];
  v106 = 0;
  v105[1] = v105;
  v105[0] = v105;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v107 = DpcCompletionLimit;
  v103 = GatewayCheckWaitTimeout(v1, (unsigned int)DpcCompletionLimit, v105);
  while ( 1 )
  {
    v2 = v105[0];
    if ( (_QWORD *)v105[0] == v105 )
      break;
    if ( *(_QWORD **)(v105[0] + 8LL) != v105
      || (v3 = *(_QWORD *)v105[0], *(_QWORD *)(*(_QWORD *)v105[0] + 8LL) != v105[0]) )
    {
LABEL_212:
      __fastfail(3u);
    }
    v105[0] = *(_QWORD *)v105[0];
    *(_QWORD *)(v3 + 8) = v105;
    v4 = (_QWORD *)(v2 - 24);
    v5 = *(_QWORD *)(v2 - 24 + 48);
    v6 = *(_QWORD *)(v2 - 24 + 40);
    v7 = *(_BYTE *)(v5 + 506);
    RaidDeleteDeviceQueueEntry(v5 + 720, *(_BYTE *)(v6 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 2248));
    v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v9 = *(_DWORD *)(v8 + *(_QWORD *)(v5 + 40));
    while ( (v9 & 1) == 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(v5 + 40)), v9 - 2, v9);
      if ( v10 == v9 )
        goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_11:
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8LL);
    v12 = v4[2];
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      *(_QWORD *)(v11 + 96) = v12;
    }
    else
    {
      *(_QWORD *)(v11 + 48) = v12;
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_QWORD *)(v11 + 40) = 0LL;
    }
    ExFreePoolWithTag(v4, 0x54436152u);
    v13 = *(_BYTE *)(v11 + 2);
    v14 = *(_BYTE *)(v11 + 3);
    if ( (v7 & 2) != 0 )
    {
      if ( v13 == 40 )
      {
        v15 = ((v14 >> 7) & 0x80) + 56;
      }
      else
      {
        v16 = 56;
        if ( v14 < 0 )
          v16 = -72;
        v15 = v16;
      }
      v17 = -1073740534;
    }
    else
    {
      if ( v13 == 40 )
      {
        v15 = ((v14 >> 7) & 0x80) + 9;
      }
      else
      {
        v18 = 9;
        if ( v14 < 0 )
          v18 = -119;
        v15 = v18;
      }
      v17 = 258;
    }
    *(_BYTE *)(v11 + 3) = v15;
    v19 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v6 + 141) = -84;
    *(_DWORD *)(v6 + 48) = v17;
    if ( !v19 )
    {
      v110 = 0LL;
      IoGetActivityIdIrp(v6, &v110);
      v21 = *(_QWORD *)(v6 + 184);
      switch ( *(_BYTE *)v21 )
      {
        case 0xE:
          if ( (byte_140173442 & 8) != 0 )
          {
            v24 = &EventNonReadWriteRequestComplete;
LABEL_40:
            McTemplateK0pd_EtwWriteTransfer(v20, v24, &v110, v6, *(_DWORD *)(v6 + 48));
          }
          break;
        case 0xF:
          if ( byte_140173441 >= 0 )
            break;
          v25 = *(_BYTE **)(v21 + 8);
          v101 = 0;
          v26 = 0LL;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          if ( v25[2] != 40 )
          {
            v40 = v25[72];
            v26 = (_BYTE *)*((_QWORD *)v25 + 4);
            v27 = v25[11];
            v39 = v25[4];
            if ( v25[2] )
              break;
LABEL_69:
            LOBYTE(v20) = v40 - 8;
            if ( (v20 & 0x5D) != 0 )
              break;
            v41 = v25[3];
            if ( v41 != 1 && v26 && v27 )
            {
              v42 = *v26 & 0x7F;
              if ( v42 == 114 || v42 == 115 )
              {
                v20 = (unsigned __int64)&v26[v27];
                LOBYTE(v25) = 0;
                if ( (unsigned __int64)(v26 + 8) <= v20 )
                {
                  v29 = v26[2];
                  v28 = v26[1] & 0xF;
                  v30 = v26[3];
                  goto LABEL_84;
                }
              }
              else
              {
                v20 = (unsigned __int64)&v26[v27];
                LOBYTE(v25) = 0;
                if ( (unsigned __int64)(v26 + 8) <= v20 )
                {
                  v25 = v26 + 13;
                  v28 = v26[2] & 0xF;
                  v43 = v27;
                  if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
                    v43 = (unsigned __int8)v26[7] + 8;
                  v20 = (unsigned __int64)&v26[v43];
                  if ( (unsigned __int64)v25 <= v20 )
                    v29 = v26[12];
                  if ( (unsigned __int64)(v26 + 14) <= v20 )
                    v30 = *v25;
LABEL_84:
                  LOBYTE(v25) = 1;
                }
              }
              if ( (_BYTE)v25 )
                v31 = 1;
            }
            if ( byte_140173441 < 0 )
            {
              if ( !v31 )
              {
                v30 = 0;
                v29 = 0;
                v28 = 0;
              }
              McTemplateK0pduuuuup_EtwWriteTransfer(
                v20,
                (_DWORD)v25,
                (unsigned int)&v110,
                v6,
                *(_DWORD *)(v6 + 48),
                v41,
                v39,
                v28,
                v29,
                v30,
                v6);
            }
            break;
          }
          v32 = 0LL;
          v33 = 0;
          if ( !*((_DWORD *)v25 + 5) )
          {
            v34 = *((_DWORD *)v25 + 14);
            v35 = 0LL;
            if ( v34 )
            {
              do
              {
                v20 = *(unsigned int *)&v25[4 * v35 + 120];
                if ( (unsigned int)v20 >= 0x80 )
                {
                  v36 = *((unsigned int *)v25 + 4);
                  if ( (unsigned int)v20 < (unsigned int)v36 )
                  {
                    v37 = (unsigned int)v20;
                    v38 = *(_DWORD *)&v25[v20] - 64;
                    if ( v38 )
                    {
                      LODWORD(v20) = v38 - 1;
                      if ( (_DWORD)v20 )
                      {
                        if ( (_DWORD)v20 == 1 )
                        {
                          LODWORD(v20) = v37 + 40;
                          if ( v37 + 40 <= v36 )
                          {
                            if ( *(_DWORD *)&v25[v37 + 12] )
                              v32 = &v25[v37 + 32];
                            v26 = *(_BYTE **)&v25[v37 + 24];
LABEL_54:
                            v39 = v25[v37 + 8];
                            v27 = v25[v37 + 9];
                            goto LABEL_63;
                          }
                        }
                      }
                      else
                      {
                        LODWORD(v20) = v37 + 56;
                        if ( v37 + 56 <= v36 )
                        {
                          v33 = 1;
                          if ( v25[v37 + 10] )
                            v32 = &v25[v37 + 24];
                          v26 = *(_BYTE **)&v25[v37 + 16];
                          v27 = v25[v37 + 9];
                          v101 = v25[v37 + 8];
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v20) = v37 + 40;
                      if ( v37 + 40 <= v36 )
                      {
                        if ( v25[v37 + 10] )
                          v32 = &v25[v37 + 24];
                        v26 = *(_BYTE **)&v25[v37 + 16];
                        goto LABEL_54;
                      }
                    }
                    if ( v33 )
                      break;
                  }
                }
                v35 = (unsigned int)(v35 + 1);
              }
              while ( (unsigned int)v35 < v34 );
              v39 = v101;
LABEL_63:
              if ( v32 )
              {
                v40 = *v32;
                v28 = 0;
                v31 = 0;
                goto LABEL_69;
              }
            }
          }
          break;
        case 0x1B:
          if ( *(_BYTE *)(v21 + 1) != 7 || *(_DWORD *)(v21 + 8) )
          {
            if ( (byte_140173442 & 0x20) == 0 )
              break;
            v24 = &EventPnpRequestComplete;
            goto LABEL_40;
          }
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v22 = *(int **)(v6 + 56);
            if ( v22 )
              v23 = *v22;
            else
              v23 = 0;
            McTemplateK0pqd_EtwWriteTransfer(v23, v21, (unsigned int)&v110, v6, v23, *(_DWORD *)(v6 + 48));
          }
          break;
        default:
          break;
      }
    }
    IofCompleteRequest((PIRP)v6, 0);
  }
  v44 = v103;
  if ( v107 != v103 )
  {
    v45 = Pool;
    KeAcquireInStackQueuedSpinLock(Pool + 17, &LockHandle);
    v46 = *((_DWORD *)v45 + 40);
    if ( v46 )
    {
      Pool = (KSPIN_LOCK *)RaidAllocatePool(64LL, 8LL * v46, 1280663890LL, v45[1]);
      v47 = Pool;
      if ( Pool )
      {
        v48 = v106;
        v49 = v45 + 18;
        for ( i = (KSPIN_LOCK *)v45[18]; i != v49; i = (KSPIN_LOCK *)*i )
        {
          v51 = i - 8;
          if ( *((_BYTE *)i + 3304)
            && (*((_DWORD *)v51 + 848) != -1 || (*((_BYTE *)v51 + 506) & 2) != 0)
            && (int)RaUnitAcquireRemoveLock((__int64)(i - 8), 0LL, 0) >= 0 )
          {
            v52 = v48++;
            v47[v52] = (KSPIN_LOCK)v51;
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v48 < v46 )
          v47[v48] = 0LL;
        v53 = 0;
        v54 = v47;
        v55 = v107;
        do
        {
          if ( !*v54 )
            break;
          if ( v55 > v44 )
          {
            v56 = RaidLunQueueCheckWaitTimeout(*v54 + 720, v55 - v44, v105);
            v44 += v56;
            if ( v56 )
              _InterlockedAdd64((volatile signed __int64 *)(*v54 + 2256), v56);
          }
          v57 = *v54;
          v58 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v59 = *(_DWORD *)(v58 + *(_QWORD *)(*v54 + 40));
          while ( (v59 & 1) == 0 )
          {
            v60 = v59;
            v59 = _InterlockedCompareExchange((volatile signed __int32 *)(v58 + *(_QWORD *)(v57 + 40)), v59 - 2, v59);
            if ( v60 == v59 )
              goto LABEL_118;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v57 + 520), 0, 0);
LABEL_118:
          ++v53;
          ++v54;
        }
        while ( v53 < v46 );
        ExFreePoolWithTag(Pool, 0x4C556152u);
        while ( 2 )
        {
          v61 = v105[0];
          if ( (_QWORD *)v105[0] == v105 )
            return;
          if ( *(_QWORD **)(v105[0] + 8LL) != v105 )
            goto LABEL_212;
          v62 = *(_QWORD *)v105[0];
          if ( *(_QWORD *)(*(_QWORD *)v105[0] + 8LL) != v105[0] )
            goto LABEL_212;
          v105[0] = *(_QWORD *)v105[0];
          v63 = (_QWORD *)(v61 - 24);
          *(_QWORD *)(v62 + 8) = v105;
          v64 = *(_QWORD *)(v61 - 24 + 48);
          v65 = *(_QWORD *)(v61 - 24 + 40);
          v66 = *(_BYTE *)(v64 + 506);
          v67 = *(_QWORD *)(*(_QWORD *)(v65 + 184) + 8LL);
          v68 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v69 = *(_DWORD *)(v68 + *(_QWORD *)(v64 + 40));
          while ( (v69 & 1) == 0 )
          {
            v70 = v69;
            v69 = _InterlockedCompareExchange((volatile signed __int32 *)(v68 + *(_QWORD *)(v64 + 40)), v69 - 2, v69);
            if ( v70 == v69 )
              goto LABEL_129;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v64 + 520), 0, 0);
LABEL_129:
          v71 = v63[2];
          if ( *(_BYTE *)(v67 + 2) == 40 )
          {
            *(_QWORD *)(v67 + 96) = v71;
          }
          else
          {
            *(_QWORD *)(v67 + 48) = v71;
            *(_QWORD *)(v67 + 56) = 0LL;
            *(_QWORD *)(v67 + 40) = 0LL;
          }
          ExFreePoolWithTag(v63, 0x54436152u);
          v72 = *(_BYTE *)(v67 + 2);
          v73 = *(_BYTE *)(v67 + 3);
          if ( (v66 & 2) != 0 )
          {
            if ( v72 == 40 )
            {
              v74 = ((v73 >> 7) & 0x80) + 56;
            }
            else
            {
              v75 = 56;
              if ( v73 < 0 )
                v75 = -72;
              v74 = v75;
            }
            v76 = -1073740534;
          }
          else
          {
            if ( v72 == 40 )
            {
              v74 = ((v73 >> 7) & 0x80) + 9;
            }
            else
            {
              v77 = 9;
              if ( v73 < 0 )
                v77 = -119;
              v74 = v77;
            }
            v76 = 258;
          }
          *(_BYTE *)(v67 + 3) = v74;
          v19 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v65 + 141) = -84;
          *(_DWORD *)(v65 + 48) = v76;
          if ( v19 )
            goto LABEL_211;
          v110 = 0LL;
          IoGetActivityIdIrp(v65, &v110);
          v79 = *(_QWORD *)(v65 + 184);
          if ( *(_BYTE *)v79 == 14 )
          {
            if ( (byte_140173442 & 8) != 0 )
            {
              v82 = &EventNonReadWriteRequestComplete;
LABEL_210:
              McTemplateK0pd_EtwWriteTransfer(v78, v82, &v110, v65, *(_DWORD *)(v65 + 48));
            }
LABEL_211:
            IofCompleteRequest((PIRP)v65, 0);
            continue;
          }
          break;
        }
        if ( *(_BYTE *)v79 != 15 )
        {
          if ( *(_BYTE *)v79 == 27 )
          {
            if ( *(_BYTE *)(v79 + 1) == 7 && !*(_DWORD *)(v79 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v80 = *(int **)(v65 + 56);
                if ( v80 )
                  v81 = *v80;
                else
                  v81 = 0;
                McTemplateK0pqd_EtwWriteTransfer(v81, v79, (unsigned int)&v110, v65, v81, *(_DWORD *)(v65 + 48));
              }
              goto LABEL_211;
            }
            if ( (byte_140173442 & 0x20) != 0 )
            {
              v82 = &EventPnpRequestComplete;
              goto LABEL_210;
            }
          }
          goto LABEL_211;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_211;
        v83 = *(_BYTE **)(v79 + 8);
        v102 = 0;
        v84 = 0LL;
        v85 = 0;
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v89 = 0;
        if ( v83[2] == 40 )
        {
          v90 = 0LL;
          v91 = 0;
          if ( *((_DWORD *)v83 + 5) )
            goto LABEL_211;
          v92 = 0LL;
          v104 = *((_DWORD *)v83 + 14);
          if ( !v104 )
            goto LABEL_211;
          do
          {
            v78 = *(unsigned int *)&v83[4 * v92 + 120];
            if ( (unsigned int)v78 >= 0x80 )
            {
              v93 = *((unsigned int *)v83 + 4);
              if ( (unsigned int)v78 < (unsigned int)v93 )
              {
                v94 = (unsigned int)v78;
                v95 = *(_DWORD *)&v83[v78] - 64;
                if ( v95 )
                {
                  LODWORD(v78) = v95 - 1;
                  if ( (_DWORD)v78 )
                  {
                    if ( (_DWORD)v78 == 1 )
                    {
                      LODWORD(v78) = v94 + 40;
                      if ( v94 + 40 <= v93 )
                      {
                        if ( *(_DWORD *)&v83[v94 + 12] )
                          v90 = &v83[v94 + 32];
                        v84 = *(_BYTE **)&v83[v94 + 24];
LABEL_171:
                        v96 = v83[v94 + 8];
                        v85 = v83[v94 + 9];
                        goto LABEL_180;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v78) = v94 + 56;
                    if ( v94 + 56 <= v93 )
                    {
                      v91 = 1;
                      if ( v83[v94 + 10] )
                        v90 = &v83[v94 + 24];
                      v84 = *(_BYTE **)&v83[v94 + 16];
                      v85 = v83[v94 + 9];
                      v102 = v83[v94 + 8];
                    }
                  }
                }
                else
                {
                  LODWORD(v78) = v94 + 40;
                  if ( v94 + 40 <= v93 )
                  {
                    if ( v83[v94 + 10] )
                      v90 = &v83[v94 + 24];
                    v84 = *(_BYTE **)&v83[v94 + 16];
                    goto LABEL_171;
                  }
                }
                if ( v91 )
                  break;
              }
            }
            v92 = (unsigned int)(v92 + 1);
          }
          while ( (unsigned int)v92 < v104 );
          v96 = v102;
LABEL_180:
          if ( !v90 )
            goto LABEL_211;
          v97 = *v90;
          v89 = 0;
        }
        else
        {
          v97 = v83[72];
          v84 = (_BYTE *)*((_QWORD *)v83 + 4);
          v85 = v83[11];
          v96 = v83[4];
          if ( v83[2] )
            goto LABEL_211;
        }
        LOBYTE(v78) = v97 - 8;
        if ( (v78 & 0x5D) != 0 )
          goto LABEL_211;
        v98 = v83[3];
        if ( v98 != 1 && v84 && v85 )
        {
          v99 = *v84 & 0x7F;
          if ( v99 == 114 || v99 == 115 )
          {
            v78 = (unsigned __int64)&v84[v85];
            LOBYTE(v83) = 0;
            if ( (unsigned __int64)(v84 + 8) <= v78 )
            {
              v87 = v84[2];
              v86 = v84[1] & 0xF;
              v88 = v84[3];
              goto LABEL_201;
            }
          }
          else
          {
            v78 = (unsigned __int64)&v84[v85];
            LOBYTE(v83) = 0;
            if ( (unsigned __int64)(v84 + 8) <= v78 )
            {
              v83 = v84 + 13;
              v86 = v84[2] & 0xF;
              v100 = v85;
              if ( (unsigned int)(unsigned __int8)v84[7] + 8 <= v85 )
                v100 = (unsigned __int8)v84[7] + 8;
              v78 = (unsigned __int64)&v84[v100];
              if ( (unsigned __int64)v83 <= v78 )
                v87 = v84[12];
              if ( (unsigned __int64)(v84 + 14) <= v78 )
                v88 = *v83;
LABEL_201:
              LOBYTE(v83) = 1;
            }
          }
          if ( (_BYTE)v83 )
            v89 = 1;
        }
        if ( byte_140173441 < 0 )
        {
          if ( !v89 )
          {
            v88 = 0;
            v87 = 0;
            v86 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v78,
            (_DWORD)v83,
            (unsigned int)&v110,
            v65,
            *(_DWORD *)(v65 + 48),
            v98,
            v96,
            v86,
            v87,
            v88,
            v65);
        }
        goto LABEL_211;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
