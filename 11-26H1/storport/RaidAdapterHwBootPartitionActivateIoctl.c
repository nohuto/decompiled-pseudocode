/*
 * XREFs of RaidAdapterHwBootPartitionActivateIoctl @ 0x140061434
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildHwBootPartitionActivateBufferForMiniport @ 0x140090D60 (RaBuildHwBootPartitionActivateBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterHwBootPartitionActivateIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // r14
  _BYTE **v6; // rsi
  int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  __int64 v32; // [rsp+20h] [rbp-49h]
  __int64 v33; // [rsp+28h] [rbp-41h]
  __int64 v34; // [rsp+30h] [rbp-39h]
  __int64 v35; // [rsp+38h] [rbp-31h]
  char v36; // [rsp+60h] [rbp-9h]
  char v37; // [rsp+61h] [rbp-8h]
  unsigned int v38[3]; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  GUID v40; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v5 = 0LL;
  P = 0LL;
  v38[0] = 0;
  if ( *(_QWORD *)(a1 + 608) && *(_QWORD *)(a1 + 616) )
  {
    v6 = (_BYTE **)(a2 + 184);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x10u )
    {
      v7 = -1073741820;
LABEL_5:
      v38[0] = v7;
      goto LABEL_12;
    }
    RaBuildHwBootPartitionActivateBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, v38);
    v5 = P;
    if ( !P )
    {
      v7 = -1073741801;
      goto LABEL_5;
    }
    v7 = RaidAdapterSendSrbIoControlSynchronously(
           a1,
           (IRP *)a2,
           (__int64)P,
           v38[0],
           (__int64 (__fastcall *)(_QWORD))PortSrbTranslateBootPartitionIoctlStatusToNtStatus,
           0,
           128,
           *(_DWORD *)(a1 + 4188));
  }
  else
  {
    v7 = -1073741823;
    v6 = (_BYTE **)(a2 + 184);
  }
  v38[0] = v7;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x72536152u);
    v7 = v38[0];
  }
LABEL_12:
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v8 )
    goto LABEL_78;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v10 = *v6;
  if ( **v6 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_78;
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( **v6 != 15 )
  {
    if ( **v6 != 27 )
      goto LABEL_78;
    if ( v10[1] == 7 && !*((_DWORD *)v10 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        LODWORD(v33) = *(_DWORD *)(a2 + 48);
        LODWORD(v32) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)v10, &v40, a2, v32, v33);
      }
      goto LABEL_78;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_78;
    v12 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_77:
    LODWORD(v32) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v40, a2, v32);
    goto LABEL_78;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_78;
  v13 = *((_QWORD *)v10 + 1);
  v14 = 0LL;
  v36 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v14 = *(_BYTE **)(v13 + 32);
    v15 = *(_BYTE *)(v13 + 11);
    v25 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_78;
LABEL_52:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_78;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v14 || !v15 )
      goto LABEL_71;
    v28 = *v14 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_69;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_69;
      v29 = v14 + 13;
      v16 = v14[2] & 0xF;
      v30 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v30 = (unsigned __int8)v14[7] + 8;
      v9 = (unsigned __int64)&v14[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v9 )
        v18 = 0;
      else
        v18 = *v29;
    }
    LOBYTE(v13) = 1;
LABEL_69:
    if ( (_BYTE)v13 )
      v19 = 1;
LABEL_71:
    if ( byte_140173441 < 0 )
    {
      if ( !v19 )
      {
        v18 = 0;
        v17 = 0;
        v16 = 0;
      }
      LOBYTE(v35) = v16;
      LOBYTE(v34) = v25;
      LOBYTE(v33) = v27;
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v40, a2, v32, v33, v34, v35, v17, v18, a2);
    }
    goto LABEL_78;
  }
  v20 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v13 + 20) )
  {
    v21 = 0;
    LODWORD(P) = *(_DWORD *)(v13 + 56);
    if ( (_DWORD)P )
    {
      do
      {
        v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v22 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v9 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v9;
            v24 = *(_DWORD *)(v9 + v13) - 64;
            if ( v24 )
            {
              v9 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                  {
                    if ( *(_DWORD *)(v23 + v13 + 12) )
                      v20 = (char *)(v23 + v13 + 32);
                    v14 = *(_BYTE **)(v23 + v13 + 24);
LABEL_37:
                    v25 = *(_BYTE *)(v23 + v13 + 8);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    goto LABEL_46;
                  }
                }
              }
              else
              {
                v9 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  v15 = *(_BYTE *)(v23 + v13 + 9);
                  v36 = *(_BYTE *)(v23 + v13 + 8);
                }
              }
            }
            else
            {
              v9 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v13 + 10) )
                  v20 = (char *)(v23 + v13 + 24);
                v14 = *(_BYTE **)(v23 + v13 + 16);
                goto LABEL_37;
              }
            }
            if ( v37 )
              break;
          }
        }
        ++v21;
      }
      while ( v21 < (unsigned int)P );
      v25 = v36;
LABEL_46:
      if ( v20 )
      {
        v26 = *v20;
        v19 = 0;
        goto LABEL_52;
      }
    }
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return v38[0];
}
