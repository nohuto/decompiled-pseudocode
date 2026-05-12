/*
 * XREFs of RaidAdapterSetBootLunIoctl @ 0x1400685E4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x14009171C (RaBuildSetBootLunBufferForMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterSetBootLunIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // r14
  _BYTE **v6; // rsi
  unsigned int v7; // r12d
  unsigned int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdx
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
  int v22; // ecx
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  __int64 v25; // r8
  int v26; // ecx
  char v27; // r13
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r10
  unsigned int v32; // eax
  __int64 v34; // [rsp+20h] [rbp-49h]
  __int64 v35; // [rsp+28h] [rbp-41h]
  __int64 v36; // [rsp+30h] [rbp-39h]
  __int64 v37; // [rsp+38h] [rbp-31h]
  char v38; // [rsp+60h] [rbp-9h]
  char v39; // [rsp+61h] [rbp-8h]
  unsigned int v40; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  GUID v42; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = 0LL;
  P = 0LL;
  v40 = 0;
  if ( *(_QWORD *)(a1 + 608) && *(_QWORD *)(a1 + 616) )
  {
    v6 = (_BYTE **)(a2 + 184);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x18u )
    {
      v7 = -1073741820;
      goto LABEL_13;
    }
    v8 = RaBuildSetBootLunBufferForMiniport(a1, a2, &P, &v40);
    v5 = P;
    v7 = v8;
    if ( !v8 )
    {
      if ( P )
      {
        v7 = RaidAdapterSendSrbIoControlSynchronously(a1, (IRP *)a2, (__int64)P, v40, 0LL, 0, 128, 0);
        goto LABEL_11;
      }
      v7 = -1073741801;
    }
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  else
  {
    v7 = -1073741823;
    v6 = (_BYTE **)(a2 + 184);
  }
LABEL_11:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72536152u);
LABEL_13:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v9 )
    goto LABEL_79;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v11 = *v6;
  if ( **v6 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_79;
    v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( **v6 != 15 )
  {
    if ( **v6 != 27 )
      goto LABEL_79;
    if ( v11[1] == 7 && !*((_DWORD *)v11 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v2 = *v12;
        LODWORD(v35) = *(_DWORD *)(a2 + 48);
        LODWORD(v34) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v42, a2, v34, v35);
      }
      goto LABEL_79;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_79;
    v13 = &EventPnpRequestComplete;
LABEL_78:
    LODWORD(v34) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v42, a2, v34);
    goto LABEL_79;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_79;
  v14 = *((_QWORD *)v11 + 1);
  v15 = 0LL;
  v38 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v14 + 72);
    v15 = *(_BYTE **)(v14 + 32);
    v16 = *(_BYTE *)(v14 + 11);
    v27 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_79;
LABEL_53:
    LOBYTE(v10) = v28 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_79;
    v29 = *(_BYTE *)(v14 + 3);
    if ( v29 == 1 || !v15 || !v16 )
      goto LABEL_72;
    v30 = *v15 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_70;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_70;
      v31 = v15 + 13;
      v17 = v15[2] & 0xF;
      v32 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v32 = (unsigned __int8)v15[7] + 8;
      v10 = (unsigned __int64)&v15[v32];
      if ( (unsigned __int64)v31 <= v10 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v10 )
        v19 = 0;
      else
        v19 = *v31;
    }
    LOBYTE(v14) = 1;
LABEL_70:
    if ( (_BYTE)v14 )
      v20 = 1;
LABEL_72:
    if ( byte_140173441 < 0 )
    {
      if ( !v20 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      LOBYTE(v37) = v17;
      LOBYTE(v36) = v27;
      LOBYTE(v35) = v29;
      LODWORD(v34) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v42, a2, v34, v35, v36, v37, v18, v19, a2);
    }
    goto LABEL_79;
  }
  v21 = 0LL;
  v39 = 0;
  if ( !*(_DWORD *)(v14 + 20) )
  {
    v22 = *(_DWORD *)(v14 + 56);
    v23 = 0LL;
    v40 = 0;
    LODWORD(P) = v22;
    if ( v22 )
    {
      do
      {
        v10 = *(unsigned int *)(v14 + 4 * v23 + 120);
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
                      v21 = (char *)(v25 + v14 + 32);
                    v15 = *(_BYTE **)(v25 + v14 + 24);
LABEL_38:
                    v27 = *(_BYTE *)(v25 + v14 + 8);
                    v16 = *(_BYTE *)(v25 + v14 + 9);
                    goto LABEL_47;
                  }
                }
              }
              else
              {
                v10 = v25 + 56;
                if ( v25 + 56 <= v24 )
                {
                  v39 = 1;
                  if ( *(_BYTE *)(v25 + v14 + 10) )
                    v21 = (char *)(v25 + v14 + 24);
                  v15 = *(_BYTE **)(v25 + v14 + 16);
                  v16 = *(_BYTE *)(v25 + v14 + 9);
                  v38 = *(_BYTE *)(v25 + v14 + 8);
                }
              }
            }
            else
            {
              v10 = v25 + 40;
              if ( v25 + 40 <= v24 )
              {
                if ( *(_BYTE *)(v25 + v14 + 10) )
                  v21 = (char *)(v25 + v14 + 24);
                v15 = *(_BYTE **)(v25 + v14 + 16);
                goto LABEL_38;
              }
            }
            if ( v39 )
              break;
          }
        }
        v23 = v40 + 1;
        v40 = v23;
      }
      while ( (unsigned int)v23 < (unsigned int)P );
      v27 = v38;
LABEL_47:
      if ( v21 )
      {
        v28 = *v21;
        v20 = 0;
        goto LABEL_53;
      }
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
