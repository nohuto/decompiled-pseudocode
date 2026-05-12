/*
 * XREFs of RaUnitHwBootPartitionDownloadIoctl @ 0x14009CA34
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitHwBootPartitionDownloadIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  char v16; // r13
  _BYTE *v17; // r9
  unsigned __int8 v18; // bp
  char v19; // si
  char v20; // r11
  char v21; // r10
  char v22; // r14
  char *v23; // r14
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r10
  unsigned int v32; // eax
  int v33; // [rsp+20h] [rbp-A8h]
  char v34; // [rsp+60h] [rbp-68h]
  int v35; // [rsp+64h] [rbp-64h]
  unsigned int v36; // [rsp+68h] [rbp-60h]
  GUID v37; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 )
  {
    v8 = *(_DWORD *)(v4 + 16);
    if ( v8 < 0x28 || v8 < *(_DWORD *)(v6 + 4) )
    {
      v7 = -1073741820;
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 8) & 1) != 0 )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) = v4 + 72;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
      }
      v7 = -1073741808;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  v35 = v7;
  v10 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v10 )
    goto LABEL_75;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_75;
    v11 = *(unsigned int *)(a2 + 48);
    v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    v33 = *(_DWORD *)(a2 + 48);
    goto LABEL_74;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v37, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_75;
    v14 = &EventPnpRequestComplete;
    v33 = *(_DWORD *)(a2 + 48);
LABEL_74:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v37, a2, v33);
    goto LABEL_75;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_75;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v15 + 2) == 40 )
  {
    v23 = 0LL;
    v34 = 0;
    if ( *(_DWORD *)(v15 + 20) )
      goto LABEL_75;
    v24 = 0;
    v36 = *(_DWORD *)(v15 + 56);
    if ( !v36 )
      goto LABEL_75;
    while ( 1 )
    {
      v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
      if ( (unsigned int)v11 >= 0x80 )
      {
        v25 = *(unsigned int *)(v15 + 16);
        if ( (unsigned int)v11 < (unsigned int)v25 )
        {
          v26 = (unsigned int)v11;
          v27 = *(_DWORD *)(v11 + v15) - 64;
          if ( v27 )
          {
            v11 = (unsigned int)(v27 - 1);
            if ( (_DWORD)v11 )
            {
              if ( (_DWORD)v11 == 1 )
              {
                v11 = v26 + 40;
                if ( v26 + 40 <= v25 )
                {
                  if ( *(_DWORD *)(v26 + v15 + 12) )
                    v23 = (char *)(v26 + v15 + 32);
                  v17 = *(_BYTE **)(v26 + v15 + 24);
                  goto LABEL_45;
                }
              }
            }
            else
            {
              v11 = v26 + 56;
              if ( v26 + 56 <= v25 )
              {
                v34 = 1;
                if ( *(_BYTE *)(v26 + v15 + 10) )
                  v23 = (char *)(v26 + v15 + 24);
                v16 = *(_BYTE *)(v26 + v15 + 8);
                v17 = *(_BYTE **)(v26 + v15 + 16);
                v18 = *(_BYTE *)(v26 + v15 + 9);
              }
            }
          }
          else
          {
            v11 = v26 + 40;
            if ( v26 + 40 <= v25 )
            {
              if ( *(_BYTE *)(v26 + v15 + 10) )
                v23 = (char *)(v26 + v15 + 24);
              v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_45:
              v18 = *(_BYTE *)(v26 + v15 + 9);
              v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_46:
              if ( v23 )
              {
                v28 = *v23;
                v22 = 0;
                goto LABEL_49;
              }
              goto LABEL_75;
            }
          }
          if ( v34 )
            goto LABEL_46;
        }
      }
      if ( ++v24 >= v36 )
        goto LABEL_46;
    }
  }
  v28 = *(_BYTE *)(v15 + 72);
  v17 = *(_BYTE **)(v15 + 32);
  v18 = *(_BYTE *)(v15 + 11);
  v16 = *(_BYTE *)(v15 + 4);
  if ( *(_BYTE *)(v15 + 2) )
    goto LABEL_75;
LABEL_49:
  LOBYTE(v11) = v28 - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    v29 = *(_BYTE *)(v15 + 3);
    if ( v29 == 1 || !v17 || !v18 )
    {
LABEL_68:
      if ( byte_140173441 < 0 )
      {
        if ( !v22 )
        {
          v21 = 0;
          v20 = 0;
          v19 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v37, a2, *(_DWORD *)(a2 + 48), v29, v16, v19, v20, v21, a2);
      }
      goto LABEL_75;
    }
    v30 = *v17 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_66;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_66;
      v31 = v17 + 13;
      v19 = v17[2] & 0xF;
      v32 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v32 = (unsigned __int8)v17[7] + 8;
      v11 = (unsigned __int64)&v17[v32];
      if ( (unsigned __int64)v31 <= v11 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v11 )
        v21 = 0;
      else
        v21 = *v31;
    }
    LOBYTE(v15) = 1;
LABEL_66:
    if ( (_BYTE)v15 )
      v22 = 1;
    goto LABEL_68;
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v35;
}
