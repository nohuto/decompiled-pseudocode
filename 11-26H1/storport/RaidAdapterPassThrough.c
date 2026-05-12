/*
 * XREFs of RaidAdapterPassThrough @ 0x1401B3090
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidRecordPassthroughData @ 0x140042980 (RaidRecordPassthroughData.c)
 *     PortPassThroughExBasicValidation @ 0x140053904 (PortPassThroughExBasicValidation.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // ebx
  int v6; // eax
  char v7; // si
  signed int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  int v11; // edx
  unsigned __int8 *v12; // rax
  _BYTE *v13; // rcx
  unsigned __int8 v14; // si
  __int64 *Unit; // r11
  __int64 v16; // rax
  __int64 v17; // r11
  int v18; // r9d
  int v19; // r10d
  unsigned int v21; // esi
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  const EVENT_DESCRIPTOR *v25; // rdx
  int *v26; // rax
  char v27; // al
  char v28; // r8
  char *v29; // r10
  char v30; // r11
  unsigned int v31; // eax
  char v32; // bp
  char v33; // r10
  char v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rdx
  _BYTE *v37; // r9
  unsigned __int8 v38; // r14
  char *v39; // r15
  unsigned int v40; // r13d
  unsigned __int64 v41; // r12
  __int64 v42; // r8
  int v43; // ecx
  char v44; // r12
  char v45; // cl
  int v46; // [rsp+20h] [rbp-A8h]
  int v47; // [rsp+30h] [rbp-98h]
  char v48; // [rsp+60h] [rbp-68h]
  char v49; // [rsp+61h] [rbp-67h]
  int v50; // [rsp+64h] [rbp-64h]
  unsigned int v51; // [rsp+64h] [rbp-64h]
  GUID v52; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  HIBYTE(v50) = 0;
  v6 = *(_DWORD *)(v2 + 24);
  if ( v6 == 315460 || v6 == 315464 )
  {
    v7 = 1;
    v8 = PortPassThroughExBasicValidation((IRP *)a2);
  }
  else
  {
    v7 = 0;
    v8 = *(_DWORD *)(v2 + 16) < (IoIs32bitProcess((PIRP)a2) != 0 ? 44 : 56) ? 0xC0000023 : 0;
  }
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v7 )
  {
    v35 = *(unsigned int *)(v9 + 24);
    if ( *(_WORD *)(v35 + v9) != 1 || *(_DWORD *)(v35 + v9 + 4) < 4u )
      goto LABEL_14;
    LOWORD(v50) = *(_WORD *)(v35 + v9 + 8);
    v10 = *(_BYTE *)(v35 + v9 + 10);
  }
  else
  {
    LOWORD(v50) = *(_WORD *)(v9 + 3);
    v10 = *(_BYTE *)(v9 + 5);
  }
  BYTE2(v50) = v10;
  v11 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v11 == 315460 || v11 == 315464 )
  {
    v12 = (unsigned __int8 *)(v9 + 56);
    v13 = (_BYTE *)(v9 + 57);
  }
  else
  {
    v12 = (unsigned __int8 *)(v9 + 36);
    v13 = (_BYTE *)(v9 + 37);
  }
  v14 = *v12;
  if ( DisableIEEE1667 && (v14 == 0xA2 || v14 == 0xB5) && *v13 == 0xEE )
  {
    v21 = -1073741637;
    goto LABEL_15;
  }
  Unit = RaidAdapterFindUnit(a1, v50);
  if ( !Unit )
  {
LABEL_14:
    v21 = -1073741810;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v16 + 1) || (Unit[63] & 1) == 0 )
  {
    *(_BYTE *)(v16 + 3) |= 1u;
    RaidRecordPassthroughData(v14);
    PortPassThroughExSendAsync(*(_QWORD *)(v17 + 8), a2, v19, v18, v47, v17);
    return 259LL;
  }
  v21 = -1073741808;
LABEL_15:
  v22 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v21;
  if ( v22 )
    goto LABEL_19;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v24 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v24 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_19;
    v23 = *(unsigned int *)(a2 + 48);
    v25 = &EventNonReadWriteRequestComplete;
    v46 = *(_DWORD *)(a2 + 48);
    goto LABEL_26;
  }
  if ( *(_BYTE *)v24 != 15 )
  {
    if ( *(_BYTE *)v24 != 27 )
      goto LABEL_19;
    if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v26 = *(int **)(a2 + 56);
        if ( v26 )
          v3 = *v26;
        McTemplateK0pqd_EtwWriteTransfer(v23, v24, &v52, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_19;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_19;
    v25 = &EventPnpRequestComplete;
    v46 = *(_DWORD *)(a2 + 48);
LABEL_26:
    McTemplateK0pd_EtwWriteTransfer(v23, v25, &v52, a2, v46);
    goto LABEL_19;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_19;
  v36 = *(_QWORD *)(v24 + 8);
  v37 = 0LL;
  v48 = 0;
  v38 = 0;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( *(_BYTE *)(v36 + 2) == 40 )
  {
    v39 = 0LL;
    v49 = 0;
    if ( *(_DWORD *)(v36 + 20) )
      goto LABEL_19;
    v40 = 0;
    v51 = *(_DWORD *)(v36 + 56);
    if ( !v51 )
      goto LABEL_19;
    while ( 1 )
    {
      v23 = *(unsigned int *)(v36 + 4LL * v40 + 120);
      if ( (unsigned int)v23 >= 0x80 )
      {
        v41 = *(unsigned int *)(v36 + 16);
        if ( (unsigned int)v23 < (unsigned int)v41 )
        {
          v42 = (unsigned int)v23;
          v43 = *(_DWORD *)(v23 + v36) - 64;
          if ( v43 )
          {
            v23 = (unsigned int)(v43 - 1);
            if ( (_DWORD)v23 )
            {
              if ( (_DWORD)v23 == 1 )
              {
                v23 = v42 + 40;
                if ( v42 + 40 <= v41 )
                {
                  if ( *(_DWORD *)(v42 + v36 + 12) )
                    v39 = (char *)(v42 + v36 + 32);
                  v37 = *(_BYTE **)(v42 + v36 + 24);
                  goto LABEL_90;
                }
              }
            }
            else
            {
              v23 = v42 + 56;
              if ( v42 + 56 <= v41 )
              {
                v49 = 1;
                if ( *(_BYTE *)(v42 + v36 + 10) )
                  v39 = (char *)(v42 + v36 + 24);
                v37 = *(_BYTE **)(v42 + v36 + 16);
                v38 = *(_BYTE *)(v42 + v36 + 9);
                v48 = *(_BYTE *)(v42 + v36 + 8);
              }
            }
          }
          else
          {
            v23 = v42 + 40;
            if ( v42 + 40 <= v41 )
            {
              if ( *(_BYTE *)(v42 + v36 + 10) )
                v39 = (char *)(v42 + v36 + 24);
              v37 = *(_BYTE **)(v42 + v36 + 16);
LABEL_90:
              v44 = *(_BYTE *)(v42 + v36 + 8);
              v38 = *(_BYTE *)(v42 + v36 + 9);
LABEL_84:
              if ( v39 )
              {
                v45 = *v39;
                v34 = 0;
                goto LABEL_92;
              }
              goto LABEL_19;
            }
          }
          if ( v49 )
            goto LABEL_83;
        }
      }
      if ( ++v40 >= v51 )
      {
LABEL_83:
        v44 = v48;
        goto LABEL_84;
      }
    }
  }
  v45 = *(_BYTE *)(v36 + 72);
  v37 = *(_BYTE **)(v36 + 32);
  v38 = *(_BYTE *)(v36 + 11);
  v44 = *(_BYTE *)(v36 + 4);
  if ( *(_BYTE *)(v36 + 2) )
    goto LABEL_19;
LABEL_92:
  LOBYTE(v23) = v45 - 8;
  if ( (v23 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v36 + 3) == 1 || !v37 || !v38 )
    {
LABEL_49:
      if ( byte_140173441 < 0 )
      {
        if ( !v34 )
        {
          v33 = 0;
          v32 = 0;
          v30 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v23,
          v36,
          &v52,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v36 + 3),
          v44,
          v30,
          v32,
          v33,
          a2);
      }
      goto LABEL_19;
    }
    v27 = *v37 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v23 = (unsigned __int64)&v37[v38];
      v28 = 0;
      if ( (unsigned __int64)(v37 + 8) > v23 )
      {
LABEL_47:
        if ( v28 )
          v34 = 1;
        goto LABEL_49;
      }
      v32 = v37[2];
      v30 = v37[1] & 0xF;
      v33 = v37[3];
    }
    else
    {
      v23 = (unsigned __int64)&v37[v38];
      v28 = 0;
      if ( (unsigned __int64)(v37 + 8) > v23 )
        goto LABEL_47;
      v29 = v37 + 13;
      v30 = v37[2] & 0xF;
      v31 = v38;
      if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
        v31 = (unsigned __int8)v37[7] + 8;
      v23 = (unsigned __int64)&v37[v31];
      if ( (unsigned __int64)v29 <= v23 )
        v32 = v37[12];
      if ( (unsigned __int64)(v37 + 14) > v23 )
        v33 = 0;
      else
        v33 = *v29;
    }
    v28 = 1;
    goto LABEL_47;
  }
LABEL_19:
  IofCompleteRequest((PIRP)a2, 0);
  return v21;
}
