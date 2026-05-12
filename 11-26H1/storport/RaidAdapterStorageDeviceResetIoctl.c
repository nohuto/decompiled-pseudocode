/*
 * XREFs of RaidAdapterStorageDeviceResetIoctl @ 0x14006A03C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterDeviceReset @ 0x140060C14 (RaidAdapterDeviceReset.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageDeviceResetIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v4; // rdx
  unsigned int v5; // r14d
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  _BYTE *v12; // r9
  unsigned __int8 v13; // bp
  char v14; // si
  char v15; // r11
  char v16; // r10
  char v17; // r15
  char *v18; // r15
  unsigned int v19; // r13d
  unsigned __int64 v20; // r12
  __int64 v21; // r8
  int v22; // ecx
  char v23; // r12
  char v24; // cl
  char v25; // r8
  char v26; // al
  char *v27; // r10
  unsigned int v28; // eax
  char v30; // [rsp+60h] [rbp-58h]
  char v31; // [rsp+61h] [rbp-57h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  GUID v33; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x20u
    && (v4 = *(_DWORD **)(a2 + 24)) != 0LL
    && *v4 == 32
    && v4[1] >= 0x20u )
  {
    v5 = RaidAdapterDeviceReset(a1, (__int64)v4, a2);
  }
  else
  {
    v5 = -1073741811;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_73;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_73;
    v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_72;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v2 = *v9;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v33, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_73;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_73;
    v10 = &EventPnpRequestComplete;
LABEL_72:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_73;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_73;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0LL;
  v30 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v11 + 72);
    v12 = *(_BYTE **)(v11 + 32);
    v13 = *(_BYTE *)(v11 + 11);
    v23 = *(_BYTE *)(v11 + 4);
    if ( *(_BYTE *)(v11 + 2) )
      goto LABEL_73;
LABEL_47:
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) != 0 )
      goto LABEL_73;
    v25 = *(_BYTE *)(v11 + 3);
    if ( v25 == 1 || !v12 || !v13 )
      goto LABEL_66;
    v26 = *v12 & 0x7F;
    if ( v26 == 114 || v26 == 115 )
    {
      v7 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v7 )
        goto LABEL_64;
      v15 = v12[2];
      v14 = v12[1] & 0xF;
      v16 = v12[3];
    }
    else
    {
      v7 = (unsigned __int64)&v12[v13];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v12 + 8) > v7 )
        goto LABEL_64;
      v27 = v12 + 13;
      v14 = v12[2] & 0xF;
      v28 = v13;
      if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
        v28 = (unsigned __int8)v12[7] + 8;
      v7 = (unsigned __int64)&v12[v28];
      if ( (unsigned __int64)v27 <= v7 )
        v15 = v12[12];
      if ( (unsigned __int64)(v12 + 14) > v7 )
        v16 = 0;
      else
        v16 = *v27;
    }
    LOBYTE(v11) = 1;
LABEL_64:
    if ( (_BYTE)v11 )
      v17 = 1;
LABEL_66:
    if ( byte_140173441 < 0 )
    {
      if ( !v17 )
      {
        v16 = 0;
        v15 = 0;
        v14 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v33, a2, *(_DWORD *)(a2 + 48), v25, v23, v14, v15, v16, a2);
    }
    goto LABEL_73;
  }
  v18 = 0LL;
  v31 = 0;
  if ( !*(_DWORD *)(v11 + 20) )
  {
    v19 = 0;
    v32 = *(_DWORD *)(v11 + 56);
    if ( v32 )
    {
      do
      {
        v7 = *(unsigned int *)(v11 + 4LL * v19 + 120);
        if ( (unsigned int)v7 >= 0x80 )
        {
          v20 = *(unsigned int *)(v11 + 16);
          if ( (unsigned int)v7 < (unsigned int)v20 )
          {
            v21 = (unsigned int)v7;
            v22 = *(_DWORD *)(v7 + v11) - 64;
            if ( v22 )
            {
              v7 = (unsigned int)(v22 - 1);
              if ( (_DWORD)v7 )
              {
                if ( (_DWORD)v7 == 1 )
                {
                  v7 = v21 + 40;
                  if ( v21 + 40 <= v20 )
                  {
                    if ( *(_DWORD *)(v21 + v11 + 12) )
                      v18 = (char *)(v21 + v11 + 32);
                    v12 = *(_BYTE **)(v21 + v11 + 24);
LABEL_32:
                    v23 = *(_BYTE *)(v21 + v11 + 8);
                    v13 = *(_BYTE *)(v21 + v11 + 9);
                    goto LABEL_41;
                  }
                }
              }
              else
              {
                v7 = v21 + 56;
                if ( v21 + 56 <= v20 )
                {
                  v31 = 1;
                  if ( *(_BYTE *)(v21 + v11 + 10) )
                    v18 = (char *)(v21 + v11 + 24);
                  v12 = *(_BYTE **)(v21 + v11 + 16);
                  v13 = *(_BYTE *)(v21 + v11 + 9);
                  v30 = *(_BYTE *)(v21 + v11 + 8);
                }
              }
            }
            else
            {
              v7 = v21 + 40;
              if ( v21 + 40 <= v20 )
              {
                if ( *(_BYTE *)(v21 + v11 + 10) )
                  v18 = (char *)(v21 + v11 + 24);
                v12 = *(_BYTE **)(v21 + v11 + 16);
                goto LABEL_32;
              }
            }
            if ( v31 )
              break;
          }
        }
        ++v19;
      }
      while ( v19 < v32 );
      v23 = v30;
LABEL_41:
      if ( v18 )
      {
        v24 = *v18;
        v17 = 0;
        goto LABEL_47;
      }
    }
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
