/*
 * XREFs of RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x140194E40 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x140195058 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x140195250 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x1401954C0 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1401956CC (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140195D18 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019627C (StorSetMFNDOperationInfo.c)
 *     StorSetDARTNVMeRegisters @ 0x140196778 (StorSetDARTNVMeRegisters.c)
 */

__int64 __fastcall RaidAdapterStorageInternalSetPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  signed int *v6; // rdx
  unsigned int v7; // esi
  signed int v8; // ecx
  int v9; // eax
  signed int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rcx
  unsigned __int8 *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r15
  char v23; // r11
  char v24; // r14
  char v25; // r10
  char v26; // r12
  int v27; // eax
  char *v28; // r12
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r13
  const EVENT_DESCRIPTOR *v35; // rdx
  char v36; // cl
  char v37; // r8
  char v38; // al
  char *v39; // r10
  unsigned int v40; // eax
  int *v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  int v45; // ecx
  char v47; // [rsp+60h] [rbp-9h]
  char v48; // [rsp+61h] [rbp-8h]
  char v49; // [rsp+61h] [rbp-8h]
  __int64 v50; // [rsp+68h] [rbp-1h] BYREF
  int v51; // [rsp+70h] [rbp+7h]
  GUID v52; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v6 = *(signed int **)(a2 + 24);
  v7 = -1073741811;
  v50 = *(unsigned int *)(v4 + 8);
  if ( v6 )
  {
    if ( *(_DWORD *)(v4 + 16) >= 8u )
    {
      v8 = *v6;
      if ( *v6 == 4 || (unsigned int)v8 <= 0x1D && (v9 = 545650688, _bittest(&v9, v8)) )
      {
        v10 = v6[1];
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v7 = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 56) = 0LL;
            v7 = -1073741808;
          }
LABEL_33:
          v16 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = v7;
          if ( v16 )
            goto LABEL_121;
          v52 = 0LL;
          IoGetActivityIdIrp(a2, &v52);
          v18 = *(unsigned __int8 **)(a2 + 184);
          if ( *v18 != 14 )
          {
            v19 = *v18 - 15;
            if ( *v18 == 15 )
            {
              if ( byte_140173441 >= 0 )
                goto LABEL_121;
              v20 = *((_QWORD *)v18 + 1);
              v21 = 0LL;
              v47 = 0;
              v22 = 0;
              v23 = 0;
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = *(unsigned __int8 *)(v20 + 2);
              if ( (_BYTE)v27 == 40 )
              {
                v28 = 0LL;
                v48 = 0;
                if ( !*(_DWORD *)(v20 + 20) )
                {
                  v29 = *(_DWORD *)(v20 + 56);
                  v30 = 0LL;
                  v51 = 0;
                  LODWORD(v50) = v29;
                  if ( v29 )
                  {
                    while ( 1 )
                    {
                      v17 = *(unsigned int *)(v20 + 4 * v30 + 120);
                      if ( (unsigned int)v17 >= 0x80 )
                      {
                        v31 = *(unsigned int *)(v20 + 16);
                        if ( (unsigned int)v17 < (unsigned int)v31 )
                        {
                          v32 = (unsigned int)v17;
                          v33 = *(_DWORD *)(v17 + v20) - 64;
                          if ( v33 )
                          {
                            v17 = (unsigned int)(v33 - 1);
                            if ( (_DWORD)v17 )
                            {
                              if ( (_DWORD)v17 == 1 )
                              {
                                v17 = v32 + 40;
                                if ( v32 + 40 <= v31 )
                                  goto LABEL_46;
                              }
                            }
                            else
                            {
                              v17 = v32 + 56;
                              if ( v32 + 56 <= v31 )
                              {
                                v48 = 1;
                                if ( *(_BYTE *)(v32 + v20 + 10) )
                                  v28 = (char *)(v32 + v20 + 24);
                                v21 = *(_BYTE **)(v32 + v20 + 16);
                                v22 = *(_BYTE *)(v32 + v20 + 9);
                                v47 = *(_BYTE *)(v32 + v20 + 8);
                              }
                            }
                          }
                          else
                          {
                            v17 = v32 + 40;
                            if ( v32 + 40 <= v31 )
                              goto LABEL_62;
                          }
                          if ( v48 )
                            goto LABEL_59;
                        }
                      }
                      v30 = (unsigned int)(v51 + 1);
                      v51 = v30;
                      if ( (unsigned int)v30 >= (unsigned int)v50 )
                        goto LABEL_59;
                    }
                  }
                }
                goto LABEL_121;
              }
              goto LABEL_65;
            }
            goto LABEL_83;
          }
LABEL_118:
          if ( (byte_140173442 & 8) == 0 )
            goto LABEL_121;
          v35 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
          goto LABEL_120;
        }
        if ( v8 > 15 )
        {
          switch ( v8 )
          {
            case 16:
              v15 = StorSetMFNDMigrationQoS(a1, a2, &v50);
              goto LABEL_32;
            case 18:
              v15 = StorSetMFNDChildPFQueuesState(a1, a2, &v50);
              goto LABEL_32;
            case 23:
              v15 = StorSetMFNDChildPFQoSStatisticsProperty(a1, a2, &v50);
              goto LABEL_32;
            case 29:
              v7 = StorSetDARTNVMeRegisters(a1, a2);
              break;
          }
        }
        else
        {
          if ( v8 == 15 )
          {
            v15 = StorSetMFNDChildPFCommandPermission(a1, a2, &v50);
            goto LABEL_32;
          }
          v11 = v8 - 4;
          if ( v11 )
          {
            v12 = v11 - 7;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    v7 = StorSetMFNDChildPFQoS(a1, a2, &v50);
                    *(_QWORD *)(a2 + 56) = v50;
                    goto LABEL_33;
                  }
                  goto LABEL_22;
                }
                v15 = StorSetMFNDChildPFSettings(a1, a2, &v50);
              }
              else
              {
                v15 = StorSetMFNDChildPFGlobalProperty(a1, a2, &v50);
              }
            }
            else
            {
              v15 = StorSetMFNDOperationInfo(a1, a2, &v50);
            }
