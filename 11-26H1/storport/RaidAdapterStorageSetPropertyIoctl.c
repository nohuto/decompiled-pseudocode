/*
 * XREFs of RaidAdapterStorageSetPropertyIoctl @ 0x14006B998
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006DCFC (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageSetPropertyIoctl(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  int v5; // r8d
  int v6; // ecx
  int v7; // edx
  int v8; // ebx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  int v12; // eax
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
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  const EVENT_DESCRIPTOR *v27; // rdx
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r10
  unsigned int v32; // eax
  int *v33; // rax
  unsigned int v34; // r13d
  unsigned __int64 v35; // r12
  __int64 v36; // r8
  int v37; // ecx
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  char v41; // [rsp+61h] [rbp-8h]
  unsigned int v42; // [rsp+64h] [rbp-5h]
  unsigned __int64 v43; // [rsp+68h] [rbp-1h] BYREF
  GUID v44; // [rsp+70h] [rbp+7h] BYREF

  v4 = *(int **)(a2 + 24);
  v5 = -1073741811;
  v42 = -1073741811;
  v43 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v43 < 8 || (v6 = *v4, *v4 != 49) && v6 != 67 )
  {
    v8 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v9 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v42 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    if ( v9 )
      goto LABEL_105;
    v44 = 0LL;
    IoGetActivityIdIrp(a2, &v44);
    v11 = *(unsigned __int8 **)(a2 + 184);
    if ( *v11 != 14 )
    {
      v12 = *v11 - 15;
      if ( *v11 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_105;
        v13 = *((_QWORD *)v11 + 1);
        v14 = 0LL;
        v39 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = *(unsigned __int8 *)(v13 + 2);
        if ( (_BYTE)v20 == 40 )
        {
          v21 = 0LL;
          v41 = 0;
          if ( *(_DWORD *)(v13 + 20) )
            goto LABEL_105;
          v34 = 0;
          LODWORD(v43) = *(_DWORD *)(v13 + 56);
          if ( !(_DWORD)v43 )
            goto LABEL_105;
          while ( 1 )
          {
            v10 = *(unsigned int *)(v13 + 4LL * v34 + 120);
            if ( (unsigned int)v10 >= 0x80 )
            {
              v35 = *(unsigned int *)(v13 + 16);
              if ( (unsigned int)v10 < (unsigned int)v35 )
              {
                v36 = (unsigned int)v10;
                v37 = *(_DWORD *)(v13 + v10) - 64;
                if ( v37 )
                {
                  v10 = (unsigned int)(v37 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 1 )
                    {
                      v10 = v36 + 40;
                      if ( v36 + 40 <= v35 )
                      {
                        if ( *(_DWORD *)(v13 + v36 + 12) )
                          v21 = (char *)(v36 + v13 + 32);
                        v14 = *(_BYTE **)(v13 + v36 + 24);
LABEL_81:
                        v26 = *(_BYTE *)(v13 + v36 + 8);
                        v15 = *(_BYTE *)(v13 + v36 + 9);
                        goto LABEL_38;
                      }
                    }
                  }
                  else
                  {
                    v10 = v36 + 56;
                    if ( v36 + 56 <= v35 )
                    {
                      v41 = 1;
                      if ( *(_BYTE *)(v13 + v36 + 10) )
                        v21 = (char *)(v36 + v13 + 24);
                      v14 = *(_BYTE **)(v13 + v36 + 16);
                      v15 = *(_BYTE *)(v13 + v36 + 9);
                      v39 = *(_BYTE *)(v13 + v36 + 8);
                    }
                  }
                }
                else
                {
                  v10 = v36 + 40;
                  if ( v36 + 40 <= v35 )
                  {
                    if ( *(_BYTE *)(v13 + v36 + 10) )
                      v21 = (char *)(v36 + v13 + 24);
                    v14 = *(_BYTE **)(v13 + v36 + 16);
                    goto LABEL_81;
                  }
                }
                if ( v41 )
                  goto LABEL_37;
              }
            }
            if ( ++v34 >= (unsigned int)v43 )
            {
LABEL_37:
              v26 = v39;
              goto LABEL_38;
            }
          }
        }
LABEL_43:
        v26 = *(_BYTE *)(v13 + 4);
        v15 = *(_BYTE *)(v13 + 11);
        v14 = *(_BYTE **)(v13 + 32);
        v28 = *(_BYTE *)(v13 + 72);
        if ( v20 )
          goto LABEL_105;
LABEL_44:
        LOBYTE(v10) = v28 - 8;
        if ( (v10 & 0x5D) != 0 )
          goto LABEL_105;
        v29 = *(_BYTE *)(v13 + 3);
        if ( v29 == 1 || !v14 || !v15 )
          goto LABEL_98;
        v30 = *v14 & 0x7F;
        if ( v30 == 114 || v30 == 115 )
        {
          v10 = (unsigned __int64)&v14[v15];
          LOBYTE(v13) = 0;
          if ( (unsigned __int64)(v14 + 8) > v10 )
            goto LABEL_96;
          v18 = v14[3];
          v16 = v14[1] & 0xF;
          v17 = v14[2];
        }
        else
        {
          v10 = (unsigned __int64)&v14[v15];
          LOBYTE(v13) = 0;
          if ( (unsigned __int64)(v14 + 8) > v10 )
            goto LABEL_96;
          v31 = v14 + 13;
          v16 = v14[2] & 0xF;
          v32 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v32 = (unsigned __int8)v14[7] + 8;
          v10 = (unsigned __int64)&v14[v32];
          if ( (unsigned __int64)v31 <= v10 )
            v17 = v14[12];
          if ( (unsigned __int64)(v14 + 14) > v10 )
            v18 = 0;
          else
            v18 = *v31;
        }
        LOBYTE(v13) = 1;
LABEL_96:
        if ( (_BYTE)v13 )
          v19 = 1;
LABEL_98:
        if ( byte_140173441 < 0 )
        {
          if ( !v19 )
          {
            v18 = 0;
            v16 = 0;
            v17 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v10, v13, &v44, a2, *(_DWORD *)(a2 + 48), v29, v26, v16, v17, v18, a2);
        }
        goto LABEL_105;
      }
      goto LABEL_61;
    }
LABEL_102:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_105;
    v27 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_104;
  }
  v7 = v4[1];
  v8 = 0;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v5 = 0;
      v42 = 0;
    }
    else
    {
      v5 = -1073741808;
      *(_QWORD *)(a2 + 56) = 0LL;
      v42 = -1073741808;
    }
  }
  else if ( v6 == 49 || v6 == 67 )
  {
    v5 = RaidSetStorageAdapterProtocolSpecificProperty(a1, a2, &v43);
    *(_QWORD *)(a2 + 56) = v43;
    v42 = v5;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v9 )
    goto LABEL_105;
  v44 = 0LL;
  IoGetActivityIdIrp(a2, &v44);
  v11 = *(unsigned __int8 **)(a2 + 184);
  if ( *v11 == 14 )
    goto LABEL_102;
  v12 = *v11 - 15;
  if ( *v11 != 15 )
  {
LABEL_61:
    if ( v12 != 12 )
      goto LABEL_105;
    if ( v11[1] == 7 && !*((_DWORD *)v11 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v33 = *(int **)(a2 + 56);
        if ( v33 )
          v8 = *v33;
        McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v44, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_105;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_105;
    v27 = &EventPnpRequestComplete;
LABEL_104:
    McTemplateK0pd_EtwWriteTransfer(v10, v27, &v44, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_105;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_105;
  v13 = *((_QWORD *)v11 + 1);
  v14 = 0LL;
  v39 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = *(unsigned __int8 *)(v13 + 2);
  if ( (_BYTE)v20 != 40 )
    goto LABEL_43;
  v21 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_105;
  v22 = 0;
  LODWORD(v43) = *(_DWORD *)(v13 + 56);
  if ( !(_DWORD)v43 )
    goto LABEL_105;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v10 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    if ( ++v22 >= (unsigned int)v43 )
      goto LABEL_37;
  }
  v24 = (unsigned int)v10;
  v25 = *(_DWORD *)(v10 + v13) - 64;
  if ( v25 )
  {
    v10 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v21 = (char *)(v24 + v13 + 32);
          v14 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_27;
        }
      }
    }
    else
    {
      v10 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v21 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE **)(v24 + v13 + 16);
        v15 = *(_BYTE *)(v24 + v13 + 9);
        v39 = *(_BYTE *)(v24 + v13 + 8);
      }
    }
    goto LABEL_35;
  }
  v10 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_35:
    if ( v40 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v21 = (char *)(v24 + v13 + 24);
  v14 = *(_BYTE **)(v24 + v13 + 16);
LABEL_27:
  v26 = *(_BYTE *)(v24 + v13 + 8);
  v15 = *(_BYTE *)(v24 + v13 + 9);
LABEL_38:
  if ( v21 )
  {
    v28 = *v21;
    v19 = 0;
    goto LABEL_44;
  }
LABEL_105:
  IofCompleteRequest((PIRP)a2, 0);
  return v42;
}
