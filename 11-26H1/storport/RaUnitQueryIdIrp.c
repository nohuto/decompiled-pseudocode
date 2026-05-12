/*
 * XREFs of RaUnitQueryIdIrp @ 0x14018A458
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidUnitGetCompatibleIds @ 0x1400A7264 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetDeviceId @ 0x1400A7910 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetHardwareIds @ 0x1400A7A78 (RaidUnitGetHardwareIds.c)
 *     RaidUnitGetInstanceId @ 0x1400A80B4 (RaidUnitGetInstanceId.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitQueryIdIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // r12d
  unsigned int InstanceId; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r14
  char v19; // si
  char v20; // r11
  char v21; // r10
  char v22; // r15
  char *v23; // r15
  int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r13
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  char v36; // [rsp+60h] [rbp-9h]
  char v37; // [rsp+61h] [rbp-8h]
  wchar_t *v38; // [rsp+68h] [rbp-1h] BYREF
  int v39; // [rsp+70h] [rbp+7h]
  GUID v40; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v38 = 0LL;
  v6 = *(_DWORD *)(v4 + 8);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v9 = *(_DWORD *)(a2 + 48);
          goto LABEL_11;
        }
        InstanceId = RaidUnitGetInstanceId(a1, &v38);
      }
      else
      {
        InstanceId = RaidUnitGetCompatibleIds(a1, &v38);
      }
    }
    else
    {
      InstanceId = RaidUnitGetHardwareIds(a1, &v38);
    }
  }
  else
  {
    InstanceId = RaidUnitGetDeviceId(a1, &v38);
  }
  v9 = InstanceId;
LABEL_11:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v38;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v11 )
    goto LABEL_77;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_77;
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v40, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_77;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_77;
    v15 = &EventPnpRequestComplete;
LABEL_76:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v40, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_77;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_77;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0LL;
  v36 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v16 + 72);
    v17 = *(_BYTE **)(v16 + 32);
    v18 = *(_BYTE *)(v16 + 11);
    v29 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_77;
LABEL_51:
    LOBYTE(v12) = v30 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_77;
    v31 = *(_BYTE *)(v16 + 3);
    if ( v31 == 1 || !v17 || !v18 )
      goto LABEL_70;
    v32 = *v17 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_68;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_68;
      v33 = v17 + 13;
      v19 = v17[2] & 0xF;
      v34 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v34 = (unsigned __int8)v17[7] + 8;
      v12 = (unsigned __int64)&v17[v34];
      if ( (unsigned __int64)v33 <= v12 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v12 )
        v21 = 0;
      else
        v21 = *v33;
    }
    LOBYTE(v16) = 1;
LABEL_68:
    if ( (_BYTE)v16 )
      v22 = 1;
LABEL_70:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v40, a2, *(_DWORD *)(a2 + 48), v31, v29, v19, v20, v21, a2);
    }
    goto LABEL_77;
  }
  v23 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v16 + 20) )
  {
    v24 = *(_DWORD *)(v16 + 56);
    v25 = 0LL;
    v39 = 0;
    LODWORD(v38) = v24;
    if ( v24 )
    {
      do
      {
        v12 = *(unsigned int *)(v16 + 4 * v25 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v26 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v12 < (unsigned int)v26 )
          {
            v27 = (unsigned int)v12;
            v28 = *(_DWORD *)(v12 + v16) - 64;
            if ( v28 )
            {
              v12 = (unsigned int)(v28 - 1);
              if ( (_DWORD)v12 )
              {
                if ( (_DWORD)v12 == 1 )
                {
                  v12 = v27 + 40;
                  if ( v27 + 40 <= v26 )
                  {
                    if ( *(_DWORD *)(v27 + v16 + 12) )
                      v23 = (char *)(v27 + v16 + 32);
                    v17 = *(_BYTE **)(v27 + v16 + 24);
LABEL_36:
                    v29 = *(_BYTE *)(v27 + v16 + 8);
                    v18 = *(_BYTE *)(v27 + v16 + 9);
                    goto LABEL_45;
                  }
                }
              }
              else
              {
                v12 = v27 + 56;
                if ( v27 + 56 <= v26 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v27 + v16 + 10) )
                    v23 = (char *)(v27 + v16 + 24);
                  v17 = *(_BYTE **)(v27 + v16 + 16);
                  v18 = *(_BYTE *)(v27 + v16 + 9);
                  v36 = *(_BYTE *)(v27 + v16 + 8);
                }
              }
            }
            else
            {
              v12 = v27 + 40;
              if ( v27 + 40 <= v26 )
              {
                if ( *(_BYTE *)(v27 + v16 + 10) )
                  v23 = (char *)(v27 + v16 + 24);
                v17 = *(_BYTE **)(v27 + v16 + 16);
                goto LABEL_36;
              }
            }
            if ( v37 )
              break;
          }
        }
        v25 = (unsigned int)(v39 + 1);
        v39 = v25;
      }
      while ( (unsigned int)v25 < (unsigned int)v38 );
      v29 = v36;
LABEL_45:
      if ( v23 )
      {
        v30 = *v23;
        v22 = 0;
        goto LABEL_51;
      }
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
