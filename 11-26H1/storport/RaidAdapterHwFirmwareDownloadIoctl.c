/*
 * XREFs of RaidAdapterHwFirmwareDownloadIoctl @ 0x1400626F8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1400078F8 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x140008850 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1400912BC (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareDownloadIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // rsi
  int InfoFromMiniport; // r15d
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  _BYTE *v13; // r9
  unsigned __int8 v14; // r14
  char v15; // r11
  char v16; // si
  char v17; // r10
  char v18; // r12
  char *v19; // r12
  int v20; // ecx
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r13
  char v26; // cl
  char v27; // al
  char v28; // r8
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
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
  {
    InfoFromMiniport = -1073741823;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    InfoFromMiniport = -1073741820;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 5428) )
    goto LABEL_10;
  RaBuildHwFirmwareGetInfoBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, v38);
  v5 = P;
  if ( !P )
  {
LABEL_7:
    InfoFromMiniport = -1073741801;
    goto LABEL_15;
  }
  InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport(a1, a2, (__int64)P, v38[0]);
  if ( InfoFromMiniport >= 0 )
  {
    ExFreePoolWithTag(v5, 0x72536152u);
    P = 0LL;
    v38[0] = 0;
LABEL_10:
    RaBuildHwFirmwareDownloadBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, v38);
    v5 = P;
    if ( !P )
      goto LABEL_7;
    InfoFromMiniport = RaidAdapterSendSrbIoControlSynchronously(
                         a1,
                         (IRP *)a2,
                         (__int64)P,
                         v38[0],
                         (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
                         0,
                         128,
                         *(_DWORD *)(a1 + 4188));
  }
LABEL_13:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72536152u);
LABEL_15:
  v7 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = InfoFromMiniport;
  if ( v7 )
    goto LABEL_81;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_81;
    v11 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v2 = *v10;
        LODWORD(v33) = *(_DWORD *)(a2 + 48);
        LODWORD(v32) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v40, a2, v32, v33);
      }
      goto LABEL_81;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_81;
    v11 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_80:
    LODWORD(v32) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v40, a2, v32);
    goto LABEL_81;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_81;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0LL;
  v36 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v12 + 72);
    v13 = *(_BYTE **)(v12 + 32);
    v14 = *(_BYTE *)(v12 + 11);
    v25 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_81;
LABEL_55:
    LOBYTE(v8) = v26 - 8;
    if ( (v8 & 0x5D) != 0 )
      goto LABEL_81;
    if ( *(_BYTE *)(v12 + 3) == 1 || !v13 || !v14 )
      goto LABEL_74;
    v27 = *v13 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v8 = (unsigned __int64)&v13[v14];
      v28 = 0;
      if ( (unsigned __int64)(v13 + 8) > v8 )
        goto LABEL_72;
      v16 = v13[2];
      v15 = v13[1] & 0xF;
      v17 = v13[3];
    }
    else
    {
      v8 = (unsigned __int64)&v13[v14];
      v28 = 0;
      if ( (unsigned __int64)(v13 + 8) > v8 )
        goto LABEL_72;
      v29 = v13 + 13;
      v15 = v13[2] & 0xF;
      v30 = v14;
      if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
        v30 = (unsigned __int8)v13[7] + 8;
      v8 = (unsigned __int64)&v13[v30];
      if ( (unsigned __int64)v29 <= v8 )
        v16 = v13[12];
      if ( (unsigned __int64)(v13 + 14) > v8 )
        v17 = 0;
      else
        v17 = *v29;
    }
    v28 = 1;
LABEL_72:
    if ( v28 )
      v18 = 1;
LABEL_74:
    if ( byte_140173441 < 0 )
    {
      if ( !v18 )
      {
        v17 = 0;
        v16 = 0;
        v15 = 0;
      }
      LOBYTE(v35) = v15;
      LOBYTE(v34) = v25;
      LOBYTE(v33) = *(_BYTE *)(v12 + 3);
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v40, a2, v32, v33, v34, v35, v16, v17, a2);
    }
    goto LABEL_81;
  }
  v19 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v12 + 20) )
  {
    v20 = *(_DWORD *)(v12 + 56);
    v21 = 0LL;
    v38[0] = 0;
    LODWORD(P) = v20;
    if ( v20 )
    {
      do
      {
        v8 = *(unsigned int *)(v12 + 4 * v21 + 120);
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
                      v19 = (char *)(v23 + v12 + 32);
                    v13 = *(_BYTE **)(v23 + v12 + 24);
LABEL_40:
                    v25 = *(_BYTE *)(v23 + v12 + 8);
                    v14 = *(_BYTE *)(v23 + v12 + 9);
                    goto LABEL_49;
                  }
                }
              }
              else
              {
                v8 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v23 + v12 + 10) )
                    v19 = (char *)(v23 + v12 + 24);
                  v13 = *(_BYTE **)(v23 + v12 + 16);
                  v14 = *(_BYTE *)(v23 + v12 + 9);
                  v36 = *(_BYTE *)(v23 + v12 + 8);
                }
              }
            }
            else
            {
              v8 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v12 + 10) )
                  v19 = (char *)(v23 + v12 + 24);
                v13 = *(_BYTE **)(v23 + v12 + 16);
                goto LABEL_40;
              }
            }
            if ( v37 )
              break;
          }
        }
        v21 = v38[0] + 1;
        v38[0] = v21;
      }
      while ( (unsigned int)v21 < (unsigned int)P );
      v25 = v36;
LABEL_49:
      if ( v19 )
      {
        v26 = *v19;
        v18 = 0;
        goto LABEL_55;
      }
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)InfoFromMiniport;
}
