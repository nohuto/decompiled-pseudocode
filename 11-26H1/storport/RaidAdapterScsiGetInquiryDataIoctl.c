/*
 * XREFs of RaidAdapterScsiGetInquiryDataIoctl @ 0x140066950
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterGetInitiatorBusId @ 0x1400613F4 (RaidAdapterGetInitiatorBusId.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterScsiGetInquiryDataIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v5; // edi
  char *Pool; // r14
  bool v7; // zf
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  int v11; // eax
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  char v15; // r13
  _BYTE *v16; // r9
  unsigned __int8 v17; // r14
  char v18; // r10
  char v19; // bl
  char v20; // r11
  char v21; // r15
  char *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r11
  unsigned int v31; // eax
  __int64 v32; // rbx
  _BYTE *v33; // r12
  __int64 v34; // r15
  __int64 v35; // rdx
  char v36; // r13
  _BYTE *v37; // r9
  unsigned __int8 v38; // r14
  char v39; // r10
  char v40; // bl
  char v41; // r11
  char v42; // r15
  char *v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // r12
  __int64 v46; // r8
  int v47; // ecx
  char v48; // cl
  char v49; // r8
  char v50; // al
  char *v51; // r11
  unsigned int v52; // eax
  __int64 *v53; // r11
  __int64 *i; // rcx
  int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rdx
  char v59; // r13
  _BYTE *v60; // r9
  unsigned __int8 v61; // r14
  char v62; // r10
  char v63; // bl
  char v64; // r11
  char v65; // r15
  char *v66; // r15
  __int64 v67; // rax
  unsigned __int64 v68; // r12
  __int64 v69; // r8
  int v70; // ecx
  char v71; // cl
  char v72; // r8
  char v73; // al
  char *v74; // r11
  unsigned int v75; // eax
  unsigned int v76; // r8d
  _DWORD *v77; // rdx
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 *v80; // r10
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rbx
  __int64 v84; // r9
  __int64 v85; // r8
  char v86; // al
  unsigned int v87; // r11d
  _BYTE *v88; // r10
  _BYTE *v89; // r9
  char InitiatorBusId; // al
  _DWORD *v91; // r9
  _DWORD *v92; // r10
  int v93; // r11d
  char v94; // r8
  unsigned __int64 v95; // rcx
  __int64 v96; // rdx
  unsigned int *v97; // rcx
  __int64 v98; // rcx
  const EVENT_DESCRIPTOR *v99; // rdx
  __int64 v100; // rdx
  char v101; // r13
  _BYTE *v102; // r9
  unsigned __int8 v103; // r14
  char v104; // r10
  char v105; // bl
  char v106; // r11
  char v107; // r15
  char *v108; // r15
  __int64 v109; // rax
  unsigned __int64 v110; // r12
  __int64 v111; // r8
  int v112; // ecx
  char v113; // cl
  char v114; // r8
  char v115; // al
  char *v116; // r11
  unsigned int v117; // eax
  char v119; // [rsp+60h] [rbp-19h]
  char v120; // [rsp+60h] [rbp-19h]
  char v121; // [rsp+60h] [rbp-19h]
  char v122; // [rsp+60h] [rbp-19h]
  int v123; // [rsp+64h] [rbp-15h]
  int v124; // [rsp+64h] [rbp-15h]
  int v125; // [rsp+64h] [rbp-15h]
  int v126; // [rsp+64h] [rbp-15h]
  unsigned int v127; // [rsp+68h] [rbp-11h]
  unsigned int v128; // [rsp+68h] [rbp-11h]
  unsigned int v129; // [rsp+68h] [rbp-11h]
  unsigned int v130; // [rsp+68h] [rbp-11h]
  unsigned int v131; // [rsp+68h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-9h] BYREF
  GUID v133; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  Pool = (char *)RaidAllocatePool(64LL, 4080LL, 842096978LL, v2);
  if ( !Pool )
  {
    v7 = StorEtwLoggingEnabled == 0;
    v8 = -1073741670;
    *(_DWORD *)(a2 + 48) = -1073741670;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_271;
    v133 = 0LL;
    IoGetActivityIdIrp(a2, &v133);
    v10 = *(unsigned __int8 **)(a2 + 184);
    if ( *v10 != 14 )
    {
      v11 = *v10 - 15;
      if ( *v10 != 15 )
      {
LABEL_5:
        if ( v11 != 12 )
          goto LABEL_271;
        if ( v10[1] == 7 && !*((_DWORD *)v10 + 2) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v12 = *(int **)(a2 + 56);
            if ( v12 )
              v5 = *v12;
            McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)v10, &v133, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_271;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_271;
        v13 = &EventPnpRequestComplete;
LABEL_14:
        McTemplateK0pd_EtwWriteTransfer(v9, v13, &v133, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_271;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_271;
      v14 = *((_QWORD *)v10 + 1);
      v15 = 0;
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( *(_BYTE *)(v14 + 2) == 40 )
      {
        v22 = 0LL;
        v119 = 0;
        if ( *(_DWORD *)(v14 + 20) )
          goto LABEL_66;
        v23 = 0LL;
        v123 = 0;
        v127 = *(_DWORD *)(v14 + 56);
        if ( !v127 )
          goto LABEL_66;
        while ( 1 )
        {
          v9 = *(unsigned int *)(v14 + 4 * v23 + 120);
          if ( (unsigned int)v9 >= 0x80 )
          {
            v24 = *(unsigned int *)(v14 + 16);
            if ( (unsigned int)v9 < (unsigned int)v24 )
            {
              v25 = (unsigned int)v9;
              v26 = *(_DWORD *)(v9 + v14) - 64;
              if ( v26 )
              {
                v9 = (unsigned int)(v26 - 1);
                if ( (_DWORD)v9 )
                {
                  if ( (_DWORD)v9 == 1 )
                  {
                    v9 = v25 + 40;
                    if ( v25 + 40 <= v24 )
                    {
                      if ( *(_DWORD *)(v25 + v14 + 12) )
                        v22 = (char *)(v25 + v14 + 32);
                      v16 = *(_BYTE **)(v25 + v14 + 24);
                      goto LABEL_39;
                    }
                  }
                }
                else
                {
                  v9 = v25 + 56;
                  if ( v25 + 56 <= v24 )
                  {
                    v119 = 1;
                    if ( *(_BYTE *)(v25 + v14 + 10) )
                      v22 = (char *)(v25 + v14 + 24);
                    v15 = *(_BYTE *)(v25 + v14 + 8);
                    v16 = *(_BYTE **)(v25 + v14 + 16);
                    v17 = *(_BYTE *)(v25 + v14 + 9);
                  }
                }
              }
              else
              {
                v9 = v25 + 40;
                if ( v25 + 40 <= v24 )
                {
                  if ( *(_BYTE *)(v25 + v14 + 10) )
                    v22 = (char *)(v25 + v14 + 24);
                  v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_39:
                  v17 = *(_BYTE *)(v25 + v14 + 9);
                  v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_40:
                  if ( v22 )
                  {
                    v27 = *v22;
                    v21 = 0;
                    goto LABEL_43;
                  }
                  goto LABEL_66;
                }
              }
              if ( v119 )
                goto LABEL_40;
            }
          }
          v23 = (unsigned int)(v123 + 1);
          v123 = v23;
          if ( (unsigned int)v23 >= v127 )
            goto LABEL_40;
        }
      }
      v27 = *(_BYTE *)(v14 + 72);
      v16 = *(_BYTE **)(v14 + 32);
      v17 = *(_BYTE *)(v14 + 11);
      v15 = *(_BYTE *)(v14 + 4);
      if ( *(_BYTE *)(v14 + 2) )
        goto LABEL_66;
LABEL_43:
      LOBYTE(v9) = v27 - 8;
      if ( (v9 & 0x5D) != 0 )
      {
LABEL_66:
        v8 = -1073741670;
        goto LABEL_271;
      }
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v16 || !v17 )
      {
LABEL_62:
        if ( byte_140173441 < 0 )
        {
          if ( !v21 )
          {
            v20 = 0;
            v19 = 0;
            v18 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v9, v14, &v133, a2, *(_DWORD *)(a2 + 48), v28, v15, v18, v19, v20, a2);
        }
        goto LABEL_66;
      }
      v29 = *v16 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v9 = (unsigned __int64)&v16[v17];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v16 + 8) > v9 )
          goto LABEL_60;
        v19 = v16[2];
        v18 = v16[1] & 0xF;
        v20 = v16[3];
      }
      else
      {
        v9 = (unsigned __int64)&v16[v17];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v16 + 8) > v9 )
          goto LABEL_60;
        v30 = v16 + 13;
        v18 = v16[2] & 0xF;
        v31 = v17;
        if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
          v31 = (unsigned __int8)v16[7] + 8;
        v9 = (unsigned __int64)&v16[v31];
        if ( (unsigned __int64)v30 <= v9 )
          v19 = v16[12];
        if ( (unsigned __int64)(v16 + 14) > v9 )
          v20 = 0;
        else
          v20 = *v30;
      }
      LOBYTE(v14) = 1;
LABEL_60:
      if ( (_BYTE)v14 )
        v21 = 1;
      goto LABEL_62;
    }
LABEL_67:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_271;
    v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  v32 = *(_QWORD *)(a2 + 184);
  v33 = *(_BYTE **)(a2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v34 = *(unsigned __int8 *)(a1 + 456);
  v128 = 8 * (v34 + 6 * *(_DWORD *)(a1 + 160)) + 4;
  if ( *(_DWORD *)(v32 + 8) < v128 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(Pool, 0x32316152u);
    v7 = StorEtwLoggingEnabled == 0;
    v8 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_271;
    v133 = 0LL;
    IoGetActivityIdIrp(a2, &v133);
    v10 = *(unsigned __int8 **)(a2 + 184);
    if ( *v10 == 14 )
      goto LABEL_67;
    v11 = *v10 - 15;
    if ( *v10 != 15 )
      goto LABEL_5;
    if ( byte_140173441 >= 0 )
      goto LABEL_271;
    v35 = *((_QWORD *)v10 + 1);
    v36 = 0;
    v37 = 0LL;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    if ( *(_BYTE *)(v35 + 2) == 40 )
    {
      v43 = 0LL;
      v120 = 0;
      if ( *(_DWORD *)(v35 + 20) )
        goto LABEL_124;
      v44 = 0LL;
      v124 = 0;
      v129 = *(_DWORD *)(v35 + 56);
      if ( !v129 )
        goto LABEL_124;
      while ( 1 )
      {
        v9 = *(unsigned int *)(v35 + 4 * v44 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v45 = *(unsigned int *)(v35 + 16);
          if ( (unsigned int)v9 < (unsigned int)v45 )
          {
            v46 = (unsigned int)v9;
            v47 = *(_DWORD *)(v9 + v35) - 64;
            if ( v47 )
            {
              v9 = (unsigned int)(v47 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v46 + 40;
                  if ( v46 + 40 <= v45 )
                  {
                    if ( *(_DWORD *)(v46 + v35 + 12) )
                      v43 = (char *)(v46 + v35 + 32);
                    v37 = *(_BYTE **)(v46 + v35 + 24);
                    goto LABEL_97;
                  }
                }
              }
              else
              {
                v9 = v46 + 56;
                if ( v46 + 56 <= v45 )
                {
                  v120 = 1;
                  if ( *(_BYTE *)(v46 + v35 + 10) )
                    v43 = (char *)(v46 + v35 + 24);
                  v36 = *(_BYTE *)(v46 + v35 + 8);
                  v37 = *(_BYTE **)(v46 + v35 + 16);
                  v38 = *(_BYTE *)(v46 + v35 + 9);
                }
              }
            }
            else
            {
              v9 = v46 + 40;
              if ( v46 + 40 <= v45 )
              {
                if ( *(_BYTE *)(v46 + v35 + 10) )
                  v43 = (char *)(v46 + v35 + 24);
                v37 = *(_BYTE **)(v46 + v35 + 16);
LABEL_97:
                v38 = *(_BYTE *)(v46 + v35 + 9);
                v36 = *(_BYTE *)(v46 + v35 + 8);
LABEL_98:
                if ( v43 )
                {
                  v48 = *v43;
                  v42 = 0;
                  goto LABEL_101;
                }
                goto LABEL_124;
              }
            }
            if ( v120 )
              goto LABEL_98;
          }
        }
        v44 = (unsigned int)(v124 + 1);
        v124 = v44;
        if ( (unsigned int)v44 >= v129 )
          goto LABEL_98;
      }
    }
    v48 = *(_BYTE *)(v35 + 72);
    v37 = *(_BYTE **)(v35 + 32);
    v38 = *(_BYTE *)(v35 + 11);
    v36 = *(_BYTE *)(v35 + 4);
    if ( *(_BYTE *)(v35 + 2) )
      goto LABEL_124;
LABEL_101:
    LOBYTE(v9) = v48 - 8;
    if ( (v9 & 0x5D) != 0 )
    {
LABEL_124:
      v8 = -1073741789;
      goto LABEL_271;
    }
    v49 = *(_BYTE *)(v35 + 3);
    if ( v49 == 1 || !v37 || !v38 )
    {
LABEL_120:
      if ( byte_140173441 < 0 )
      {
        if ( !v42 )
        {
          v41 = 0;
          v40 = 0;
          v39 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v35, &v133, a2, *(_DWORD *)(a2 + 48), v49, v36, v39, v40, v41, a2);
      }
      goto LABEL_124;
    }
    v50 = *v37 & 0x7F;
    if ( v50 == 114 || v50 == 115 )
    {
      v9 = (unsigned __int64)&v37[v38];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v37 + 8) > v9 )
        goto LABEL_118;
      v40 = v37[2];
      v39 = v37[1] & 0xF;
      v41 = v37[3];
    }
    else
    {
      v9 = (unsigned __int64)&v37[v38];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v37 + 8) > v9 )
        goto LABEL_118;
      v51 = v37 + 13;
      v39 = v37[2] & 0xF;
      v52 = v38;
      if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
        v52 = (unsigned __int8)v37[7] + 8;
      v9 = (unsigned __int64)&v37[v52];
      if ( (unsigned __int64)v51 <= v9 )
        v40 = v37[12];
      if ( (unsigned __int64)(v37 + 14) > v9 )
        v41 = 0;
      else
        v41 = *v51;
    }
    LOBYTE(v35) = 1;
LABEL_118:
    if ( (_BYTE)v35 )
      v42 = 1;
    goto LABEL_120;
  }
  v53 = (__int64 *)(a1 + 144);
  for ( i = *(__int64 **)(a1 + 144); ; i = (__int64 *)*i )
  {
    if ( i == v53 )
    {
      v76 = 0;
      if ( (_DWORD)v34 )
      {
        v77 = Pool;
        v78 = v34;
        do
        {
          v79 = v76;
          v76 += *v77;
          v77 += 4;
          *((_QWORD *)v77 - 1) = &v33[48 * v79 + (unsigned int)(8 * v34 + 4)];
          --v78;
        }
        while ( v78 );
      }
      v80 = (__int64 *)*v53;
      v81 = 0LL;
      if ( (__int64 *)*v53 != v53 )
      {
        do
        {
          if ( (v80[55] & 8) == 0 )
          {
            v82 = *((_DWORD *)v80 + 10);
            v83 = v80[6];
            if ( (_BYTE)v82 != 0xFF )
            {
              v84 = 16LL * (unsigned __int8)v82;
              v85 = *(unsigned int *)&Pool[v84 + 4];
              *(_DWORD *)&Pool[v84 + 4] = v85 + 1;
              v81 = *(_QWORD *)&Pool[v84 + 8] + 48 * v85;
              *(_BYTE *)v81 = v82;
              *(_BYTE *)(v81 + 2) = BYTE2(v82);
              *(_BYTE *)(v81 + 1) = BYTE1(v82);
              v86 = v80[55] & 1;
              *(_DWORD *)(v81 + 4) = 36;
              *(_BYTE *)(v81 + 3) = v86;
              *(_DWORD *)(v81 + 8) = v81 - (_DWORD)v33 + 48;
              *(_OWORD *)(v81 + 12) = *(_OWORD *)v83;
              *(_OWORD *)(v81 + 28) = *(_OWORD *)(v83 + 16);
              *(_DWORD *)(v81 + 44) = *(_DWORD *)(v83 + 32);
            }
          }
          v80 = (__int64 *)*v80;
        }
        while ( v80 != v53 );
        if ( v81 )
          *(_DWORD *)(v81 + 8) = 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v87) = 0;
      if ( (_DWORD)v34 )
      {
        v88 = Pool;
        v89 = v33 + 8;
        do
        {
          *(v89 - 4) = *v88;
          InitiatorBusId = RaidAdapterGetInitiatorBusId((_DWORD *)a1, v87);
          *((_BYTE *)v91 - 3) = InitiatorBusId;
          if ( v94 )
          {
            *v91 = v92[2] - (_DWORD)v33;
            *(_DWORD *)(*((_QWORD *)v92 + 1) + 48LL * (unsigned int)(*v92 - 1) + 8) = 0;
          }
          else
          {
            *v91 = 0;
          }
          v87 = v93 + 1;
          v88 = v92 + 4;
          v89 = v91 + 2;
        }
        while ( v87 < (unsigned int)v34 );
      }
      *v33 = v34;
      ExFreePoolWithTag(Pool, 0x32316152u);
      v7 = StorEtwLoggingEnabled == 0;
      *(_QWORD *)(a2 + 56) = v128;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v7 )
        goto LABEL_270;
      v133 = 0LL;
      IoGetActivityIdIrp(a2, &v133);
      v96 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v96 == 14 )
      {
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_270;
        v99 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_269;
      }
      if ( *(_BYTE *)v96 != 15 )
      {
        if ( *(_BYTE *)v96 != 27 )
          goto LABEL_270;
        if ( *(_BYTE *)(v96 + 1) == 7 && !*(_DWORD *)(v96 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v97 = *(unsigned int **)(a2 + 56);
            if ( v97 )
              v98 = *v97;
            else
              v98 = 0LL;
            McTemplateK0pqd_EtwWriteTransfer(v98, v96, &v133, a2, v98, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_270;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_270;
        v99 = &EventPnpRequestComplete;
LABEL_269:
        McTemplateK0pd_EtwWriteTransfer(v95, v99, &v133, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_270;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_270;
      v100 = *(_QWORD *)(v96 + 8);
      v101 = 0;
      v102 = 0LL;
      v103 = 0;
      v104 = 0;
      v105 = 0;
      v106 = 0;
      v107 = 0;
      if ( *(_BYTE *)(v100 + 2) == 40 )
      {
        v108 = 0LL;
        v122 = 0;
        if ( *(_DWORD *)(v100 + 20) )
          goto LABEL_270;
        v109 = 0LL;
        v126 = 0;
        v131 = *(_DWORD *)(v100 + 56);
        if ( !v131 )
          goto LABEL_270;
        while ( 1 )
        {
          v95 = *(unsigned int *)(v100 + 4 * v109 + 120);
          if ( (unsigned int)v95 >= 0x80 )
          {
            v110 = *(unsigned int *)(v100 + 16);
            if ( (unsigned int)v95 < (unsigned int)v110 )
            {
              v111 = (unsigned int)v95;
              v112 = *(_DWORD *)(v100 + v95) - 64;
              if ( v112 )
              {
                v95 = (unsigned int)(v112 - 1);
                if ( (_DWORD)v95 )
                {
                  if ( (_DWORD)v95 == 1 )
                  {
                    v95 = v111 + 40;
                    if ( v111 + 40 <= v110 )
                    {
                      if ( *(_DWORD *)(v100 + v111 + 12) )
                        v108 = (char *)(v111 + v100 + 32);
                      v102 = *(_BYTE **)(v100 + v111 + 24);
                      goto LABEL_240;
                    }
                  }
                }
                else
                {
                  v95 = v111 + 56;
                  if ( v111 + 56 <= v110 )
                  {
                    v122 = 1;
                    if ( *(_BYTE *)(v100 + v111 + 10) )
                      v108 = (char *)(v111 + v100 + 24);
                    v101 = *(_BYTE *)(v100 + v111 + 8);
                    v102 = *(_BYTE **)(v100 + v111 + 16);
                    v103 = *(_BYTE *)(v100 + v111 + 9);
                  }
                }
              }
              else
              {
                v95 = v111 + 40;
                if ( v111 + 40 <= v110 )
                {
                  if ( *(_BYTE *)(v100 + v111 + 10) )
                    v108 = (char *)(v111 + v100 + 24);
                  v102 = *(_BYTE **)(v100 + v111 + 16);
LABEL_240:
                  v103 = *(_BYTE *)(v100 + v111 + 9);
                  v101 = *(_BYTE *)(v100 + v111 + 8);
LABEL_241:
                  if ( v108 )
                  {
                    v113 = *v108;
                    v107 = 0;
                    goto LABEL_244;
                  }
                  goto LABEL_270;
                }
              }
              if ( v122 )
                goto LABEL_241;
            }
          }
          v109 = (unsigned int)(v126 + 1);
          v126 = v109;
          if ( (unsigned int)v109 >= v131 )
            goto LABEL_241;
        }
      }
      v113 = *(_BYTE *)(v100 + 72);
      v102 = *(_BYTE **)(v100 + 32);
      v103 = *(_BYTE *)(v100 + 11);
      v101 = *(_BYTE *)(v100 + 4);
      if ( *(_BYTE *)(v100 + 2) )
        goto LABEL_270;
LABEL_244:
      LOBYTE(v95) = v113 - 8;
      if ( (v95 & 0x5D) != 0 )
      {
LABEL_270:
        v8 = 0;
        goto LABEL_271;
      }
      v114 = *(_BYTE *)(v100 + 3);
      if ( v114 == 1 || !v102 || !v103 )
      {
LABEL_263:
        if ( byte_140173441 < 0 )
        {
          if ( !v107 )
          {
            v106 = 0;
            v105 = 0;
            v104 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v95,
            v100,
            &v133,
            a2,
            *(_DWORD *)(a2 + 48),
            v114,
            v101,
            v104,
            v105,
            v106,
            a2);
        }
        goto LABEL_270;
      }
      v115 = *v102 & 0x7F;
      if ( v115 == 114 || v115 == 115 )
      {
        v95 = (unsigned __int64)&v102[v103];
        LOBYTE(v100) = 0;
        if ( (unsigned __int64)(v102 + 8) > v95 )
          goto LABEL_261;
        v105 = v102[2];
        v104 = v102[1] & 0xF;
        v106 = v102[3];
      }
      else
      {
        v95 = (unsigned __int64)&v102[v103];
        LOBYTE(v100) = 0;
        if ( (unsigned __int64)(v102 + 8) > v95 )
          goto LABEL_261;
        v116 = v102 + 13;
        v104 = v102[2] & 0xF;
        v117 = v103;
        if ( (unsigned int)(unsigned __int8)v102[7] + 8 <= v103 )
          v117 = (unsigned __int8)v102[7] + 8;
        v95 = (unsigned __int64)&v102[v117];
        if ( (unsigned __int64)v116 <= v95 )
          v105 = v102[12];
        if ( (unsigned __int64)(v102 + 14) > v95 )
          v106 = 0;
        else
          v106 = *v116;
      }
      LOBYTE(v100) = 1;
LABEL_261:
      if ( (_BYTE)v100 )
        v107 = 1;
      goto LABEL_263;
    }
    if ( (i[55] & 8) == 0 )
    {
      v55 = *((_DWORD *)i + 10);
      if ( (_BYTE)v55 != 0xFF )
        break;
    }
LABEL_131:
    ;
  }
  v56 = 2LL * (unsigned __int8)v55;
  v57 = *(_DWORD *)&Pool[16 * (unsigned __int8)v55];
  if ( v57 < 0xFF )
  {
    *(_DWORD *)&Pool[8 * v56] = v57 + 1;
    goto LABEL_131;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(Pool, 0x32316152u);
  v7 = StorEtwLoggingEnabled == 0;
  v8 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v7 )
    goto LABEL_271;
  v133 = 0LL;
  IoGetActivityIdIrp(a2, &v133);
  v10 = *(unsigned __int8 **)(a2 + 184);
  if ( *v10 == 14 )
    goto LABEL_67;
  v11 = *v10 - 15;
  if ( *v10 != 15 )
    goto LABEL_5;
  if ( byte_140173441 < 0 )
  {
    v58 = *((_QWORD *)v10 + 1);
    v59 = 0;
    v60 = 0LL;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    if ( *(_BYTE *)(v58 + 2) == 40 )
    {
      v66 = 0LL;
      v121 = 0;
      if ( *(_DWORD *)(v58 + 20) )
        goto LABEL_186;
      v67 = 0LL;
      v125 = 0;
      v130 = *(_DWORD *)(v58 + 56);
      if ( !v130 )
        goto LABEL_186;
      while ( 1 )
      {
        v9 = *(unsigned int *)(v58 + 4 * v67 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v68 = *(unsigned int *)(v58 + 16);
          if ( (unsigned int)v9 < (unsigned int)v68 )
          {
            v69 = (unsigned int)v9;
            v70 = *(_DWORD *)(v58 + v9) - 64;
            if ( v70 )
            {
              v9 = (unsigned int)(v70 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v69 + 40;
                  if ( v69 + 40 <= v68 )
                  {
                    if ( *(_DWORD *)(v58 + v69 + 12) )
                      v66 = (char *)(v69 + v58 + 32);
                    v60 = *(_BYTE **)(v58 + v69 + 24);
                    goto LABEL_159;
                  }
                }
              }
              else
              {
                v9 = v69 + 56;
                if ( v69 + 56 <= v68 )
                {
                  v121 = 1;
                  if ( *(_BYTE *)(v58 + v69 + 10) )
                    v66 = (char *)(v69 + v58 + 24);
                  v59 = *(_BYTE *)(v58 + v69 + 8);
                  v60 = *(_BYTE **)(v58 + v69 + 16);
                  v61 = *(_BYTE *)(v58 + v69 + 9);
                }
              }
            }
            else
            {
              v9 = v69 + 40;
              if ( v69 + 40 <= v68 )
              {
                if ( *(_BYTE *)(v58 + v69 + 10) )
                  v66 = (char *)(v69 + v58 + 24);
                v60 = *(_BYTE **)(v58 + v69 + 16);
LABEL_159:
                v61 = *(_BYTE *)(v58 + v69 + 9);
                v59 = *(_BYTE *)(v58 + v69 + 8);
LABEL_160:
                if ( v66 )
                {
                  v71 = *v66;
                  v65 = 0;
                  goto LABEL_163;
                }
                goto LABEL_186;
              }
            }
            if ( v121 )
              goto LABEL_160;
          }
        }
        v67 = (unsigned int)(v125 + 1);
        v125 = v67;
        if ( (unsigned int)v67 >= v130 )
          goto LABEL_160;
      }
    }
    v71 = *(_BYTE *)(v58 + 72);
    v60 = *(_BYTE **)(v58 + 32);
    v61 = *(_BYTE *)(v58 + 11);
    v59 = *(_BYTE *)(v58 + 4);
    if ( *(_BYTE *)(v58 + 2) )
      goto LABEL_186;
LABEL_163:
    LOBYTE(v9) = v71 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v72 = *(_BYTE *)(v58 + 3);
      if ( v72 != 1 && v60 && v61 )
      {
        v73 = *v60 & 0x7F;
        if ( v73 == 114 || v73 == 115 )
        {
          v9 = (unsigned __int64)&v60[v61];
          LOBYTE(v58) = 0;
          if ( (unsigned __int64)(v60 + 8) <= v9 )
          {
            v63 = v60[2];
            v62 = v60[1] & 0xF;
            v64 = v60[3];
            goto LABEL_179;
          }
        }
        else
        {
          v9 = (unsigned __int64)&v60[v61];
          LOBYTE(v58) = 0;
          if ( (unsigned __int64)(v60 + 8) <= v9 )
          {
            v74 = v60 + 13;
            v62 = v60[2] & 0xF;
            v75 = v61;
            if ( (unsigned int)(unsigned __int8)v60[7] + 8 <= v61 )
              v75 = (unsigned __int8)v60[7] + 8;
            v9 = (unsigned __int64)&v60[v75];
            if ( (unsigned __int64)v74 <= v9 )
              v63 = v60[12];
            if ( (unsigned __int64)(v60 + 14) > v9 )
              v64 = 0;
            else
              v64 = *v74;
LABEL_179:
            LOBYTE(v58) = 1;
          }
        }
        if ( (_BYTE)v58 )
          v65 = 1;
      }
      if ( byte_140173441 < 0 )
      {
        if ( !v65 )
        {
          v64 = 0;
          v63 = 0;
          v62 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v58, &v133, a2, *(_DWORD *)(a2 + 48), v72, v59, v62, v63, v64, a2);
      }
    }
LABEL_186:
    v8 = -1073741637;
  }
LABEL_271:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
