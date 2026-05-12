/*
 * XREFs of RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1401B4AA4
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1401B4DFC (RaGetUnitStorageDeviceIdProperty.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceIdPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int UnitStorageDeviceIdProperty; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  int v11; // eax
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r15
  int v20; // eax
  char *v21; // r15
  unsigned int v22; // r13d
  const EVENT_DESCRIPTOR *v23; // rdx
  int *v24; // rax
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // r13d
  unsigned __int64 v29; // r12
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r12
  char v33; // cl
  char v34; // r8
  unsigned __int64 v35; // r12
  __int64 v36; // r8
  int v37; // ecx
  char v38; // [rsp+60h] [rbp-9h]
  char v39; // [rsp+61h] [rbp-8h]
  char v40; // [rsp+61h] [rbp-8h]
  unsigned int v41; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-1h]
  GUID v43; // [rsp+70h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v41 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = StorEtwLoggingEnabled == 0;
    v42 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v8 )
      goto LABEL_9;
    v43 = 0LL;
    IoGetActivityIdIrp(a2, &v43);
    v10 = *(unsigned __int8 **)(a2 + 184);
    if ( *v10 != 14 )
    {
      v11 = *v10 - 15;
      if ( *v10 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_9;
        v13 = *((_QWORD *)v10 + 1);
        v14 = 0LL;
        v38 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = *(unsigned __int8 *)(v13 + 2);
        if ( (_BYTE)v20 == 40 )
        {
          v21 = 0LL;
          v39 = 0;
          if ( *(_DWORD *)(v13 + 20) )
            goto LABEL_9;
          v22 = 0;
          v41 = *(_DWORD *)(v13 + 56);
          if ( !v41 )
            goto LABEL_9;
          while ( 1 )
          {
            v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
            if ( (unsigned int)v9 >= 0x80 )
            {
              v29 = *(unsigned int *)(v13 + 16);
              if ( (unsigned int)v9 < (unsigned int)v29 )
              {
                v30 = (unsigned int)v9;
                v31 = *(_DWORD *)(v9 + v13) - 64;
                if ( v31 )
                {
                  v9 = (unsigned int)(v31 - 1);
                  if ( (_DWORD)v9 )
                  {
                    if ( (_DWORD)v9 == 1 )
                    {
                      v9 = v30 + 40;
                      if ( v30 + 40 <= v29 )
                      {
                        if ( *(_DWORD *)(v30 + v13 + 12) )
                          v21 = (char *)(v30 + v13 + 32);
                        v14 = *(_BYTE **)(v30 + v13 + 24);
LABEL_77:
                        v32 = *(_BYTE *)(v30 + v13 + 8);
                        v15 = *(_BYTE *)(v30 + v13 + 9);
                        goto LABEL_80;
                      }
                    }
                  }
                  else
                  {
                    v9 = v30 + 56;
                    if ( v30 + 56 <= v29 )
                    {
                      v39 = 1;
                      if ( *(_BYTE *)(v30 + v13 + 10) )
                        v21 = (char *)(v30 + v13 + 24);
                      v14 = *(_BYTE **)(v30 + v13 + 16);
                      v15 = *(_BYTE *)(v30 + v13 + 9);
                      v38 = *(_BYTE *)(v30 + v13 + 8);
                    }
                  }
                }
                else
                {
                  v9 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_BYTE *)(v30 + v13 + 10) )
                      v21 = (char *)(v30 + v13 + 24);
                    v14 = *(_BYTE **)(v30 + v13 + 16);
                    goto LABEL_77;
                  }
                }
                if ( v39 )
                  goto LABEL_72;
              }
            }
            if ( ++v22 >= v41 )
            {
LABEL_72:
              v32 = v38;
              goto LABEL_80;
            }
          }
        }
LABEL_82:
        v32 = *(_BYTE *)(v13 + 4);
        v15 = *(_BYTE *)(v13 + 11);
        v14 = *(_BYTE **)(v13 + 32);
        v33 = *(_BYTE *)(v13 + 72);
        if ( v20 )
          goto LABEL_9;
LABEL_83:
        LOBYTE(v9) = v33 - 8;
        if ( (v9 & 0x5D) != 0 )
          goto LABEL_9;
        v34 = *(_BYTE *)(v13 + 3);
        if ( v34 == 1 || !v14 || !v15 )
          goto LABEL_43;
        v25 = *v14 & 0x7F;
        if ( v25 == 114 || v25 == 115 )
        {
          v9 = (unsigned __int64)&v14[v15];
          LOBYTE(v13) = 0;
          if ( (unsigned __int64)(v14 + 8) > v9 )
          {
LABEL_41:
            if ( (_BYTE)v13 )
              v19 = 1;
LABEL_43:
            if ( byte_140173441 < 0 )
            {
              if ( !v19 )
              {
                v18 = 0;
                v16 = 0;
                v17 = 0;
              }
              McTemplateK0pduuuuup_EtwWriteTransfer(
                v9,
                v13,
                &v43,
                a2,
                *(_DWORD *)(a2 + 48),
                v34,
                v32,
                v16,
                v17,
                v18,
                a2);
            }
            goto LABEL_9;
          }
          v18 = v14[3];
          v16 = v14[1] & 0xF;
          v17 = v14[2];
        }
        else
        {
          v9 = (unsigned __int64)&v14[v15];
          LOBYTE(v13) = 0;
          if ( (unsigned __int64)(v14 + 8) > v9 )
            goto LABEL_41;
          v26 = v14 + 13;
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v9 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)v26 <= v9 )
            v17 = v14[12];
          if ( (unsigned __int64)(v14 + 14) > v9 )
            v18 = 0;
          else
            v18 = *v26;
        }
        LOBYTE(v13) = 1;
        goto LABEL_41;
      }
      goto LABEL_21;
    }
LABEL_18:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_9;
    v23 = &EventNonReadWriteRequestComplete;
    goto LABEL_20;
  }
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      UnitStorageDeviceIdProperty = 0;
      v42 = 0;
    }
    else
    {
      UnitStorageDeviceIdProperty = -1073741637;
      v42 = -1073741637;
    }
  }
  else
  {
    UnitStorageDeviceIdProperty = RaGetUnitStorageDeviceIdProperty(a1, v4, &v41);
    v42 = UnitStorageDeviceIdProperty;
    if ( UnitStorageDeviceIdProperty < 0 )
      *(_QWORD *)(a2 + 56) = 0LL;
    else
      *(_QWORD *)(a2 + 56) = v41;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = UnitStorageDeviceIdProperty;
  if ( v8 )
    goto LABEL_9;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v10 = *(unsigned __int8 **)(a2 + 184);
  if ( *v10 == 14 )
    goto LABEL_18;
  v11 = *v10 - 15;
  if ( *v10 != 15 )
  {
LABEL_21:
    if ( v11 != 12 )
      goto LABEL_9;
    if ( v10[1] == 7 && !*((_DWORD *)v10 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v5 = *v24;
        McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)v10, &v43, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_9;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_9;
    v23 = &EventPnpRequestComplete;
LABEL_20:
    McTemplateK0pd_EtwWriteTransfer(v9, v23, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_9;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_9;
  v13 = *((_QWORD *)v10 + 1);
  v14 = 0LL;
  v38 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = *(unsigned __int8 *)(v13 + 2);
  if ( (_BYTE)v20 != 40 )
    goto LABEL_82;
  v21 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_9;
  v28 = 0;
  v41 = *(_DWORD *)(v13 + 56);
  if ( !v41 )
    goto LABEL_9;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v28 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v35 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v35 )
        break;
    }
LABEL_100:
    if ( ++v28 >= v41 )
      goto LABEL_72;
  }
  v36 = (unsigned int)v9;
  v37 = *(_DWORD *)(v13 + v9) - 64;
  if ( v37 )
  {
    v9 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v13 + v36 + 12) )
            v21 = (char *)(v36 + v13 + 32);
          v14 = *(_BYTE **)(v13 + v36 + 24);
          goto LABEL_79;
        }
      }
    }
    else
    {
      v9 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v13 + v36 + 10) )
          v21 = (char *)(v36 + v13 + 24);
        v14 = *(_BYTE **)(v13 + v36 + 16);
        v15 = *(_BYTE *)(v13 + v36 + 9);
        v38 = *(_BYTE *)(v13 + v36 + 8);
      }
    }
    goto LABEL_99;
  }
  v9 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_99:
    if ( v40 )
      goto LABEL_72;
    goto LABEL_100;
  }
  if ( *(_BYTE *)(v13 + v36 + 10) )
    v21 = (char *)(v36 + v13 + 24);
  v14 = *(_BYTE **)(v13 + v36 + 16);
LABEL_79:
  v32 = *(_BYTE *)(v13 + v36 + 8);
  v15 = *(_BYTE *)(v13 + v36 + 9);
LABEL_80:
  if ( v21 )
  {
    v33 = *v21;
    v19 = 0;
    goto LABEL_83;
  }
LABEL_9:
  IofCompleteRequest((PIRP)a2, 0);
  return v42;
}
