/*
 * XREFs of RaidAdapterHwFirmwareGetInfoIoctl @ 0x1400075C0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1400078F8 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1400080B4 (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x140008850 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoIoctl(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  _DWORD *v5; // r13
  PVOID v7; // rsi
  int InfoFromMiniport; // r12d
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  void *v16; // rdx
  int *v17; // rax
  char v18; // al
  __int64 v19; // rdx
  char *v20; // r10
  char v21; // si
  unsigned int v22; // eax
  char v23; // r11
  char v24; // r10
  char v25; // r15
  _BYTE *v26; // r9
  unsigned __int8 v27; // r14
  char *v28; // r15
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r13
  char v35; // cl
  char v36; // r8
  char v37; // [rsp+60h] [rbp-9h]
  char v38; // [rsp+61h] [rbp-8h]
  unsigned int v39; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  __int128 v41; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v3) = 0;
  v5 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  P = 0LL;
  v39 = 0;
  if ( !a1[76] || !a1[77] )
  {
    InfoFromMiniport = -1073741823;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v2 + 16) < 0x10u )
  {
    InfoFromMiniport = -1073741820;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v2 + 8) < 0x38u )
  {
    InfoFromMiniport = -1073741789;
    goto LABEL_17;
  }
  RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], a2, &P, &v39);
  v7 = P;
  if ( !P )
  {
    InfoFromMiniport = -1073741801;
    goto LABEL_17;
  }
  InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport(a1, a2, P, v39);
  if ( InfoFromMiniport < 0 )
  {
LABEL_17:
    v11 = 0LL;
    goto LABEL_9;
  }
  memset_0(v5, 0, *(unsigned int *)(v2 + 8));
  v9 = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, v7);
  v10 = v5[1];
  InfoFromMiniport = v9;
  v11 = *(unsigned int *)(v2 + 8);
  if ( (unsigned int)v11 >= v10 )
    v11 = v10;
LABEL_9:
  *(_QWORD *)(a2 + 56) = v11;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = InfoFromMiniport;
  if ( v12 )
    goto LABEL_15;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_15;
    v16 = &EventNonReadWriteRequestComplete;
    goto LABEL_20;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_15;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, (unsigned int)&v41, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_15;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_15;
    v16 = &EventPnpRequestComplete;
LABEL_20:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v41, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_15;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_15;
  v19 = *(_QWORD *)(v14 + 8);
  v26 = 0LL;
  v37 = 0;
  v27 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v19 + 72);
    v26 = *(_BYTE **)(v19 + 32);
    v27 = *(_BYTE *)(v19 + 11);
    v34 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_15;
LABEL_81:
    LOBYTE(v13) = v35 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_15;
    v36 = *(_BYTE *)(v19 + 3);
    if ( v36 == 1 || !v26 || !v27 )
      goto LABEL_43;
    v18 = *v26 & 0x7F;
    if ( v18 == 114 || v18 == 115 )
    {
      v13 = (unsigned __int64)&v26[v27];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v26 + 8) > v13 )
      {
LABEL_41:
        if ( (_BYTE)v19 )
          v25 = 1;
LABEL_43:
        if ( byte_140173441 < 0 )
        {
          if ( !v25 )
          {
            v24 = 0;
            v23 = 0;
            v21 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v13,
            v19,
            (unsigned int)&v41,
            a2,
            *(_DWORD *)(a2 + 48),
            v36,
            v34,
            v21,
            v23,
            v24,
            a2);
        }
        goto LABEL_15;
      }
      v23 = v26[2];
      v21 = v26[1] & 0xF;
      v24 = v26[3];
    }
    else
    {
      v13 = (unsigned __int64)&v26[v27];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v26 + 8) > v13 )
        goto LABEL_41;
      v20 = v26 + 13;
      v21 = v26[2] & 0xF;
      v22 = v27;
      if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
        v22 = (unsigned __int8)v26[7] + 8;
      v13 = (unsigned __int64)&v26[v22];
      if ( (unsigned __int64)v20 <= v13 )
        v23 = v26[12];
      if ( (unsigned __int64)(v26 + 14) > v13 )
        v24 = 0;
      else
        v24 = *v20;
    }
    LOBYTE(v19) = 1;
    goto LABEL_41;
  }
  v28 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_15;
  v29 = *(_DWORD *)(v19 + 56);
  v30 = 0LL;
  v39 = 0;
  LODWORD(P) = v29;
  if ( !v29 )
    goto LABEL_15;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v19 + 4 * v30 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v31 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v13 < (unsigned int)v31 )
        break;
    }
LABEL_71:
    v30 = v39 + 1;
    v39 = v30;
    if ( (unsigned int)v30 >= (unsigned int)P )
    {
LABEL_72:
      v34 = v37;
      goto LABEL_73;
    }
  }
  v32 = (unsigned int)v13;
  v33 = *(_DWORD *)(v13 + v19) - 64;
  if ( v33 )
  {
    LODWORD(v13) = v33 - 1;
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        LODWORD(v13) = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v19 + 12) )
            v28 = (char *)(v32 + v19 + 32);
          v26 = *(_BYTE **)(v32 + v19 + 24);
          goto LABEL_79;
        }
      }
    }
    else
    {
      LODWORD(v13) = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v32 + v19 + 10) )
          v28 = (char *)(v32 + v19 + 24);
        v26 = *(_BYTE **)(v32 + v19 + 16);
        v27 = *(_BYTE *)(v32 + v19 + 9);
        v37 = *(_BYTE *)(v32 + v19 + 8);
      }
    }
    goto LABEL_70;
  }
  LODWORD(v13) = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_70:
    if ( v38 )
      goto LABEL_72;
    goto LABEL_71;
  }
  if ( *(_BYTE *)(v32 + v19 + 10) )
    v28 = (char *)(v32 + v19 + 24);
  v26 = *(_BYTE **)(v32 + v19 + 16);
LABEL_79:
  v34 = *(_BYTE *)(v32 + v19 + 8);
  v27 = *(_BYTE *)(v32 + v19 + 9);
LABEL_73:
  if ( v28 )
  {
    v35 = *v28;
    v25 = 0;
    goto LABEL_81;
  }
LABEL_15:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)InfoFromMiniport;
}
