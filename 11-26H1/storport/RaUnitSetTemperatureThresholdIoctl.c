/*
 * XREFs of RaUnitSetTemperatureThresholdIoctl @ 0x1400A0F8C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x140091A14 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitSetTemperatureThresholdIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v6; // eax
  PVOID v8; // rsi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char v18; // si
  char v19; // r10
  char v20; // r15
  char *v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-49h]
  __int64 v33; // [rsp+28h] [rbp-41h]
  __int64 v34; // [rsp+30h] [rbp-39h]
  char v35; // [rsp+60h] [rbp-9h]
  char v36; // [rsp+61h] [rbp-8h]
  int v37; // [rsp+64h] [rbp-5h]
  unsigned int v38; // [rsp+68h] [rbp-1h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P[0] = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v4 + 16) < 0x10u )
  {
    v6 = -1073741820;
    v37 = -1073741820;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 8LL) & 1) != 0 )
  {
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v4 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
  }
  v6 = RaBuildSetTemperatureThresholdBufferForMiniport(*(_QWORD *)(a1 + 8), a2, (__int64 *)P, &v38);
  v8 = P[0];
  v37 = v6;
  if ( v6 >= 0 )
  {
    if ( !P[0] )
      goto LABEL_10;
    v6 = RaidUnitSendSrbIoControlSynchronously(a1, a2, (__int64)P[0], v38, 0LL, 0, 128);
    v37 = v6;
  }
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x72536152u);
    v6 = v37;
  }
LABEL_10:
  v9 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v9 )
    goto LABEL_76;
  *(_OWORD *)P = 0LL;
  IoGetActivityIdIrp(a2, P);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 != 14 )
  {
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 == 27 )
      {
        if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v12 = *(int **)(a2 + 56);
            if ( v12 )
              v2 = *v12;
            LODWORD(v33) = *(_DWORD *)(a2 + 48);
            LODWORD(v32) = v2;
            McTemplateK0pqd_EtwWriteTransfer(v10, v11, (const GUID *)P, a2, v32, v33);
          }
          goto LABEL_76;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v13 = &EventPnpRequestComplete;
LABEL_75:
          LODWORD(v32) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v10, v13, (const GUID *)P, a2, v32);
          goto LABEL_76;
        }
      }
      goto LABEL_76;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_76;
    v14 = *(_QWORD *)(v11 + 8);
    v15 = 0LL;
    v35 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v14 + 2) == 40 )
    {
      v21 = 0LL;
      v36 = 0;
      if ( *(_DWORD *)(v14 + 20) )
        goto LABEL_76;
      v22 = 0;
      v38 = *(_DWORD *)(v14 + 56);
      if ( !v38 )
        goto LABEL_76;
      do
      {
        v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v23 = *(unsigned int *)(v14 + 16);
          if ( (unsigned int)v10 < (unsigned int)v23 )
          {
            v24 = (unsigned int)v10;
            v25 = *(_DWORD *)(v10 + v14) - 64;
            if ( v25 )
            {
              v10 = (unsigned int)(v25 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v10 = v24 + 40;
                  if ( v24 + 40 <= v23 )
                  {
                    if ( *(_DWORD *)(v24 + v14 + 12) )
                      v21 = (char *)(v24 + v14 + 32);
                    v15 = *(_BYTE **)(v24 + v14 + 24);
LABEL_35:
                    v26 = *(_BYTE *)(v24 + v14 + 8);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    goto LABEL_44;
                  }
                }
              }
              else
              {
                v10 = v24 + 56;
                if ( v24 + 56 <= v23 )
                {
                  v36 = 1;
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  v16 = *(_BYTE *)(v24 + v14 + 9);
                  v35 = *(_BYTE *)(v24 + v14 + 8);
                }
              }
            }
            else
            {
              v10 = v24 + 40;
              if ( v24 + 40 <= v23 )
              {
                if ( *(_BYTE *)(v24 + v14 + 10) )
                  v21 = (char *)(v24 + v14 + 24);
                v15 = *(_BYTE **)(v24 + v14 + 16);
                goto LABEL_35;
              }
            }
            if ( v36 )
              break;
          }
        }
        ++v22;
      }
      while ( v22 < v38 );
      v26 = v35;
LABEL_44:
      if ( !v21 )
        goto LABEL_76;
      v27 = *v21;
      v20 = 0;
    }
    else
    {
      v27 = *(_BYTE *)(v14 + 72);
      v15 = *(_BYTE **)(v14 + 32);
      v16 = *(_BYTE *)(v14 + 11);
      v26 = *(_BYTE *)(v14 + 4);
      if ( *(_BYTE *)(v14 + 2) )
        goto LABEL_76;
    }
    LOBYTE(v10) = v27 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_76;
    v28 = *(_BYTE *)(v14 + 3);
    if ( v28 == 1 || !v15 || !v16 )
    {
LABEL_69:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v19 = 0;
          v18 = 0;
          v17 = 0;
        }
        LOBYTE(v34) = v26;
        LOBYTE(v33) = v28;
        LODWORD(v32) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, (const GUID *)P, a2, v32, v33, v34, v17, v18, v19, a2);
      }
      goto LABEL_76;
    }
    v29 = *v15 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_67;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_67;
      v30 = v15 + 13;
      v17 = v15[2] & 0xF;
      v31 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v31 = (unsigned __int8)v15[7] + 8;
      v10 = (unsigned __int64)&v15[v31];
      if ( (unsigned __int64)v30 <= v10 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v10 )
        v19 = 0;
      else
        v19 = *v30;
    }
    LOBYTE(v14) = 1;
LABEL_67:
    if ( (_BYTE)v14 )
      v20 = 1;
    goto LABEL_69;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v37;
}
