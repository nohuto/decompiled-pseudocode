/*
 * XREFs of NvmeNamespaceSetLedState @ 0x1401A9908
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeNamespaceSetLedState(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdx
  __int64 v6; // rax
  unsigned int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  _BYTE *v13; // r9
  unsigned __int8 v14; // r14
  char v15; // r11
  char v16; // si
  char v17; // r10
  char v18; // r15
  int v19; // eax
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  const EVENT_DESCRIPTOR *v26; // rdx
  char v27; // cl
  int *v29; // rax
  unsigned int v30; // r13d
  unsigned __int64 v31; // r12
  int v32; // ecx
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  int v37; // [rsp+20h] [rbp-60h]
  char v38; // [rsp+60h] [rbp-20h]
  char v39; // [rsp+61h] [rbp-1Fh]
  char v40; // [rsp+61h] [rbp-1Fh]
  unsigned int v41; // [rsp+64h] [rbp-1Ch]
  unsigned int v42; // [rsp+64h] [rbp-1Ch]
  GUID v43; // [rsp+68h] [rbp-18h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v6 + 16) >= 0x10u && *v4 == 16 && v4[1] >= 0x10u )
  {
    v7 = v4[2];
    if ( (v7 & 0x3FF) != 0 )
    {
      if ( RtlNumberOfSetBitsUlongPtr(v7) == 1 )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) += 72LL;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
      }
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v8 )
        goto LABEL_98;
      v43 = 0LL;
      IoGetActivityIdIrp(a2, &v43);
      v10 = *(unsigned __int8 **)(a2 + 184);
      if ( *v10 != 14 )
      {
        v11 = *v10 - 15;
        if ( *v10 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_98;
          v12 = *((_QWORD *)v10 + 1);
          v13 = 0LL;
          v38 = 0;
          v14 = 0;
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = *(unsigned __int8 *)(v12 + 2);
          if ( (_BYTE)v19 == 40 )
          {
            v20 = 0LL;
            v39 = 0;
            if ( !*(_DWORD *)(v12 + 20) )
            {
              v21 = 0;
              v41 = *(_DWORD *)(v12 + 56);
              if ( v41 )
              {
                while ( 1 )
                {
                  v9 = *(unsigned int *)(v12 + 4LL * v21 + 120);
                  if ( (unsigned int)v9 >= 0x80 )
                  {
                    v22 = *(unsigned int *)(v12 + 16);
                    if ( (unsigned int)v9 < (unsigned int)v22 )
                    {
                      v23 = (unsigned int)v9;
                      v24 = *(_DWORD *)(v9 + v12) - 64;
                      if ( v24 )
                      {
                        v9 = (unsigned int)(v24 - 1);
                        if ( (_DWORD)v9 )
                        {
                          if ( (_DWORD)v9 == 1 )
                          {
                            v9 = v23 + 40;
                            if ( v23 + 40 <= v22 )
                              goto LABEL_19;
                          }
                        }
                        else
                        {
                          v9 = v23 + 56;
                          if ( v23 + 56 <= v22 )
                          {
                            v39 = 1;
                            if ( *(_BYTE *)(v23 + v12 + 10) )
                              v20 = (char *)(v23 + v12 + 24);
                            v13 = *(_BYTE **)(v23 + v12 + 16);
                            v14 = *(_BYTE *)(v23 + v12 + 9);
                            v38 = *(_BYTE *)(v23 + v12 + 8);
                          }
                        }
                      }
                      else
                      {
                        v9 = v23 + 40;
                        if ( v23 + 40 <= v22 )
                          goto LABEL_67;
                      }
                      if ( v39 )
                        goto LABEL_32;
                    }
                  }
                  if ( ++v21 >= v41 )
                    goto LABEL_32;
                }
              }
            }
            goto LABEL_98;
          }
          goto LABEL_70;
        }
        goto LABEL_41;
      }
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_98;
      v37 = *(_DWORD *)(a2 + 48);
LABEL_96:
      v26 = &EventNonReadWriteRequestComplete;
      goto LABEL_97;
    }
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v8 )
    goto LABEL_98;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v10 = *(unsigned __int8 **)(a2 + 184);
  if ( *v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_98;
    v9 = *(unsigned int *)(a2 + 48);
    v37 = *(_DWORD *)(a2 + 48);
    goto LABEL_96;
  }
  v11 = *v10 - 15;
  if ( *v10 != 15 )
  {
LABEL_41:
    if ( v11 != 12 )
      goto LABEL_98;
    if ( v10[1] == 7 && !*((_DWORD *)v10 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v3 = *v29;
        McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)v10, &v43, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_98;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_98;
    v26 = &EventPnpRequestComplete;
    v37 = *(_DWORD *)(a2 + 48);
LABEL_97:
    McTemplateK0pd_EtwWriteTransfer(v9, v26, &v43, a2, v37);
    goto LABEL_98;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_98;
  v12 = *((_QWORD *)v10 + 1);
  v13 = 0LL;
  v38 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = *(unsigned __int8 *)(v12 + 2);
  if ( (_BYTE)v19 != 40 )
  {
LABEL_70:
    v25 = *(_BYTE *)(v12 + 4);
    v14 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE **)(v12 + 32);
    v27 = *(_BYTE *)(v12 + 72);
    if ( v19 )
      goto LABEL_98;
    goto LABEL_71;
  }
  v20 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_98;
  v30 = 0;
  v42 = *(_DWORD *)(v12 + 56);
  if ( !v42 )
    goto LABEL_98;
  do
  {
    v9 = *(unsigned int *)(v12 + 4LL * v30 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v31 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v9 < (unsigned int)v31 )
      {
        v23 = (unsigned int)v9;
        v32 = *(_DWORD *)(v9 + v12) - 64;
        if ( v32 )
        {
          v9 = (unsigned int)(v32 - 1);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 == 1 )
            {
              v9 = v23 + 40;
              if ( v23 + 40 <= v31 )
              {
LABEL_19:
                if ( *(_DWORD *)(v23 + v12 + 12) )
                  v20 = (char *)(v23 + v12 + 32);
                v13 = *(_BYTE **)(v23 + v12 + 24);
LABEL_22:
                v25 = *(_BYTE *)(v23 + v12 + 8);
                v14 = *(_BYTE *)(v23 + v12 + 9);
                goto LABEL_33;
              }
            }
          }
          else
          {
            v9 = v23 + 56;
            if ( v23 + 56 <= v31 )
            {
              v40 = 1;
              if ( *(_BYTE *)(v23 + v12 + 10) )
                v20 = (char *)(v23 + v12 + 24);
              v13 = *(_BYTE **)(v23 + v12 + 16);
              v14 = *(_BYTE *)(v23 + v12 + 9);
              v38 = *(_BYTE *)(v23 + v12 + 8);
            }
          }
        }
        else
        {
          v9 = v23 + 40;
          if ( v23 + 40 <= v31 )
          {
LABEL_67:
            if ( *(_BYTE *)(v23 + v12 + 10) )
              v20 = (char *)(v23 + v12 + 24);
            v13 = *(_BYTE **)(v23 + v12 + 16);
            goto LABEL_22;
          }
        }
        if ( v40 )
          break;
      }
    }
    ++v30;
  }
  while ( v30 < v42 );
LABEL_32:
  v25 = v38;
LABEL_33:
  if ( !v20 )
    goto LABEL_98;
  v27 = *v20;
  v18 = 0;
LABEL_71:
  LOBYTE(v9) = v27 - 8;
  if ( (v9 & 0x5D) == 0 )
  {
    v33 = *(_BYTE *)(v12 + 3);
    if ( v33 == 1 || !v13 || !v14 )
    {
LABEL_90:
      if ( byte_140173441 < 0 )
      {
        if ( !v18 )
        {
          v17 = 0;
          v16 = 0;
          v15 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v12, &v43, a2, *(_DWORD *)(a2 + 48), v33, v25, v15, v16, v17, a2);
      }
      goto LABEL_98;
    }
    v34 = *v13 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v9 = (unsigned __int64)&v13[v14];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v13 + 8) > v9 )
        goto LABEL_88;
      v17 = v13[3];
      v15 = v13[1] & 0xF;
      v16 = v13[2];
    }
    else
    {
      v9 = (unsigned __int64)&v13[v14];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v13 + 8) > v9 )
        goto LABEL_88;
      v35 = v13 + 13;
      v15 = v13[2] & 0xF;
      v36 = v14;
      if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
        v36 = (unsigned __int8)v13[7] + 8;
      v9 = (unsigned __int64)&v13[v36];
      if ( (unsigned __int64)v35 <= v9 )
        v16 = v13[12];
      if ( (unsigned __int64)(v13 + 14) > v9 )
        v17 = 0;
      else
        v17 = *v35;
    }
    LOBYTE(v12) = 1;
LABEL_88:
    if ( (_BYTE)v12 )
      v18 = 1;
    goto LABEL_90;
  }
LABEL_98:
  IofCompleteRequest((PIRP)a2, 0);
  return -1073741811;
}
