/*
 * XREFs of NvmeAdapterSetPowerIrp @ 0x1401265F4
 * Callers:
 *     NvmeAdapterPowerIrp @ 0x1400DAD68 (NvmeAdapterPowerIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterPowerDownDevice @ 0x140124260 (NvmeAdapterPowerDownDevice.c)
 *     NvmeAdapterPowerUpDevice @ 0x140124C90 (NvmeAdapterPowerUpDevice.c)
 *     NvmeAdapterSetSystemPowerIrp @ 0x140126B94 (NvmeAdapterSetSystemPowerIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeAdapterSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  bool v7; // zf
  int v8; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // bp
  char v16; // si
  char v17; // r11
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  __int64 v31; // rdx
  char v34; // [rsp+60h] [rbp-58h]
  char v35; // [rsp+61h] [rbp-57h]
  unsigned int v36; // [rsp+64h] [rbp-54h]
  GUID v37; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 16);
  v6 = *(_DWORD *)(v2 + 24);
  if ( !v5 )
  {
    if ( v6 > 6 )
    {
      *(_OWORD *)(v2 - 72) = *(_OWORD *)v2;
      *(_OWORD *)(v2 - 56) = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(v2 - 40) = *(_OWORD *)(v2 + 32);
      *(_QWORD *)(v2 - 24) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 - 69) = 0;
      return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    }
    return NvmeAdapterSetSystemPowerIrp(a1, a2);
  }
  if ( v5 == 1 )
  {
    v31 = *(_QWORD *)(a1 + 160);
    if ( *(_DWORD *)(v31 + 68) == 1 )
    {
      if ( v6 > 1 )
        return NvmeAdapterPowerDownDevice(a1, (_QWORD *)a2);
    }
    else if ( *(int *)(v31 + 68) > 1 && v6 == 1 )
    {
      return NvmeAdapterPowerUpDevice(a1, (IRP *)a2);
    }
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v2 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
  }
  v7 = StorEtwLoggingEnabled == 0;
  v8 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v7 )
    goto LABEL_69;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
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
              v4 = *v11;
            McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v37, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_69;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v12 = &EventPnpRequestComplete;
LABEL_68:
          McTemplateK0pd_EtwWriteTransfer(v9, v12, &v37, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_69;
        }
      }
      goto LABEL_69;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_69;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = 0LL;
    v34 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v13 + 2) == 40 )
    {
      v20 = 0LL;
      v35 = 0;
      if ( *(_DWORD *)(v13 + 20) )
        goto LABEL_69;
      v21 = 0;
      v36 = *(_DWORD *)(v13 + 56);
      if ( !v36 )
        goto LABEL_69;
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
LABEL_28:
                    v25 = *(_BYTE *)(v23 + v13 + 8);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    goto LABEL_37;
                  }
                }
              }
              else
              {
                v9 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v35 = 1;
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  v15 = *(_BYTE *)(v23 + v13 + 9);
                  v34 = *(_BYTE *)(v23 + v13 + 8);
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
                goto LABEL_28;
              }
            }
            if ( v35 )
              break;
          }
        }
        ++v21;
      }
      while ( v21 < v36 );
      v25 = v34;
LABEL_37:
      if ( !v20 )
        goto LABEL_69;
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
        goto LABEL_69;
    }
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_69;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v14 || !v15 )
    {
LABEL_62:
      if ( byte_140173441 < 0 )
      {
        if ( !v19 )
        {
          v18 = 0;
          v17 = 0;
          v16 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v37, a2, *(_DWORD *)(a2 + 48), v27, v25, v16, v17, v18, a2);
      }
      goto LABEL_69;
    }
    v28 = *v14 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_60;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v9 = (unsigned __int64)&v14[v15];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v14 + 8) > v9 )
        goto LABEL_60;
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
    LOBYTE(v13) = 1;
LABEL_60:
    if ( (_BYTE)v13 )
      v19 = 1;
    goto LABEL_62;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
