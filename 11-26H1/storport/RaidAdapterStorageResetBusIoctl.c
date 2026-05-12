/*
 * XREFs of RaidAdapterStorageResetBusIoctl @ 0x140057444
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageResetBusIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  unsigned __int8 *v6; // rdx
  int v7; // eax
  int *v8; // rax
  void *v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // r9
  unsigned __int8 v12; // r14
  char v13; // r11
  char v14; // si
  char v15; // r10
  char v16; // r15
  int v17; // eax
  char *v18; // r15
  unsigned int v19; // r13d
  unsigned __int64 v20; // r12
  __int64 v21; // r8
  int v22; // ecx
  char v23; // r12
  char v24; // cl
  char v25; // r8
  char v26; // al
  char *v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // r13d
  unsigned __int64 v30; // r12
  int v31; // ecx
  char v33; // [rsp+60h] [rbp-9h]
  char v34; // [rsp+61h] [rbp-8h]
  char v35; // [rsp+61h] [rbp-8h]
  unsigned int v36; // [rsp+64h] [rbp-5h]
  unsigned int v37; // [rsp+64h] [rbp-5h]
  unsigned int v38; // [rsp+68h] [rbp-1h]
  __int128 v39; // [rsp+70h] [rbp+7h] BYREF

  if ( !*(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
  {
    *(_BYTE *)(a2 + 141) = -84;
    LOBYTE(v3) = 0;
    v38 = -1073741811;
    v4 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v4 )
      goto LABEL_90;
    v39 = 0LL;
    IoGetActivityIdIrp(a2, &v39);
    v6 = *(unsigned __int8 **)(a2 + 184);
    if ( *v6 != 14 )
    {
      v7 = *v6 - 15;
      if ( *v6 != 15 )
      {
LABEL_5:
        if ( v7 != 12 )
          goto LABEL_90;
        if ( v6[1] == 7 && !*((_DWORD *)v6 + 2) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v8 = *(int **)(a2 + 56);
            if ( v8 )
              v3 = *v8;
            McTemplateK0pqd_EtwWriteTransfer(v5, (_DWORD)v6, (unsigned int)&v39, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_90;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_90;
        v9 = &EventPnpRequestComplete;
LABEL_89:
        McTemplateK0pd_EtwWriteTransfer(v5, v9, &v39, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_90;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_90;
      v10 = *((_QWORD *)v6 + 1);
      v11 = 0LL;
      v33 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = *(unsigned __int8 *)(v10 + 2);
      if ( (_BYTE)v17 == 40 )
      {
        v18 = 0LL;
        v34 = 0;
        if ( !*(_DWORD *)(v10 + 20) )
        {
          v19 = 0;
          v36 = *(_DWORD *)(v10 + 56);
          if ( v36 )
          {
            while ( 1 )
            {
              v5 = *(unsigned int *)(v10 + 4LL * v19 + 120);
              if ( (unsigned int)v5 >= 0x80 )
              {
                v20 = *(unsigned int *)(v10 + 16);
                if ( (unsigned int)v5 < (unsigned int)v20 )
                {
                  v21 = (unsigned int)v5;
                  v22 = *(_DWORD *)(v5 + v10) - 64;
                  if ( v22 )
                  {
                    LODWORD(v5) = v22 - 1;
                    if ( (_DWORD)v5 )
                    {
                      if ( (_DWORD)v5 == 1 )
                      {
                        LODWORD(v5) = v21 + 40;
                        if ( v21 + 40 <= v20 )
                          goto LABEL_24;
                      }
                    }
                    else
                    {
                      LODWORD(v5) = v21 + 56;
                      if ( v21 + 56 <= v20 )
                      {
                        v34 = 1;
                        if ( *(_BYTE *)(v21 + v10 + 10) )
                          v18 = (char *)(v21 + v10 + 24);
                        v11 = *(_BYTE **)(v21 + v10 + 16);
                        v12 = *(_BYTE *)(v21 + v10 + 9);
                        v33 = *(_BYTE *)(v21 + v10 + 8);
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v5) = v21 + 40;
                    if ( v21 + 40 <= v20 )
                      goto LABEL_38;
                  }
                  if ( v34 )
                    goto LABEL_35;
                }
              }
              if ( ++v19 >= v36 )
                goto LABEL_35;
            }
          }
        }
        goto LABEL_90;
      }
      goto LABEL_41;
    }
LABEL_87:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_90;
    v9 = &EventNonReadWriteRequestComplete;
    goto LABEL_89;
  }
  LOBYTE(v3) = 0;
  v38 = RaidAdapterResetBus(a1, **(_BYTE **)(a2 + 24));
  v4 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v38;
  if ( v4 )
    goto LABEL_90;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v6 = *(unsigned __int8 **)(a2 + 184);
  if ( *v6 == 14 )
    goto LABEL_87;
  v7 = *v6 - 15;
  if ( *v6 != 15 )
    goto LABEL_5;
  if ( byte_140173441 >= 0 )
    goto LABEL_90;
  v10 = *((_QWORD *)v6 + 1);
  v11 = 0LL;
  v33 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = *(unsigned __int8 *)(v10 + 2);
  if ( (_BYTE)v17 != 40 )
  {
LABEL_41:
    v23 = *(_BYTE *)(v10 + 4);
    v12 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE **)(v10 + 32);
    v24 = *(_BYTE *)(v10 + 72);
    if ( v17 )
      goto LABEL_90;
LABEL_42:
    LOBYTE(v5) = v24 - 8;
    if ( (v5 & 0x5D) != 0 )
      goto LABEL_90;
    v25 = *(_BYTE *)(v10 + 3);
    if ( v25 == 1 || !v11 || !v12 )
      goto LABEL_83;
    v26 = *v11 & 0x7F;
    if ( v26 == 114 || v26 == 115 )
    {
      v5 = (unsigned __int64)&v11[v12];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v11 + 8) > v5 )
        goto LABEL_81;
      v15 = v11[3];
      v13 = v11[1] & 0xF;
      v14 = v11[2];
    }
    else
    {
      v5 = (unsigned __int64)&v11[v12];
      LOBYTE(v10) = 0;
      if ( (unsigned __int64)(v11 + 8) > v5 )
        goto LABEL_81;
      v27 = v11 + 13;
      v13 = v11[2] & 0xF;
      v28 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v28 = (unsigned __int8)v11[7] + 8;
      v5 = (unsigned __int64)&v11[v28];
      if ( (unsigned __int64)v27 <= v5 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) > v5 )
        v15 = 0;
      else
        v15 = *v27;
    }
    LOBYTE(v10) = 1;
LABEL_81:
    if ( (_BYTE)v10 )
      v16 = 1;
LABEL_83:
    if ( byte_140173441 < 0 )
    {
      if ( !v16 )
      {
        v15 = 0;
        v13 = 0;
        v14 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v5,
        v10,
        (unsigned int)&v39,
        a2,
        *(_DWORD *)(a2 + 48),
        v25,
        v23,
        v13,
        v14,
        v15,
        a2);
    }
    goto LABEL_90;
  }
  v18 = 0LL;
  v35 = 0;
  if ( !*(_DWORD *)(v10 + 20) )
  {
    v29 = 0;
    v37 = *(_DWORD *)(v10 + 56);
    if ( v37 )
    {
      do
      {
        v5 = *(unsigned int *)(v10 + 4LL * v29 + 120);
        if ( (unsigned int)v5 >= 0x80 )
        {
          v30 = *(unsigned int *)(v10 + 16);
          if ( (unsigned int)v5 < (unsigned int)v30 )
          {
            v21 = (unsigned int)v5;
            v31 = *(_DWORD *)(v5 + v10) - 64;
            if ( v31 )
            {
              LODWORD(v5) = v31 - 1;
              if ( (_DWORD)v5 )
              {
                if ( (_DWORD)v5 == 1 )
                {
                  LODWORD(v5) = v21 + 40;
                  if ( v21 + 40 <= v30 )
                  {
LABEL_24:
                    if ( *(_DWORD *)(v21 + v10 + 12) )
                      v18 = (char *)(v21 + v10 + 32);
                    v11 = *(_BYTE **)(v21 + v10 + 24);
LABEL_27:
                    v23 = *(_BYTE *)(v21 + v10 + 8);
                    v12 = *(_BYTE *)(v21 + v10 + 9);
                    goto LABEL_36;
                  }
                }
              }
              else
              {
                LODWORD(v5) = v21 + 56;
                if ( v21 + 56 <= v30 )
                {
                  v35 = 1;
                  if ( *(_BYTE *)(v21 + v10 + 10) )
                    v18 = (char *)(v21 + v10 + 24);
                  v11 = *(_BYTE **)(v21 + v10 + 16);
                  v12 = *(_BYTE *)(v21 + v10 + 9);
                  v33 = *(_BYTE *)(v21 + v10 + 8);
                }
              }
            }
            else
            {
              LODWORD(v5) = v21 + 40;
              if ( v21 + 40 <= v30 )
              {
LABEL_38:
                if ( *(_BYTE *)(v21 + v10 + 10) )
                  v18 = (char *)(v21 + v10 + 24);
                v11 = *(_BYTE **)(v21 + v10 + 16);
                goto LABEL_27;
              }
            }
            if ( v35 )
              break;
          }
        }
        ++v29;
      }
      while ( v29 < v37 );
LABEL_35:
      v23 = v33;
LABEL_36:
      if ( v18 )
      {
        v24 = *v18;
        v16 = 0;
        goto LABEL_42;
      }
    }
  }
LABEL_90:
  IofCompleteRequest((PIRP)a2, 0);
  return v38;
}