LABEL_32:
            v7 = v15;
            *(_QWORD *)(a2 + 56) = v50;
            goto LABEL_33;
          }
          v7 = -1073741808;
        }
LABEL_22:
        *(_QWORD *)(a2 + 56) = 0LL;
        goto LABEL_33;
      }
    }
  }
  v16 = StorEtwLoggingEnabled == 0;
  v7 = -1073741808;
  *(_DWORD *)(a2 + 48) = -1073741808;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v16 )
    goto LABEL_121;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v18 = *(unsigned __int8 **)(a2 + 184);
  if ( *v18 == 14 )
    goto LABEL_118;
  v19 = *v18 - 15;
  if ( *v18 != 15 )
  {
LABEL_83:
    if ( v19 != 12 )
      goto LABEL_121;
    if ( v18[1] == 7 && !*((_DWORD *)v18 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v41 = *(int **)(a2 + 56);
        if ( v41 )
          v5 = *v41;
        McTemplateK0pqd_EtwWriteTransfer(v17, (__int64)v18, &v52, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_121;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_121;
    v35 = &EventPnpRequestComplete;
LABEL_120:
    McTemplateK0pd_EtwWriteTransfer(v17, v35, &v52, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_121;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_121;
  v20 = *((_QWORD *)v18 + 1);
  v21 = 0LL;
  v47 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = *(unsigned __int8 *)(v20 + 2);
  if ( (_BYTE)v27 != 40 )
  {
LABEL_65:
    v34 = *(_BYTE *)(v20 + 4);
    v22 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE **)(v20 + 32);
    v36 = *(_BYTE *)(v20 + 72);
    if ( v27 )
      goto LABEL_121;
LABEL_66:
    LOBYTE(v17) = v36 - 8;
    if ( (v17 & 0x5D) != 0 )
      goto LABEL_121;
    v37 = *(_BYTE *)(v20 + 3);
    if ( v37 == 1 || !v21 || !v22 )
      goto LABEL_114;
    v38 = *v21 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v17 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v17 )
        goto LABEL_112;
      v25 = v21[3];
      v23 = v21[1] & 0xF;
      v24 = v21[2];
    }
    else
    {
      v17 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v17 )
        goto LABEL_112;
      v39 = v21 + 13;
      v23 = v21[2] & 0xF;
      v40 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v40 = (unsigned __int8)v21[7] + 8;
      v17 = (unsigned __int64)&v21[v40];
      if ( (unsigned __int64)v39 <= v17 )
        v24 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v17 )
        v25 = 0;
      else
        v25 = *v39;
    }
    LOBYTE(v20) = 1;
LABEL_112:
    if ( (_BYTE)v20 )
      v26 = 1;
LABEL_114:
    if ( byte_140173441 < 0 )
    {
      if ( !v26 )
      {
        v25 = 0;
        v23 = 0;
        v24 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v17, v20, &v52, a2, *(_DWORD *)(a2 + 48), v37, v34, v23, v24, v25, a2);
    }
    goto LABEL_121;
  }
  v28 = 0LL;
  v49 = 0;
  if ( !*(_DWORD *)(v20 + 20) )
  {
    v42 = *(_DWORD *)(v20 + 56);
    v43 = 0LL;
    v51 = 0;
    LODWORD(v50) = v42;
    if ( v42 )
    {
      do
      {
        v17 = *(unsigned int *)(v20 + 4 * v43 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v44 = *(unsigned int *)(v20 + 16);
          if ( (unsigned int)v17 < (unsigned int)v44 )
          {
            v32 = (unsigned int)v17;
            v45 = *(_DWORD *)(v17 + v20) - 64;
            if ( v45 )
            {
              v17 = (unsigned int)(v45 - 1);
              if ( (_DWORD)v17 )
              {
                if ( (_DWORD)v17 == 1 )
                {
                  v17 = v32 + 40;
                  if ( v32 + 40 <= v44 )
                  {
LABEL_46:
                    if ( *(_DWORD *)(v32 + v20 + 12) )
                      v28 = (char *)(v32 + v20 + 32);
                    v21 = *(_BYTE **)(v32 + v20 + 24);
LABEL_49:
                    v34 = *(_BYTE *)(v32 + v20 + 8);
                    v22 = *(_BYTE *)(v32 + v20 + 9);
                    goto LABEL_60;
                  }
                }
              }
              else
              {
                v17 = v32 + 56;
                if ( v32 + 56 <= v44 )
                {
                  v49 = 1;
                  if ( *(_BYTE *)(v32 + v20 + 10) )
                    v28 = (char *)(v32 + v20 + 24);
                  v21 = *(_BYTE **)(v32 + v20 + 16);
                  v22 = *(_BYTE *)(v32 + v20 + 9);
                  v47 = *(_BYTE *)(v32 + v20 + 8);
                }
              }
            }
            else
            {
              v17 = v32 + 40;
              if ( v32 + 40 <= v44 )
              {
LABEL_62:
                if ( *(_BYTE *)(v32 + v20 + 10) )
                  v28 = (char *)(v32 + v20 + 24);
                v21 = *(_BYTE **)(v32 + v20 + 16);
                goto LABEL_49;
              }
            }
            if ( v49 )
              break;
          }
        }
        v43 = (unsigned int)(v51 + 1);
        v51 = v43;
      }
      while ( (unsigned int)v43 < (unsigned int)v50 );
LABEL_59:
      v34 = v47;
LABEL_60:
      if ( v28 )
      {
        v36 = *v28;
        v26 = 0;
        goto LABEL_66;
      }
    }
  }
LABEL_121:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
