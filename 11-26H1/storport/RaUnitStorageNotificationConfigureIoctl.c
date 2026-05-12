/*
 * XREFs of RaUnitStorageNotificationConfigureIoctl @ 0x1400A3218
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitStorageNotificationConfigureIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  char v15; // r13
  _BYTE *v16; // r9
  unsigned __int8 v17; // bp
  char v18; // si
  char v19; // r11
  char v20; // r10
  char v21; // r14
  char *v22; // r14
  unsigned int v23; // r12d
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  int v32; // [rsp+20h] [rbp-A8h]
  char v33; // [rsp+60h] [rbp-68h]
  int v34; // [rsp+64h] [rbp-64h]
  unsigned int v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = (__int64 *)(a2 + 184);
  if ( v4 )
  {
    v7 = *v5;
    if ( *(_DWORD *)(*v5 + 16) >= 0x40u )
    {
      if ( *(_DWORD *)(v4 + 12) == 2 )
      {
        ++*(_BYTE *)(a2 + 67);
        *v5 = v7 + 72;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
      }
      v6 = -1073741822;
    }
    else
    {
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  v34 = v6;
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v9 )
    goto LABEL_74;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v11 = *v5;
  if ( *(_BYTE *)*v5 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_74;
    v10 = *(unsigned int *)(a2 + 48);
    v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
    goto LABEL_73;
  }
  if ( *(_BYTE *)*v5 != 15 )
  {
    if ( *(_BYTE *)*v5 != 27 )
      goto LABEL_74;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v2 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v36, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_74;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_74;
    v13 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_73:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v36, a2, v32);
    goto LABEL_74;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_74;
  v14 = *(_QWORD *)(v11 + 8);
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
    v33 = 0;
    if ( *(_DWORD *)(v14 + 20) )
      goto LABEL_74;
    v23 = 0;
    v35 = *(_DWORD *)(v14 + 56);
    if ( !v35 )
      goto LABEL_74;
    while ( 1 )
    {
      v10 = *(unsigned int *)(v14 + 4LL * v23 + 120);
      if ( (unsigned int)v10 >= 0x80 )
      {
        v24 = *(unsigned int *)(v14 + 16);
        if ( (unsigned int)v10 < (unsigned int)v24 )
        {
          v25 = (unsigned int)v10;
          v26 = *(_DWORD *)(v10 + v14) - 64;
          if ( v26 )
          {
            v10 = (unsigned int)(v26 - 1);
            if ( (_DWORD)v10 )
            {
              if ( (_DWORD)v10 == 1 )
              {
                v10 = v25 + 40;
                if ( v25 + 40 <= v24 )
                {
                  if ( *(_DWORD *)(v25 + v14 + 12) )
                    v22 = (char *)(v25 + v14 + 32);
                  v16 = *(_BYTE **)(v25 + v14 + 24);
                  goto LABEL_44;
                }
              }
            }
            else
            {
              v10 = v25 + 56;
              if ( v25 + 56 <= v24 )
              {
                v33 = 1;
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
            v10 = v25 + 40;
            if ( v25 + 40 <= v24 )
            {
              if ( *(_BYTE *)(v25 + v14 + 10) )
                v22 = (char *)(v25 + v14 + 24);
              v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_44:
              v17 = *(_BYTE *)(v25 + v14 + 9);
              v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_45:
              if ( v22 )
              {
                v27 = *v22;
                v21 = 0;
                goto LABEL_48;
              }
              goto LABEL_74;
            }
          }
          if ( v33 )
            goto LABEL_45;
        }
      }
      if ( ++v23 >= v35 )
        goto LABEL_45;
    }
  }
  v27 = *(_BYTE *)(v14 + 72);
  v16 = *(_BYTE **)(v14 + 32);
  v17 = *(_BYTE *)(v14 + 11);
  v15 = *(_BYTE *)(v14 + 4);
  if ( *(_BYTE *)(v14 + 2) )
    goto LABEL_74;
LABEL_48:
  LOBYTE(v10) = v27 - 8;
  if ( (v10 & 0x5D) == 0 )
  {
    v28 = *(_BYTE *)(v14 + 3);
    if ( v28 == 1 || !v16 || !v17 )
    {
LABEL_67:
      if ( byte_140173441 < 0 )
      {
        if ( !v21 )
        {
          v20 = 0;
          v19 = 0;
          v18 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v36, a2, *(_DWORD *)(a2 + 48), v28, v15, v18, v19, v20, a2);
      }
      goto LABEL_74;
    }
    v29 = *v16 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v10 = (unsigned __int64)&v16[v17];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v16 + 8) > v10 )
        goto LABEL_65;
      v19 = v16[2];
      v18 = v16[1] & 0xF;
      v20 = v16[3];
    }
    else
    {
      v10 = (unsigned __int64)&v16[v17];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v16 + 8) > v10 )
        goto LABEL_65;
      v30 = v16 + 13;
      v18 = v16[2] & 0xF;
      v31 = v17;
      if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
        v31 = (unsigned __int8)v16[7] + 8;
      v10 = (unsigned __int64)&v16[v31];
      if ( (unsigned __int64)v30 <= v10 )
        v19 = v16[12];
      if ( (unsigned __int64)(v16 + 14) > v10 )
        v20 = 0;
      else
        v20 = *v30;
    }
    LOBYTE(v14) = 1;
LABEL_65:
    if ( (_BYTE)v14 )
      v21 = 1;
    goto LABEL_67;
  }
LABEL_74:
  IofCompleteRequest((PIRP)a2, 0);
  return v34;
}
