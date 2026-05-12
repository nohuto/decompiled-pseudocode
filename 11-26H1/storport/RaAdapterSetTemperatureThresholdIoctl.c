/*
 * XREFs of RaAdapterSetTemperatureThresholdIoctl @ 0x14005FA7C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x140091A14 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaAdapterSetTemperatureThresholdIoctl(_QWORD *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  PVOID v6; // r14
  _BYTE **v7; // rsi
  int v8; // eax
  __int16 v9; // ax
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r14
  char v19; // r11
  char v20; // si
  char v21; // r10
  char v22; // r15
  char *v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r12
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  __int64 v35; // [rsp+20h] [rbp-49h]
  __int64 v36; // [rsp+28h] [rbp-41h]
  __int64 v37; // [rsp+30h] [rbp-39h]
  __int64 v38; // [rsp+38h] [rbp-31h]
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  unsigned int v41[3]; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  GUID v43; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  P = 0LL;
  v41[0] = 0;
  if ( a1[76] && a1[77] )
  {
    v7 = (_BYTE **)(a2 + 184);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x10u )
    {
      v8 = -1073741820;
      v41[0] = -1073741820;
      goto LABEL_14;
    }
    v9 = *(_WORD *)(v4 + 8);
    if ( (v9 & 1) == 0 )
      *(_WORD *)(v4 + 8) = v9 | 1;
    v10 = RaBuildSetTemperatureThresholdBufferForMiniport(a1[1], a2, &P, v41);
    v6 = P;
    if ( v10 >= 0 && P )
      v8 = RaidAdapterSendSrbIoControlSynchronously((__int64)a1, (IRP *)a2, (__int64)P, v41[0], 0LL, 0, 128, 0);
    else
      v8 = -1073741801;
  }
  else
  {
    v8 = -1073741823;
    v7 = (_BYTE **)(a2 + 184);
  }
  v41[0] = v8;
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x72536152u);
    v8 = v41[0];
  }
LABEL_14:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v11 )
    goto LABEL_80;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v13 = *v7;
  if ( **v7 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_80;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_79;
  }
  if ( **v7 != 15 )
  {
    if ( **v7 != 27 )
      goto LABEL_80;
    if ( v13[1] == 7 && !*((_DWORD *)v13 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(v35) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v12, (__int64)v13, &v43, a2, v35, v36);
      }
      goto LABEL_80;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_80;
    v15 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_79:
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v43, a2, v35);
    goto LABEL_80;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_80;
  v16 = *((_QWORD *)v13 + 1);
  v17 = 0LL;
  v39 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v17 = *(_BYTE **)(v16 + 32);
    v18 = *(_BYTE *)(v16 + 11);
    v28 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_80;
LABEL_54:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_80;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v17 || !v18 )
      goto LABEL_73;
    v31 = *v17 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_71;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_71;
      v32 = v17 + 13;
      v19 = v17[2] & 0xF;
      v33 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v33 = (unsigned __int8)v17[7] + 8;
      v12 = (unsigned __int64)&v17[v33];
      if ( (unsigned __int64)v32 <= v12 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v12 )
        v21 = 0;
      else
        v21 = *v32;
    }
    LOBYTE(v16) = 1;
LABEL_71:
    if ( (_BYTE)v16 )
      v22 = 1;
LABEL_73:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      LOBYTE(v38) = v19;
      LOBYTE(v37) = v28;
      LOBYTE(v36) = v30;
      LODWORD(v35) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v43, a2, v35, v36, v37, v38, v20, v21, a2);
    }
    goto LABEL_80;
  }
  v23 = 0LL;
  v40 = 0;
  if ( !*(_DWORD *)(v16 + 20) )
  {
    v24 = 0;
    LODWORD(P) = *(_DWORD *)(v16 + 56);
    if ( (_DWORD)P )
    {
      do
      {
        v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v25 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v12 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v12;
            v27 = *(_DWORD *)(v12 + v16) - 64;
            if ( v27 )
            {
              v12 = (unsigned int)(v27 - 1);
              if ( (_DWORD)v12 )
              {
                if ( (_DWORD)v12 == 1 )
                {
                  v12 = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v26 + v16 + 12) )
                      v23 = (char *)(v26 + v16 + 32);
                    v17 = *(_BYTE **)(v26 + v16 + 24);
LABEL_39:
                    v28 = *(_BYTE *)(v26 + v16 + 8);
                    v18 = *(_BYTE *)(v26 + v16 + 9);
                    goto LABEL_48;
                  }
                }
              }
              else
              {
                v12 = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v40 = 1;
                  if ( *(_BYTE *)(v26 + v16 + 10) )
                    v23 = (char *)(v26 + v16 + 24);
                  v17 = *(_BYTE **)(v26 + v16 + 16);
                  v18 = *(_BYTE *)(v26 + v16 + 9);
                  v39 = *(_BYTE *)(v26 + v16 + 8);
                }
              }
            }
            else
            {
              v12 = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v26 + v16 + 10) )
                  v23 = (char *)(v26 + v16 + 24);
                v17 = *(_BYTE **)(v26 + v16 + 16);
                goto LABEL_39;
              }
            }
            if ( v40 )
              break;
          }
        }
        ++v24;
      }
      while ( v24 < (unsigned int)P );
      v28 = v39;
LABEL_48:
      if ( v23 )
      {
        v29 = *v23;
        v22 = 0;
        goto LABEL_54;
      }
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v41[0];
}
