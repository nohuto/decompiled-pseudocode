/*
 * XREFs of RaUnitPowerCapIoctl @ 0x14009D9A8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x140078484 (RaidUnitIsRegisteredForIdleDetection.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitPowerCapIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdx
  int v5; // esi
  __int64 v6; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // bp
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // al
  char v28; // r8
  char *v29; // r10
  unsigned int v30; // eax
  int v31; // [rsp+20h] [rbp-98h]
  char v32; // [rsp+60h] [rbp-58h]
  char v33; // [rsp+61h] [rbp-57h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  GUID v35; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = -1073741808;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
  {
    if ( v4 && *v4 == 1 && v4[1] >= 0x18u && v4[2] <= 1u )
    {
      if ( (!RaidUnitIsRegisteredForIdleDetection(a1) || (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 110LL) & 0x40) != 0)
        && *(_QWORD *)(*(_QWORD *)(v6 + 24) + 5024LL) )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) += 72LL;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 24) + 8LL), (PIRP)a2);
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741820;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v8 )
    goto LABEL_78;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 != 14 )
  {
    if ( *(_BYTE *)v10 != 15 )
    {
      if ( *(_BYTE *)v10 == 27 )
      {
        if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v11 = *(int **)(a2 + 56);
            if ( v11 )
              v3 = *v11;
            McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v35, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_78;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v12 = &EventPnpRequestComplete;
          v31 = *(_DWORD *)(a2 + 48);
LABEL_77:
          McTemplateK0pd_EtwWriteTransfer(v9, v12, &v35, a2, v31);
          goto LABEL_78;
        }
      }
      goto LABEL_78;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_78;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = 0LL;
    v32 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v13 + 2) == 40 )
    {
      v20 = 0LL;
      v33 = 0;
      if ( *(_DWORD *)(v13 + 20) )
        goto LABEL_78;
      v21 = 0;
      v34 = *(_DWORD *)(v13 + 56);
      if ( !v34 )
        goto LABEL_78;
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
                  v33 = 1;
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  v15 = *(_BYTE *)(v23 + v13 + 9);
                  v32 = *(_BYTE *)(v23 + v13 + 8);
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
            if ( v33 )
              break;
          }
        }
        ++v21;
      }
      while ( v21 < v34 );
      v25 = v32;
LABEL_46:
      if ( !v20 )
        goto LABEL_78;
      v26 = *v20;
      v19 = 0;
    }
    else
    {
      v26 = *(_BYTE *)(v13 + 72);
      v14 = *(_BYTE **)(v13 + 32);
      v15 = *(_BYTE *)(v13 + 11);
      v25 = *(_BYTE *)(v13 + 4);
      if ( *(_BYTE *)(v13 + 2) )
        goto LABEL_78;
    }
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_78;
    if ( *(_BYTE *)(v13 + 3) == 1 || !v14 || !v15 )
    {
LABEL_71:
      if ( byte_140173441 < 0 )
      {
        if ( !v19 )
        {
          v18 = 0;
          v17 = 0;
          v16 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v9,
          v13,
          &v35,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v13 + 3),
          v25,
          v16,
          v17,
          v18,
          a2);
      }
      goto LABEL_78;
    }
    v27 = *v14 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v9 = (unsigned __int64)&v14[v15];
      v28 = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_69;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v9 = (unsigned __int64)&v14[v15];
      v28 = 0;
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
    v28 = 1;
LABEL_69:
    if ( v28 )
      v19 = 1;
    goto LABEL_71;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v9 = *(unsigned int *)(a2 + 48);
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    v31 = *(_DWORD *)(a2 + 48);
    goto LABEL_77;
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
