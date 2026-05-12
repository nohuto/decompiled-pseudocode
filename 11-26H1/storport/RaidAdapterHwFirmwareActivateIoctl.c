/*
 * XREFs of RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzssshhqq_EtwWriteTransfer @ 0x14005D718 (McTemplateK0qjzssshhqq_EtwWriteTransfer.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x14005FEC8 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x14009110C (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     StorLogIoError @ 0x1400976C8 (StorLogIoError.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareActivateIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // r14
  int v6; // r12d
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r8
  unsigned __int16 *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r14
  char v22; // r11
  char v23; // si
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
  __int64 v38; // [rsp+20h] [rbp-B9h]
  __int64 v39; // [rsp+28h] [rbp-B1h]
  __int64 v40; // [rsp+30h] [rbp-A9h]
  __int64 v41; // [rsp+38h] [rbp-A1h]
  __int64 v42; // [rsp+40h] [rbp-99h]
  __int64 v43; // [rsp+48h] [rbp-91h]
  char v44; // [rsp+70h] [rbp-69h]
  char v45; // [rsp+71h] [rbp-68h]
  unsigned int v46; // [rsp+74h] [rbp-65h] BYREF
  GUID v47; // [rsp+78h] [rbp-61h] BYREF
  __int128 v48; // [rsp+88h] [rbp-51h] BYREF
  PVOID P; // [rsp+98h] [rbp-41h] BYREF
  char v50; // [rsp+A0h] [rbp-39h]
  __int128 v51; // [rsp+A8h] [rbp-31h] BYREF
  int v52; // [rsp+B8h] [rbp-21h]
  char v53; // [rsp+BCh] [rbp-1Dh]
  __int128 v54; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-9h]
  __int64 v56; // [rsp+E0h] [rbp+7h]
  char v57; // [rsp+E8h] [rbp+Fh]

  v2 = 0;
  v5 = 0LL;
  P = 0LL;
  v46 = 0;
  if ( *(_QWORD *)(a1 + 608) && *(_QWORD *)(a1 + 616) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x10u )
    {
      v6 = -1073741820;
      goto LABEL_11;
    }
    RaBuildHwFirmwareActivateBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v46);
    v5 = P;
    if ( !P )
    {
      v6 = -1073741801;
      goto LABEL_11;
    }
    v6 = RaidAdapterSendSrbIoControlSynchronously(
           a1,
           (IRP *)a2,
           (__int64)P,
           v46,
           (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
           1,
           128,
           *(_DWORD *)(a1 + 6240));
  }
  else
  {
    v6 = -1073741823;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72536152u);
LABEL_11:
  if ( StorEtwLoggingEnabled )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v47 = 0LL;
    v52 = 0;
    v54 = 0LL;
    v53 = 0;
    v55 = 0LL;
    v56 = 0LL;
    v8 = *(_OWORD *)(a1 + 5128);
    v57 = 0;
    P = 0LL;
    v48 = v8;
    v50 = 0;
    v51 = 0LL;
    RaidDriverGetName(v7, (__int64)&v47);
    v10 = *(unsigned __int16 **)(a1 + 6064);
    if ( v10 )
    {
      v54 = *(_OWORD *)(v10 + 12);
      v55 = *(_OWORD *)(v10 + 20);
      v56 = *((_QWORD *)v10 + 7);
      P = (PVOID)*((_QWORD *)v10 + 8);
      v51 = *(_OWORD *)(v10 + 2);
      v52 = *((_DWORD *)v10 + 5);
    }
    if ( (byte_140173447 & 0x20) != 0 )
    {
      if ( v10 )
      {
        v11 = *v10;
        v12 = v10[1];
      }
      else
      {
        v12 = 0LL;
        v11 = 0LL;
      }
      McTemplateK0qjzssshhqq_EtwWriteTransfer(
        v12,
        v11,
        v9,
        *(_DWORD *)(a1 + 56),
        (__int64)&v48,
        *(const wchar_t **)v47.Data4,
        (const char *)&v51,
        (const char *)&v54,
        (const char *)&P,
        v11,
        v12,
        *(_DWORD *)(a1 + 6240),
        v6);
    }
  }
  if ( v6 >= 0 )
  {
    StorLogIoError(a1, 0LL, 1074004128LL, 5LL);
    if ( (*(_BYTE *)(a1 + 110) & 2) != 0 )
    {
      if ( RaAdapterUpdateAssociatedUnitsIdentity(a1, (struct _IO_WORKITEM *)a2) )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        return 259LL;
      }
    }
  }
  v14 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v14 )
    goto LABEL_89;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 != 14 )
  {
    if ( *(_BYTE *)v16 != 15 )
    {
      if ( *(_BYTE *)v16 == 27 )
      {
        if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v17 = *(int **)(a2 + 56);
            if ( v17 )
              v2 = *v17;
            LODWORD(v39) = *(_DWORD *)(a2 + 48);
            LODWORD(v38) = v2;
            McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v47, a2, v38, v39);
          }
          goto LABEL_89;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v18 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_88:
          LODWORD(v38) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v15, v18, &v47, a2, v38);
          goto LABEL_89;
        }
      }
      goto LABEL_89;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_89;
    v19 = *(_QWORD *)(v16 + 8);
    v20 = 0LL;
    v44 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( *(_BYTE *)(v19 + 2) == 40 )
    {
      v26 = 0LL;
      v45 = 0;
      if ( *(_DWORD *)(v19 + 20) )
        goto LABEL_89;
      v27 = *(_DWORD *)(v19 + 56);
      v28 = 0LL;
      v46 = 0;
      LODWORD(P) = v27;
      if ( !v27 )
        goto LABEL_89;
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
LABEL_48:
                    v32 = *(_BYTE *)(v30 + v19 + 8);
                    v21 = *(_BYTE *)(v30 + v19 + 9);
                    goto LABEL_57;
                  }
                }
              }
              else
              {
                v15 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v45 = 1;
                  if ( *(_BYTE *)(v30 + v19 + 10) )
                    v26 = (char *)(v30 + v19 + 24);
                  v20 = *(_BYTE **)(v30 + v19 + 16);
                  v21 = *(_BYTE *)(v30 + v19 + 9);
                  v44 = *(_BYTE *)(v30 + v19 + 8);
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
                goto LABEL_48;
              }
            }
            if ( v45 )
              break;
          }
        }
        v28 = v46 + 1;
        v46 = v28;
      }
      while ( (unsigned int)v28 < (unsigned int)P );
      v32 = v44;
LABEL_57:
      if ( !v26 )
        goto LABEL_89;
      v33 = *v26;
      v25 = 0;
    }
    else
    {
      v33 = *(_BYTE *)(v19 + 72);
      v20 = *(_BYTE **)(v19 + 32);
      v21 = *(_BYTE *)(v19 + 11);
      v32 = *(_BYTE *)(v19 + 4);
      if ( *(_BYTE *)(v19 + 2) )
        goto LABEL_89;
    }
    LOBYTE(v15) = v33 - 8;
    if ( (v15 & 0x5D) != 0 )
      goto LABEL_89;
    v34 = *(_BYTE *)(v19 + 3);
    if ( v34 == 1 || !v20 || !v21 )
    {
LABEL_82:
      if ( byte_140173441 < 0 )
      {
        if ( !v25 )
        {
          v24 = 0;
          v23 = 0;
          v22 = 0;
        }
        LOBYTE(v43) = v24;
        LOBYTE(v42) = v23;
        LOBYTE(v41) = v22;
        LOBYTE(v40) = v32;
        LOBYTE(v39) = v34;
        LODWORD(v38) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v47, a2, v38, v39, v40, v41, v42, v43, a2);
      }
      goto LABEL_89;
    }
    v35 = *v20 & 0x7F;
    if ( v35 == 114 || v35 == 115 )
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_80;
      v23 = v20[2];
      v22 = v20[1] & 0xF;
      v24 = v20[3];
    }
    else
    {
      v15 = (unsigned __int64)&v20[v21];
      LOBYTE(v19) = 0;
      if ( (unsigned __int64)(v20 + 8) > v15 )
        goto LABEL_80;
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
LABEL_80:
    if ( (_BYTE)v19 )
      v25 = 1;
    goto LABEL_82;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_88;
  }
LABEL_89:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
