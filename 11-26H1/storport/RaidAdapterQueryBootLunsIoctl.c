/*
 * XREFs of RaidAdapterQueryBootLunsIoctl @ 0x140064748
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1400914C8 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x140092480 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterQueryBootLunsIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  _DWORD *v5; // r13
  PVOID v7; // rsi
  int v8; // eax
  int v9; // r12d
  int BootLunsToHwQueryBootLuns; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // r14
  char v21; // r11
  char v22; // si
  char v23; // r10
  char v24; // r15
  char *v25; // r15
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r13
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-49h]
  __int64 v39; // [rsp+28h] [rbp-41h]
  __int64 v40; // [rsp+30h] [rbp-39h]
  __int64 v41; // [rsp+38h] [rbp-31h]
  char v42; // [rsp+60h] [rbp-9h]
  char v43; // [rsp+61h] [rbp-8h]
  unsigned int v44; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  GUID v46; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  P = 0LL;
  v44 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
  {
    v9 = -1073741823;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 16) < 8u || *(_DWORD *)(v2 + 8) < 8u )
  {
    v9 = -1073741820;
    goto LABEL_14;
  }
  v8 = RaBuildQueryBootLunsBufferForMiniport(a1, a2, &P, &v44);
  v7 = P;
  v9 = v8;
  if ( v8 )
    goto LABEL_14;
  if ( !P )
  {
    v9 = -1073741801;
    goto LABEL_14;
  }
  v9 = RaidAdapterSendSrbIoControlSynchronously(a1, (IRP *)a2, (__int64)P, v44, 0LL, 0, 64, 0);
  if ( v9 < 0 )
  {
LABEL_14:
    v12 = 0LL;
    goto LABEL_15;
  }
  memset_0(v5, 0, *(unsigned int *)(v2 + 8));
  BootLunsToHwQueryBootLuns = RaTranslateMiniportQueryBootLunsToHwQueryBootLuns(a1, a2, v7);
  v11 = v5[1];
  v9 = BootLunsToHwQueryBootLuns;
  v12 = *(unsigned int *)(v2 + 8);
  if ( (unsigned int)v12 >= v11 )
    v12 = v11;
LABEL_15:
  *(_QWORD *)(a2 + 56) = v12;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( !v13 )
  {
    v46 = 0LL;
    IoGetActivityIdIrp(a2, &v46);
    v15 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v15 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_83;
      v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_82;
    }
    if ( *(_BYTE *)v15 != 15 )
    {
      if ( *(_BYTE *)v15 != 27 )
        goto LABEL_83;
      if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v16 = *(int **)(a2 + 56);
          if ( v16 )
            v3 = *v16;
          LODWORD(v39) = *(_DWORD *)(a2 + 48);
          LODWORD(v38) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v46, a2, v38, v39);
        }
        goto LABEL_83;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_83;
      v17 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_82:
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v14, v17, &v46, a2, v38);
      goto LABEL_83;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_83;
    v18 = *(_QWORD *)(v15 + 8);
    v19 = 0LL;
    v42 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    if ( *(_BYTE *)(v18 + 2) != 40 )
    {
      v32 = *(_BYTE *)(v18 + 72);
      v19 = *(_BYTE **)(v18 + 32);
      v20 = *(_BYTE *)(v18 + 11);
      v31 = *(_BYTE *)(v18 + 4);
      if ( *(_BYTE *)(v18 + 2) )
        goto LABEL_83;
LABEL_57:
      LOBYTE(v14) = v32 - 8;
      if ( (v14 & 0x5D) != 0 )
        goto LABEL_83;
      v33 = *(_BYTE *)(v18 + 3);
      if ( v33 == 1 || !v19 || !v20 )
        goto LABEL_76;
      v34 = *v19 & 0x7F;
      if ( v34 == 114 || v34 == 115 )
      {
        v14 = (unsigned __int64)&v19[v20];
        LOBYTE(v18) = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_74;
        v22 = v19[2];
        v21 = v19[1] & 0xF;
        v23 = v19[3];
      }
      else
      {
        v14 = (unsigned __int64)&v19[v20];
        LOBYTE(v18) = 0;
        if ( (unsigned __int64)(v19 + 8) > v14 )
          goto LABEL_74;
        v35 = v19 + 13;
        v21 = v19[2] & 0xF;
        v36 = v20;
        if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
          v36 = (unsigned __int8)v19[7] + 8;
        v14 = (unsigned __int64)&v19[v36];
        if ( (unsigned __int64)v35 <= v14 )
          v22 = v19[12];
        if ( (unsigned __int64)(v19 + 14) > v14 )
          v23 = 0;
        else
          v23 = *v35;
      }
      LOBYTE(v18) = 1;
LABEL_74:
      if ( (_BYTE)v18 )
        v24 = 1;
LABEL_76:
      if ( byte_140173441 < 0 )
      {
        if ( !v24 )
        {
          v23 = 0;
          v22 = 0;
          v21 = 0;
        }
        LOBYTE(v41) = v21;
        LOBYTE(v40) = v31;
        LOBYTE(v39) = v33;
        LODWORD(v38) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v46, a2, v38, v39, v40, v41, v22, v23, a2);
      }
      goto LABEL_83;
    }
    v25 = 0LL;
    v43 = 0;
    if ( !*(_DWORD *)(v18 + 20) )
    {
      v26 = *(_DWORD *)(v18 + 56);
      v27 = 0LL;
      v44 = 0;
      LODWORD(P) = v26;
      if ( v26 )
      {
        do
        {
          v14 = *(unsigned int *)(v18 + 4 * v27 + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v28 = *(unsigned int *)(v18 + 16);
            if ( (unsigned int)v14 < (unsigned int)v28 )
            {
              v29 = (unsigned int)v14;
              v30 = *(_DWORD *)(v14 + v18) - 64;
              if ( v30 )
              {
                v14 = (unsigned int)(v30 - 1);
                if ( (_DWORD)v14 )
                {
                  if ( (_DWORD)v14 == 1 )
                  {
                    v14 = v29 + 40;
                    if ( v29 + 40 <= v28 )
                    {
                      if ( *(_DWORD *)(v29 + v18 + 12) )
                        v25 = (char *)(v29 + v18 + 32);
                      v19 = *(_BYTE **)(v29 + v18 + 24);
LABEL_42:
                      v31 = *(_BYTE *)(v29 + v18 + 8);
                      v20 = *(_BYTE *)(v29 + v18 + 9);
                      goto LABEL_51;
                    }
                  }
                }
                else
                {
                  v14 = v29 + 56;
                  if ( v29 + 56 <= v28 )
                  {
                    v43 = 1;
                    if ( *(_BYTE *)(v29 + v18 + 10) )
                      v25 = (char *)(v29 + v18 + 24);
                    v19 = *(_BYTE **)(v29 + v18 + 16);
                    v20 = *(_BYTE *)(v29 + v18 + 9);
                    v42 = *(_BYTE *)(v29 + v18 + 8);
                  }
                }
              }
              else
              {
                v14 = v29 + 40;
                if ( v29 + 40 <= v28 )
                {
                  if ( *(_BYTE *)(v29 + v18 + 10) )
                    v25 = (char *)(v29 + v18 + 24);
                  v19 = *(_BYTE **)(v29 + v18 + 16);
                  goto LABEL_42;
                }
              }
              if ( v43 )
                break;
            }
          }
          v27 = v44 + 1;
          v44 = v27;
        }
        while ( (unsigned int)v27 < (unsigned int)P );
        v31 = v42;
LABEL_51:
        if ( v25 )
        {
          v32 = *v25;
          v24 = 0;
          goto LABEL_57;
        }
      }
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v9;
}
