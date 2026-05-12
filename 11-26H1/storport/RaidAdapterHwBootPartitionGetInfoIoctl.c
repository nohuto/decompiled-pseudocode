/*
 * XREFs of RaidAdapterHwBootPartitionGetInfoIoctl @ 0x140061CB8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildHwBootPartitionGetInfoBufferForMiniport @ 0x140091018 (RaBuildHwBootPartitionGetInfoBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterHwBootPartitionGetInfoIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r13
  int v3; // ebx
  __int64 v4; // rax
  _DWORD *v7; // rsi
  int v8; // r12d
  unsigned int *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r14
  char v22; // si
  char v23; // r11
  char v24; // r10
  char v25; // r15
  char *v26; // r15
  int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r13
  char v33; // cl
  char v34; // r8
  char v35; // al
  char *v36; // r10
  unsigned int v37; // eax
  __int64 v39; // [rsp+20h] [rbp-49h]
  __int64 v40; // [rsp+28h] [rbp-41h]
  __int64 v41; // [rsp+30h] [rbp-39h]
  __int64 v42; // [rsp+38h] [rbp-31h]
  char v43; // [rsp+60h] [rbp-9h]
  char v44; // [rsp+61h] [rbp-8h]
  unsigned int v45; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  GUID v47; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P = 0LL;
  v45 = 0;
  v7 = 0LL;
  if ( !v2 )
  {
    v8 = -1073741811;
LABEL_16:
    v12 = 0LL;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 608) && *(_QWORD *)(a1 + 616) )
  {
    v9 = (unsigned int *)(v4 + 8);
    if ( *(_DWORD *)(v4 + 8) < 0x20u || *(_DWORD *)(v4 + 16) < 0x20u )
    {
      v8 = -1073741789;
      goto LABEL_16;
    }
    RaBuildHwBootPartitionGetInfoBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v45);
    v7 = P;
    if ( !P )
    {
      v8 = -1073741801;
      goto LABEL_16;
    }
    v8 = RaidAdapterSendSrbIoControlSynchronously(
           a1,
           (IRP *)a2,
           (__int64)P,
           v45,
           (__int64 (__fastcall *)(_QWORD))PortSrbTranslateBootPartitionIoctlStatusToNtStatus,
           0,
           64,
           *(_DWORD *)(a1 + 4188));
    if ( v8 >= 0 )
    {
      memset_0(v2, 0, *v9);
      v10 = (unsigned int)v7[11];
      v8 = 0;
      v11 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_DWORD *)v11 = 1;
      *(_DWORD *)(v11 + 4) = 32;
      *(_DWORD *)(v11 + 16) = v7[10];
      *(_QWORD *)(v11 + 8) = *(_QWORD *)((char *)v7 + v10 + 8);
      *(_BYTE *)(v11 + 28) = *((_BYTE *)v7 + v10 + 24);
      *(_BYTE *)(v11 + 29) = *((_BYTE *)v7 + v10 + 25);
      *(_DWORD *)(v11 + 20) = *(_DWORD *)((char *)v7 + v10 + 16);
      *(_DWORD *)(v11 + 24) = *(_DWORD *)((char *)v7 + v10 + 20);
    }
  }
  else
  {
    v8 = -1073741823;
    v9 = (unsigned int *)(v4 + 8);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( v8 < 0 )
    goto LABEL_16;
  v13 = v2[1];
  v12 = *v9;
  if ( (unsigned int)v12 >= v13 )
    v12 = v13;
LABEL_19:
  *(_QWORD *)(a2 + 56) = v12;
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v14 )
    goto LABEL_85;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_85;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_84;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_85;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        LODWORD(v40) = *(_DWORD *)(a2 + 48);
        LODWORD(v39) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v47, a2, v39, v40);
      }
      goto LABEL_85;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_85;
    v18 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_84:
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v47, a2, v39);
    goto LABEL_85;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_85;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0LL;
  v43 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v19 + 72);
    v20 = *(_BYTE **)(v19 + 32);
    v21 = *(_BYTE *)(v19 + 11);
    v32 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_85;
LABEL_59:
    LOBYTE(v15) = v33 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_85;
    v34 = *(_BYTE *)(v19 + 3);
    if ( v34 == 1 || !v20 || !v21 )
      goto LABEL_78;
    v35 = *v20 & 0x7F;
    if ( v35 == 114 || v35 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_76;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_76;
      v36 = v20 + 13;
      v22 = v20[2] & 0xF;
      v37 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v37 = (unsigned __int8)v20[7] + 8;
      v15 = (unsigned __int64)&v20[v37];
      if ( (unsigned __int64)v36 <= v15 )
        v23 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v15 )
        v24 = 0;
      else
        v24 = *v36;
    }
    LOBYTE(v19) = 1;
LABEL_76:
    if ( (_BYTE)v19 )
      v25 = 1;
LABEL_78:
    if ( byte_140173441 < 0 )
    {
      if ( !v25 )
      {
        v24 = 0;
        v23 = 0;
        v22 = 0;
      }
      LOBYTE(v42) = v22;
      LOBYTE(v41) = v32;
      LOBYTE(v40) = v34;
      LODWORD(v39) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v47, a2, v39, v40, v41, v42, v23, v24, a2);
    }
    goto LABEL_85;
  }
  v26 = 0LL;
  v44 = 0;
  if ( !*(_DWORD *)(v19 + 20) )
  {
    v27 = *(_DWORD *)(v19 + 56);
    v28 = 0LL;
    v45 = 0;
    LODWORD(P) = v27;
    if ( v27 )
    {
      do
      {
        v15 = *(unsigned int *)(v19 + 4 * v28 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v29 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v29 )
          {
            v30 = (unsigned int)v15;
            v31 = *(_DWORD *)(v15 + v19) - 64;
            if ( v31 )
            {
              v15 = (unsigned int)(v31 - 1);
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  v15 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_DWORD *)(v30 + v19 + 12) )
                      v26 = (char *)(v30 + v19 + 32);
                    v20 = *(_BYTE **)(v30 + v19 + 24);
LABEL_44:
                    v32 = *(_BYTE *)(v30 + v19 + 8);
                    v21 = *(_BYTE *)(v30 + v19 + 9);
                    goto LABEL_53;
                  }
                }
              }
              else
              {
                v15 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v44 = 1;
                  if ( *(_BYTE *)(v30 + v19 + 10) )
                    v26 = (char *)(v30 + v19 + 24);
                  v20 = *(_BYTE **)(v30 + v19 + 16);
                  v21 = *(_BYTE *)(v30 + v19 + 9);
                  v43 = *(_BYTE *)(v30 + v19 + 8);
                }
              }
            }
            else
            {
              v15 = v30 + 40;
              if ( v30 + 40 <= v29 )
              {
                if ( *(_BYTE *)(v30 + v19 + 10) )
                  v26 = (char *)(v30 + v19 + 24);
                v20 = *(_BYTE **)(v30 + v19 + 16);
                goto LABEL_44;
              }
            }
            if ( v44 )
              break;
          }
        }
        v28 = v45 + 1;
        v45 = v28;
      }
      while ( (unsigned int)v28 < (unsigned int)P );
      v32 = v43;
LABEL_53:
      if ( v26 )
      {
        v33 = *v26;
        v25 = 0;
        goto LABEL_59;
      }
    }
  }
LABEL_85:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
