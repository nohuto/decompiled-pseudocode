/*
 * XREFs of RaUnitStorageBreakReservationIoctl @ 0x14018B304
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     PortAllowIrpFromPdoToFdo @ 0x1401B17A4 (PortAllowIrpFromPdoToFdo.c)
 */

__int64 __fastcall RaUnitStorageBreakReservationIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // esi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // bp
  char v16; // si
  char v17; // r11
  char v18; // r10
  char v19; // r14
  char *v20; // r14
  unsigned int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  char v31; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  GUID v33; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( (int)PortAllowIrpFromPdoToFdo(*(_QWORD *)(v2 + 8)) < 0 )
  {
    v7 = StorEtwLoggingEnabled == 0;
    v6 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_71;
    v33 = 0LL;
    IoGetActivityIdIrp(a2, &v33);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_71;
      v11 = &EventNonReadWriteRequestComplete;
      goto LABEL_18;
    }
    if ( *(_BYTE *)v9 != 15 )
    {
      if ( *(_BYTE *)v9 == 27 )
      {
        if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v10 = *(int **)(a2 + 56);
            if ( v10 )
              v4 = *v10;
            McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v33, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_71;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v11 = &EventPnpRequestComplete;
LABEL_18:
          McTemplateK0pd_EtwWriteTransfer(v8, v11, &v33, a2, *(_DWORD *)(a2 + 48));
        }
      }
LABEL_71:
      IofCompleteRequest((PIRP)a2, 0);
      return v6;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_71;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v12 + 2) == 40 )
    {
      v20 = 0LL;
      v31 = 0;
      if ( *(_DWORD *)(v12 + 20) )
        goto LABEL_70;
      v21 = 0;
      v32 = *(_DWORD *)(v12 + 56);
      if ( !v32 )
        goto LABEL_70;
      while ( 1 )
      {
        v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
        if ( (unsigned int)v8 >= 0x80 )
        {
          v22 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v8 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v8;
            v24 = *(_DWORD *)(v8 + v12) - 64;
            if ( v24 )
            {
              v8 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v8 )
              {
                if ( (_DWORD)v8 == 1 )
                {
                  v8 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                  {
                    if ( *(_DWORD *)(v23 + v12 + 12) )
                      v20 = (char *)(v23 + v12 + 32);
                    v14 = *(_BYTE **)(v23 + v12 + 24);
                    goto LABEL_43;
                  }
                }
              }
              else
              {
                v8 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v31 = 1;
                  if ( *(_BYTE *)(v23 + v12 + 10) )
                    v20 = (char *)(v23 + v12 + 24);
                  v13 = *(_BYTE *)(v23 + v12 + 8);
                  v14 = *(_BYTE **)(v23 + v12 + 16);
                  v15 = *(_BYTE *)(v23 + v12 + 9);
                }
              }
            }
            else
            {
              v8 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v12 + 10) )
                  v20 = (char *)(v23 + v12 + 24);
                v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_43:
                v15 = *(_BYTE *)(v23 + v12 + 9);
                v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_44:
                if ( v20 )
                {
                  v25 = *v20;
                  v19 = 0;
                  goto LABEL_47;
                }
                goto LABEL_70;
              }
            }
            if ( v31 )
              goto LABEL_44;
          }
        }
        if ( ++v21 >= v32 )
          goto LABEL_44;
      }
    }
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_70;
LABEL_47:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) != 0 )
    {
LABEL_70:
      v6 = -1073741808;
      goto LABEL_71;
    }
    v26 = *(_BYTE *)(v12 + 3);
    if ( v26 == 1 || !v14 || !v15 )
    {
LABEL_66:
      if ( byte_140173441 < 0 )
      {
        if ( !v19 )
        {
          v18 = 0;
          v17 = 0;
          v16 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v33, a2, *(_DWORD *)(a2 + 48), v26, v13, v16, v17, v18, a2);
      }
      goto LABEL_70;
    }
    v27 = *v14 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v8 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_64;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v8 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_64;
      v28 = v14 + 13;
      v16 = v14[2] & 0xF;
      v29 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v29 = (unsigned __int8)v14[7] + 8;
      v8 = (unsigned __int64)&v14[v29];
      if ( (unsigned __int64)v28 <= v8 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v8 )
        v18 = 0;
      else
        v18 = *v28;
    }
    LOBYTE(v12) = 1;
LABEL_64:
    if ( (_BYTE)v12 )
      v19 = 1;
    goto LABEL_66;
  }
  if ( StorEtwLoggingEnabled )
  {
    v33 = 0LL;
    IoGetActivityIdIrp(a2, &v33);
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v5, &EventNonReadWriteRequestComplete, &v33, a2, *(_DWORD *)(a2 + 48));
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), (PIRP)a2);
}
