/*
 * XREFs of RaUnitFlushQueueSrb @ 0x14009B4F0
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 * Callees:
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidRemoveIoQueue @ 0x140057CBC (RaidRemoveIoQueue.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitFlushQueueSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v5; // rax
  int v6; // ebx
  _QWORD *v7; // rcx
  __int64 ***v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _QWORD *v16; // rcx
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int *v20; // rcx
  __int64 v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // r11
  char v26; // di
  char v27; // r10
  char v28; // r12
  char v29; // r13
  char *v30; // rdi
  unsigned int v31; // r15d
  unsigned __int64 v32; // r10
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r15
  char v36; // cl
  char v37; // r8
  char v38; // al
  unsigned int v39; // eax
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  int *v42; // rax
  const EVENT_DESCRIPTOR *v43; // rdx
  __int64 v44; // rdx
  char v45; // r13
  _BYTE *v46; // r8
  unsigned __int8 v47; // si
  char v48; // r10
  char v49; // di
  char v50; // r11
  char v51; // r15
  char *v52; // r15
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  __int64 v55; // r9
  int v56; // ecx
  char v57; // cl
  char v58; // r9
  char v59; // al
  char *v60; // r11
  unsigned int v61; // eax
  __int64 v63; // [rsp+20h] [rbp-59h]
  __int64 v64; // [rsp+28h] [rbp-51h]
  __int64 v65; // [rsp+30h] [rbp-49h]
  __int64 v66; // [rsp+38h] [rbp-41h]
  __int64 v67; // [rsp+40h] [rbp-39h]
  __int64 v68; // [rsp+48h] [rbp-31h]
  char v69; // [rsp+60h] [rbp-19h]
  char v70; // [rsp+60h] [rbp-19h]
  char v71; // [rsp+61h] [rbp-18h]
  unsigned int v72; // [rsp+64h] [rbp-15h]
  int v73; // [rsp+64h] [rbp-15h]
  __int64 *v75; // [rsp+70h] [rbp-9h] BYREF
  __int64 **v76; // [rsp+78h] [rbp-1h]
  unsigned int v77; // [rsp+80h] [rbp+7h]
  GUID v78; // [rsp+88h] [rbp+Fh] BYREF

  v76 = &v75;
  v2 = a1 + 704;
  v3 = a1;
  v75 = (__int64 *)&v75;
  v5 = RaidRemoveIoQueue(a1 + 704);
  v6 = 0;
  while ( v5 )
  {
    v7 = v76;
    v8 = (__int64 ***)(v5 + 168);
    if ( *v76 != (__int64 *)&v75 )
LABEL_90:
      __fastfail(3u);
    v8[1] = v76;
    *v8 = &v75;
    *v7 = v8;
    v76 = (__int64 **)v8;
    v5 = RaidRemoveIoQueue(v2);
  }
  *(_BYTE *)(v3 + 756) = 0;
  RaUnitUnlockForwardIo(v3, 3);
  while ( 1 )
  {
    v9 = v75;
    if ( v75 == (__int64 *)&v75 )
      break;
    if ( (__int64 **)v75[1] != &v75 )
      goto LABEL_90;
    v10 = (__int64 *)*v75;
    if ( *(__int64 **)(*v75 + 8) != v75 )
      goto LABEL_90;
    v75 = (__int64 *)*v75;
    v11 = (__int64)(v9 - 21);
    v10[1] = (__int64)&v75;
    v12 = *(_QWORD *)(v9[2] + 8);
    *(_BYTE *)(v12 + 3) = 22;
    *(v9 - 14) = 0LL;
    v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v14 = *(_DWORD *)(v13 + *(_QWORD *)(v3 + 40));
    while ( (v14 & 1) == 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(v3 + 40)), v14 - 2, v14);
      if ( v15 == v14 )
        goto LABEL_15;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_15:
    if ( (*(_BYTE *)(v11 + 142) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(v12 + 2) == 40 )
      {
        v16 = *(_QWORD **)(v12 + 96);
        *(_QWORD *)(v12 + 96) = v16[2];
      }
      else
      {
        v16 = *(_QWORD **)(v12 + 48);
        *(_QWORD *)(v12 + 48) = v16[2];
        *(_QWORD *)(v12 + 56) = 0LL;
        *(_QWORD *)(v12 + 40) = 0LL;
      }
      ExFreePoolWithTag(v16, 0x54436152u);
    }
    v17 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v11 + 141) = -84;
    *(_DWORD *)(v11 + 48) = -1073741823;
    if ( !v17 )
    {
      v78 = 0LL;
      IoGetActivityIdIrp(v11, &v78);
      v19 = *(_QWORD *)(v11 + 184);
      switch ( *(_BYTE *)v19 )
      {
        case 0xE:
          if ( (byte_140173442 & 8) != 0 )
          {
            v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
LABEL_33:
            LODWORD(v63) = *(_DWORD *)(v11 + 48);
            McTemplateK0pd_EtwWriteTransfer(v18, v22, &v78, v11, v63);
          }
          break;
        case 0xF:
          if ( byte_140173441 >= 0 )
            break;
          v23 = *(_QWORD *)(v19 + 8);
          v24 = 0LL;
          v69 = 0;
          v25 = 0;
          v26 = 0;
          v71 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          if ( *(_BYTE *)(v23 + 2) == 40 )
          {
            v30 = 0LL;
            if ( *(_DWORD *)(v23 + 20) )
              break;
            v31 = 0;
            v72 = *(_DWORD *)(v23 + 56);
            if ( v72 )
            {
              do
              {
                v18 = *(unsigned int *)(v23 + 4LL * v31 + 120);
                if ( (unsigned int)v18 >= 0x80 )
                {
                  v32 = *(unsigned int *)(v23 + 16);
                  if ( (unsigned int)v18 < (unsigned int)v32 )
                  {
                    v33 = (unsigned int)v18;
                    v34 = *(_DWORD *)(v18 + v23) - 64;
                    if ( v34 )
                    {
                      v18 = (unsigned int)(v34 - 1);
                      if ( (_DWORD)v18 )
                      {
                        if ( (_DWORD)v18 == 1 )
                        {
                          v18 = v33 + 40;
                          if ( v33 + 40 <= v32 )
                          {
                            if ( *(_DWORD *)(v33 + v23 + 12) )
                              v30 = (char *)(v33 + v23 + 32);
                            v24 = *(_BYTE **)(v33 + v23 + 24);
LABEL_47:
                            v35 = *(_BYTE *)(v33 + v23 + 8);
                            v25 = *(_BYTE *)(v33 + v23 + 9);
                            goto LABEL_56;
                          }
                        }
                      }
                      else
                      {
                        v18 = v33 + 56;
                        if ( v33 + 56 <= v32 )
                        {
                          v29 = 1;
                          if ( *(_BYTE *)(v33 + v23 + 10) )
                            v30 = (char *)(v33 + v23 + 24);
                          v24 = *(_BYTE **)(v33 + v23 + 16);
                          v25 = *(_BYTE *)(v33 + v23 + 9);
                          v69 = *(_BYTE *)(v33 + v23 + 8);
                        }
                      }
                    }
                    else
                    {
                      v18 = v33 + 40;
                      if ( v33 + 40 <= v32 )
                      {
                        if ( *(_BYTE *)(v33 + v23 + 10) )
                          v30 = (char *)(v33 + v23 + 24);
                        v24 = *(_BYTE **)(v33 + v23 + 16);
                        goto LABEL_47;
                      }
                    }
                    if ( v29 )
                      break;
                  }
                }
                ++v31;
              }
              while ( v31 < v72 );
              v35 = v69;
LABEL_56:
              if ( v30 )
              {
                v36 = *v30;
                v27 = 0;
                v26 = 0;
                v29 = 0;
LABEL_62:
                LOBYTE(v18) = v36 - 8;
                if ( (v18 & 0x5D) == 0 )
                {
                  v37 = *(_BYTE *)(v23 + 3);
                  if ( v37 != 1 && v24 && v25 )
                  {
                    v38 = *v24 & 0x7F;
                    if ( v38 == 114 || v38 == 115 )
                    {
                      v18 = (unsigned __int64)&v24[v25];
                      LOBYTE(v23) = 0;
                      if ( (unsigned __int64)(v24 + 8) <= v18 )
                      {
                        LOBYTE(v23) = 1;
                        v27 = v24[2];
                        v26 = v24[1] & 0xF;
                        v28 = v24[3];
                      }
                    }
                    else
                    {
                      v18 = (unsigned __int64)&v24[v25];
                      LOBYTE(v23) = 0;
                      if ( (unsigned __int64)(v24 + 8) <= v18 )
                      {
                        v23 = (unsigned __int64)(v24 + 13);
                        v26 = v24[2] & 0xF;
                        v39 = v25;
                        if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
                          v39 = (unsigned __int8)v24[7] + 8;
                        v18 = (unsigned __int64)&v24[v39];
                        if ( v23 > v18 )
                          v71 = 0;
                        else
                          v71 = v24[12];
                        if ( (unsigned __int64)(v24 + 14) <= v18 )
                          v28 = *(_BYTE *)v23;
                        LOBYTE(v23) = 1;
                      }
                      v27 = v71;
                    }
                    if ( (_BYTE)v23 )
                      v29 = 1;
                  }
                  if ( byte_140173441 < 0 )
                  {
                    if ( !v29 )
                    {
                      v28 = 0;
                      v27 = 0;
                      v26 = 0;
                    }
                    LOBYTE(v68) = v28;
                    LOBYTE(v67) = v27;
                    LOBYTE(v66) = v26;
                    LOBYTE(v65) = v35;
                    LOBYTE(v64) = v37;
                    LODWORD(v63) = *(_DWORD *)(v11 + 48);
                    McTemplateK0pduuuuup_EtwWriteTransfer(v18, v23, &v78, v11, v63, v64, v65, v66, v67, v68, v11);
                  }
                }
              }
            }
          }
          else
          {
            v36 = *(_BYTE *)(v23 + 72);
            v24 = *(_BYTE **)(v23 + 32);
            v25 = *(_BYTE *)(v23 + 11);
            v35 = *(_BYTE *)(v23 + 4);
            if ( !*(_BYTE *)(v23 + 2) )
              goto LABEL_62;
          }
          v3 = a1;
          break;
        case 0x1B:
          if ( *(_BYTE *)(v19 + 1) != 7 || *(_DWORD *)(v19 + 8) )
          {
            if ( (byte_140173442 & 0x20) == 0 )
              break;
            v22 = &EventPnpRequestComplete;
            goto LABEL_33;
          }
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v20 = *(unsigned int **)(v11 + 56);
            if ( v20 )
              v21 = *v20;
            else
              v21 = 0LL;
            LODWORD(v64) = *(_DWORD *)(v11 + 48);
            LODWORD(v63) = v21;
            McTemplateK0pqd_EtwWriteTransfer(v21, v19, &v78, v11, v63, v64);
          }
          break;
        default:
          break;
      }
    }
    IofCompleteRequest((PIRP)v11, 0);
  }
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 3LL) = 1;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v17 )
    goto LABEL_157;
  v78 = 0LL;
  IoGetActivityIdIrp(a2, &v78);
  v41 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v41 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_157;
    v43 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_156;
  }
  if ( *(_BYTE *)v41 != 15 )
  {
    if ( *(_BYTE *)v41 != 27 )
      goto LABEL_157;
    if ( *(_BYTE *)(v41 + 1) == 7 && !*(_DWORD *)(v41 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v42 = *(int **)(a2 + 56);
        if ( v42 )
          v6 = *v42;
        LODWORD(v64) = *(_DWORD *)(a2 + 48);
        LODWORD(v63) = v6;
        McTemplateK0pqd_EtwWriteTransfer(v40, v41, &v78, a2, v63, v64);
      }
      goto LABEL_157;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_157;
    v43 = &EventPnpRequestComplete;
LABEL_156:
    LODWORD(v63) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v40, v43, &v78, a2, v63);
    goto LABEL_157;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_157;
  v44 = *(_QWORD *)(v41 + 8);
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( *(_BYTE *)(v44 + 2) != 40 )
  {
    v57 = *(_BYTE *)(v44 + 72);
    v46 = *(_BYTE **)(v44 + 32);
    v47 = *(_BYTE *)(v44 + 11);
    v45 = *(_BYTE *)(v44 + 4);
    if ( *(_BYTE *)(v44 + 2) )
      goto LABEL_157;
LABEL_131:
    LOBYTE(v40) = v57 - 8;
    if ( (v40 & 0x5D) != 0 )
      goto LABEL_157;
    v58 = *(_BYTE *)(v44 + 3);
    if ( v58 == 1 || !v46 || !v47 )
      goto LABEL_150;
    v59 = *v46 & 0x7F;
    if ( v59 == 114 || v59 == 115 )
    {
      v40 = (unsigned __int64)&v46[v47];
      LOBYTE(v44) = 0;
      if ( (unsigned __int64)(v46 + 8) > v40 )
        goto LABEL_148;
      v49 = v46[2];
      v48 = v46[1] & 0xF;
      v50 = v46[3];
    }
    else
    {
      v40 = (unsigned __int64)&v46[v47];
      LOBYTE(v44) = 0;
      if ( (unsigned __int64)(v46 + 8) > v40 )
        goto LABEL_148;
      v60 = v46 + 13;
      v48 = v46[2] & 0xF;
      v61 = v47;
      if ( (unsigned int)(unsigned __int8)v46[7] + 8 <= v47 )
        v61 = (unsigned __int8)v46[7] + 8;
      v40 = (unsigned __int64)&v46[v61];
      if ( (unsigned __int64)v60 <= v40 )
        v49 = v46[12];
      if ( (unsigned __int64)(v46 + 14) > v40 )
        v50 = 0;
      else
        v50 = *v60;
    }
    LOBYTE(v44) = 1;
LABEL_148:
    if ( (_BYTE)v44 )
      v51 = 1;
LABEL_150:
    if ( byte_140173441 < 0 )
    {
      if ( !v51 )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
      }
      LOBYTE(v68) = v50;
      LOBYTE(v67) = v49;
      LOBYTE(v66) = v48;
      LOBYTE(v65) = v45;
      LOBYTE(v64) = v58;
      LODWORD(v63) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v40, v44, &v78, a2, v63, v64, v65, v66, v67, v68, a2);
    }
    goto LABEL_157;
  }
  v52 = 0LL;
  v70 = 0;
  if ( *(_DWORD *)(v44 + 20) )
    goto LABEL_157;
  v53 = 0LL;
  v73 = 0;
  v77 = *(_DWORD *)(v44 + 56);
  if ( !v77 )
    goto LABEL_157;
  while ( 2 )
  {
    v40 = *(unsigned int *)(v44 + 4 * v53 + 120);
    if ( (unsigned int)v40 < 0x80 )
      goto LABEL_122;
    v54 = *(unsigned int *)(v44 + 16);
    if ( (unsigned int)v40 >= (unsigned int)v54 )
      goto LABEL_122;
    v55 = (unsigned int)v40;
    v56 = *(_DWORD *)(v44 + v40) - 64;
    if ( v56 )
    {
      v40 = (unsigned int)(v56 - 1);
      if ( (_DWORD)v40 )
      {
        if ( (_DWORD)v40 == 1 )
        {
          v40 = v55 + 40;
          if ( v55 + 40 <= v54 )
          {
            if ( *(_DWORD *)(v44 + v55 + 12) )
              v52 = (char *)(v55 + v44 + 32);
            v46 = *(_BYTE **)(v44 + v55 + 24);
            goto LABEL_127;
          }
        }
      }
      else
      {
        v40 = v55 + 56;
        if ( v55 + 56 <= v54 )
        {
          v70 = 1;
          if ( *(_BYTE *)(v44 + v55 + 10) )
            v52 = (char *)(v55 + v44 + 24);
          v45 = *(_BYTE *)(v44 + v55 + 8);
          v46 = *(_BYTE **)(v44 + v55 + 16);
          v47 = *(_BYTE *)(v44 + v55 + 9);
        }
      }
LABEL_121:
      if ( v70 )
        goto LABEL_128;
LABEL_122:
      v53 = (unsigned int)(v73 + 1);
      v73 = v53;
      if ( (unsigned int)v53 >= v77 )
        goto LABEL_128;
      continue;
    }
    break;
  }
  v40 = v55 + 40;
  if ( v55 + 40 > v54 )
    goto LABEL_121;
  if ( *(_BYTE *)(v44 + v55 + 10) )
    v52 = (char *)(v55 + v44 + 24);
  v46 = *(_BYTE **)(v44 + v55 + 16);
LABEL_127:
  v47 = *(_BYTE *)(v44 + v55 + 9);
  v45 = *(_BYTE *)(v44 + v55 + 8);
LABEL_128:
  if ( v52 )
  {
    v57 = *v52;
    v51 = 0;
    goto LABEL_131;
  }
LABEL_157:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
