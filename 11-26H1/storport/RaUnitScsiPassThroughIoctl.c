/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1401B3CB8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     PortPassThroughExBasicValidation @ 0x140053904 (PortPassThroughExBasicValidation.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x14005D340 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  __int64 v6; // rbp
  char v7; // r14
  char v8; // r15
  char v9; // r12
  int v10; // eax
  char v11; // si
  signed int v12; // eax
  __int64 v13; // rax
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  const EVENT_DESCRIPTOR *v18; // rdx
  int *v19; // rax
  char v20; // al
  __int64 v21; // rdx
  char *v22; // r10
  char v23; // si
  unsigned int v24; // eax
  char v25; // r11
  char v26; // r10
  char v27; // r14
  __int64 v28; // rcx
  char v29; // r13
  _BYTE *v30; // r9
  unsigned __int8 v31; // bp
  char *v32; // r14
  unsigned int v33; // r12d
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  __int64 v39; // [rsp+20h] [rbp-A8h]
  __int64 v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+30h] [rbp-98h]
  char v42; // [rsp+60h] [rbp-68h]
  unsigned int v43; // [rsp+64h] [rbp-64h]
  GUID v44; // [rsp+68h] [rbp-60h] BYREF
  GUID v45; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v45 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v45);
    if ( (byte_140173443 & 1) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        &EventPassThrough,
        &v45,
        a2,
        **(unsigned __int8 **)(a2 + 184),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL));
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_BYTE *)(a1 + 106);
  v8 = *(_BYTE *)(a1 + 105);
  v9 = *(_BYTE *)(a1 + 104);
  v10 = *(_DWORD *)(v6 + 24);
  if ( v10 == 315460 || v10 == 315464 )
  {
    v11 = 1;
    v12 = PortPassThroughExBasicValidation((IRP *)a2);
  }
  else
  {
    v11 = 0;
    v12 = *(_DWORD *)(v6 + 16) < (IoIs32bitProcess((PIRP)a2) != 0 ? 44 : 56) ? 0xC0000023 : 0;
  }
  if ( v12 < 0 )
    goto LABEL_15;
  v13 = *(_QWORD *)(a2 + 24);
  if ( v11 )
  {
    v28 = *(unsigned int *)(v13 + 24);
    if ( *(_WORD *)(v28 + v13) <= 1u && *(_DWORD *)(v13 + 12) >= 0xCu )
    {
      *(_DWORD *)(v28 + v13) = 1;
      *(_DWORD *)(v28 + v13 + 4) = 4;
      *(_BYTE *)(v28 + v13 + 8) = v9;
      *(_BYTE *)(v28 + v13 + 9) = v8;
      *(_BYTE *)(v28 + v13 + 10) = v7;
      *(_BYTE *)(v28 + v13 + 11) = 0;
      goto LABEL_10;
    }
LABEL_15:
    v15 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741808;
    if ( v15 )
      goto LABEL_19;
    v44 = 0LL;
    IoGetActivityIdIrp(a2, &v44);
    v17 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v17 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_19;
        v16 = *(unsigned int *)(a2 + 48);
        v18 = &EventNonReadWriteRequestComplete;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_19;
        v21 = *(_QWORD *)(v17 + 8);
        v29 = 0;
        v30 = 0LL;
        v31 = 0;
        v23 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        if ( *(_BYTE *)(v21 + 2) == 40 )
        {
          v32 = 0LL;
          v42 = 0;
          if ( *(_DWORD *)(v21 + 20) )
            goto LABEL_19;
          v33 = 0;
          v43 = *(_DWORD *)(v21 + 56);
          if ( !v43 )
            goto LABEL_19;
          while ( 1 )
          {
            v16 = *(unsigned int *)(v21 + 4LL * v33 + 120);
            if ( (unsigned int)v16 >= 0x80 )
            {
              v34 = *(unsigned int *)(v21 + 16);
              if ( (unsigned int)v16 < (unsigned int)v34 )
              {
                v35 = (unsigned int)v16;
                v36 = *(_DWORD *)(v16 + v21) - 64;
                if ( v36 )
                {
                  v16 = (unsigned int)(v36 - 1);
                  if ( (_DWORD)v16 )
                  {
                    if ( (_DWORD)v16 == 1 )
                    {
                      v16 = v35 + 40;
                      if ( v35 + 40 <= v34 )
                      {
                        if ( *(_DWORD *)(v35 + v21 + 12) )
                          v32 = (char *)(v35 + v21 + 32);
                        v30 = *(_BYTE **)(v35 + v21 + 24);
                        goto LABEL_80;
                      }
                    }
                  }
                  else
                  {
                    v16 = v35 + 56;
                    if ( v35 + 56 <= v34 )
                    {
                      v42 = 1;
                      if ( *(_BYTE *)(v35 + v21 + 10) )
                        v32 = (char *)(v35 + v21 + 24);
                      v29 = *(_BYTE *)(v35 + v21 + 8);
                      v30 = *(_BYTE **)(v35 + v21 + 16);
                      v31 = *(_BYTE *)(v35 + v21 + 9);
                    }
                  }
                }
                else
                {
                  v16 = v35 + 40;
                  if ( v35 + 40 <= v34 )
                  {
                    if ( *(_BYTE *)(v35 + v21 + 10) )
                      v32 = (char *)(v35 + v21 + 24);
                    v30 = *(_BYTE **)(v35 + v21 + 16);
LABEL_80:
                    v31 = *(_BYTE *)(v35 + v21 + 9);
                    v29 = *(_BYTE *)(v35 + v21 + 8);
LABEL_81:
                    if ( v32 )
                    {
                      v37 = *v32;
                      v27 = 0;
                      goto LABEL_84;
                    }
                    goto LABEL_19;
                  }
                }
                if ( v42 )
                  goto LABEL_81;
              }
            }
            if ( ++v33 >= v43 )
              goto LABEL_81;
          }
        }
        v37 = *(_BYTE *)(v21 + 72);
        v30 = *(_BYTE **)(v21 + 32);
        v31 = *(_BYTE *)(v21 + 11);
        v29 = *(_BYTE *)(v21 + 4);
        if ( *(_BYTE *)(v21 + 2) )
          goto LABEL_19;
LABEL_84:
        LOBYTE(v16) = v37 - 8;
        if ( (v16 & 0x5D) != 0 )
        {
LABEL_19:
          IofCompleteRequest((PIRP)a2, 0);
          return -1073741808;
        }
        v38 = *(_BYTE *)(v21 + 3);
        if ( v38 == 1 || !v30 || !v31 )
        {
LABEL_45:
          if ( byte_140173441 < 0 )
          {
            if ( !v27 )
            {
              v26 = 0;
              v25 = 0;
              v23 = 0;
            }
            LOBYTE(v41) = v29;
            LOBYTE(v40) = v38;
            LODWORD(v39) = *(_DWORD *)(a2 + 48);
            McTemplateK0pduuuuup_EtwWriteTransfer(v16, v21, &v44, a2, v39, v40, v41, v23, v25, v26, a2);
          }
          goto LABEL_19;
        }
        v20 = *v30 & 0x7F;
        if ( v20 == 114 || v20 == 115 )
        {
          v16 = (unsigned __int64)&v30[v31];
          LOBYTE(v21) = 0;
          if ( (unsigned __int64)(v30 + 8) > v16 )
          {
LABEL_43:
            if ( (_BYTE)v21 )
              v27 = 1;
            goto LABEL_45;
          }
          v25 = v30[2];
          v23 = v30[1] & 0xF;
          v26 = v30[3];
        }
        else
        {
          v16 = (unsigned __int64)&v30[v31];
          LOBYTE(v21) = 0;
          if ( (unsigned __int64)(v30 + 8) > v16 )
            goto LABEL_43;
          v22 = v30 + 13;
          v23 = v30[2] & 0xF;
          v24 = v31;
          if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
            v24 = (unsigned __int8)v30[7] + 8;
          v16 = (unsigned __int64)&v30[v24];
          if ( (unsigned __int64)v22 <= v16 )
            v25 = v30[12];
          if ( (unsigned __int64)(v30 + 14) > v16 )
            v26 = 0;
          else
            v26 = *v22;
        }
        LOBYTE(v21) = 1;
        goto LABEL_43;
      case 0x1B:
        if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v19 = *(int **)(a2 + 56);
            if ( v19 )
              v3 = *v19;
            LODWORD(v40) = *(_DWORD *)(a2 + 48);
            LODWORD(v39) = v3;
            McTemplateK0pqd_EtwWriteTransfer(v16, v17, &v44, a2, v39, v40);
          }
          goto LABEL_19;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_19;
        v18 = &EventPnpRequestComplete;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_19;
    }
    McTemplateK0pd_EtwWriteTransfer(v16, v18, &v44, a2, v39);
    goto LABEL_19;
  }
  *(_BYTE *)(v13 + 3) = v9;
  *(_BYTE *)(v13 + 4) = v8;
  *(_BYTE *)(v13 + 5) = v7;
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 8) != 0 )
    {
      LODWORD(v39) = 0;
      McTemplateK0pd_EtwWriteTransfer(0LL, &EventNonReadWriteRequestComplete, &v45, a2, v39);
    }
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), (PIRP)a2);
}
