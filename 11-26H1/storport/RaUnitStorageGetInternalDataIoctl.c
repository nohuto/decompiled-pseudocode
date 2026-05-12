/*
 * XREFs of RaUnitStorageGetInternalDataIoctl @ 0x14018CBB0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     ExtensionSendStorportData @ 0x140074E98 (ExtensionSendStorportData.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitStorageGetInternalDataIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r13
  __int64 *v3; // r14
  int v4; // ebx
  int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v12; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r15
  char v23; // r14
  char v24; // r11
  char v25; // r10
  char v26; // r12
  char *v27; // r12
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
  char v38; // [rsp+60h] [rbp-39h]
  char v39; // [rsp+61h] [rbp-38h]
  int v40; // [rsp+64h] [rbp-35h]
  unsigned int v41; // [rsp+68h] [rbp-31h]
  GUID v42; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = (__int64 *)(a2 + 184);
  v4 = 0;
  v7 = 0;
  if ( !v2 )
    goto LABEL_24;
  v8 = *v3;
  if ( *(_DWORD *)(*v3 + 16) < 0x1Cu )
  {
    v7 = -1073741820;
    goto LABEL_25;
  }
  if ( *v2 == 28 && v2[1] == 28 && (v9 = v2[3]) != 0 && v9 < 3 && (v10 = v2[4]) != 0 && v10 < 2 )
  {
    if ( (v2[2] & 1) != 0 )
    {
      ++*(_BYTE *)(a2 + 67);
      *v3 = v8 + 72;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
    }
    if ( v9 == 1 )
    {
      v12 = ExtensionSendStorportData((__int64)v2, 1LL);
LABEL_14:
      v7 = v12;
      goto LABEL_25;
    }
    if ( v9 == 2 )
    {
      if ( RaidIsUnitControlSupported(a1, 14) )
      {
        v13 = *(_DWORD **)(a1 + 24);
        if ( *v13 == 1094997074 )
        {
          v14 = (__int64)(v13 + 94);
        }
        else if ( *v13 == 1314275652 )
        {
          v14 = (__int64)(v13 + 42);
        }
        else
        {
          v14 = 0LL;
        }
        v12 = RaCallMiniportUnitControl(v14);
        goto LABEL_14;
      }
      v7 = -1073741637;
    }
  }
  else
  {
LABEL_24:
    v7 = -1073741811;
  }
LABEL_25:
  v15 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v15 )
    goto LABEL_91;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v17 = *v3;
  if ( *(_BYTE *)*v3 != 14 )
  {
    if ( *(_BYTE *)*v3 != 15 )
    {
      if ( *(_BYTE *)*v3 == 27 )
      {
        if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v18 = *(int **)(a2 + 56);
            if ( v18 )
              v4 = *v18;
            McTemplateK0pqd_EtwWriteTransfer(v16, v17, &v42, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_91;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v19 = &EventPnpRequestComplete;
LABEL_90:
          McTemplateK0pd_EtwWriteTransfer(v16, v19, &v42, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_91;
        }
      }
      goto LABEL_91;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_91;
    v20 = *(_QWORD *)(v17 + 8);
    v21 = 0LL;
    v38 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( *(_BYTE *)(v20 + 2) == 40 )
    {
      v27 = 0LL;
      v39 = 0;
      if ( *(_DWORD *)(v20 + 20) )
        goto LABEL_91;
      v28 = 0LL;
      v40 = 0;
      v41 = *(_DWORD *)(v20 + 56);
      if ( !v41 )
        goto LABEL_91;
      do
      {
        v16 = *(unsigned int *)(v20 + 4 * v28 + 120);
        if ( (unsigned int)v16 >= 0x80 )
        {
          v29 = *(unsigned int *)(v20 + 16);
          if ( (unsigned int)v16 < (unsigned int)v29 )
          {
            v30 = (unsigned int)v16;
            v31 = *(_DWORD *)(v16 + v20) - 64;
            if ( v31 )
            {
              v16 = (unsigned int)(v31 - 1);
              if ( (_DWORD)v16 )
              {
                if ( (_DWORD)v16 == 1 )
                {
                  v16 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_DWORD *)(v30 + v20 + 12) )
                      v27 = (char *)(v30 + v20 + 32);
                    v21 = *(_BYTE **)(v30 + v20 + 24);
LABEL_50:
                    v32 = *(_BYTE *)(v30 + v20 + 8);
                    v22 = *(_BYTE *)(v30 + v20 + 9);
                    goto LABEL_59;
                  }
                }
              }
              else
              {
                v16 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v39 = 1;
                  if ( *(_BYTE *)(v30 + v20 + 10) )
                    v27 = (char *)(v30 + v20 + 24);
                  v21 = *(_BYTE **)(v30 + v20 + 16);
                  v22 = *(_BYTE *)(v30 + v20 + 9);
                  v38 = *(_BYTE *)(v30 + v20 + 8);
                }
              }
            }
            else
            {
              v16 = v30 + 40;
              if ( v30 + 40 <= v29 )
              {
                if ( *(_BYTE *)(v30 + v20 + 10) )
                  v27 = (char *)(v30 + v20 + 24);
                v21 = *(_BYTE **)(v30 + v20 + 16);
                goto LABEL_50;
              }
            }
            if ( v39 )
              break;
          }
        }
        v28 = (unsigned int)(v40 + 1);
        v40 = v28;
      }
      while ( (unsigned int)v28 < v41 );
      v32 = v38;
LABEL_59:
      if ( !v27 )
        goto LABEL_91;
      v33 = *v27;
      v26 = 0;
    }
    else
    {
      v33 = *(_BYTE *)(v20 + 72);
      v21 = *(_BYTE **)(v20 + 32);
      v22 = *(_BYTE *)(v20 + 11);
      v32 = *(_BYTE *)(v20 + 4);
      if ( *(_BYTE *)(v20 + 2) )
        goto LABEL_91;
    }
    LOBYTE(v16) = v33 - 8;
    if ( (v16 & 0x5D) != 0 )
      goto LABEL_91;
    v34 = *(_BYTE *)(v20 + 3);
    if ( v34 == 1 || !v21 || !v22 )
    {
LABEL_84:
      if ( byte_140173441 < 0 )
      {
        if ( !v26 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v16, v20, &v42, a2, *(_DWORD *)(a2 + 48), v34, v32, v23, v24, v25, a2);
      }
      goto LABEL_91;
    }
    v35 = *v21 & 0x7F;
    if ( v35 == 114 || v35 == 115 )
    {
      v16 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v16 )
        goto LABEL_82;
      v24 = v21[2];
      v23 = v21[1] & 0xF;
      v25 = v21[3];
    }
    else
    {
      v16 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v16 )
        goto LABEL_82;
      v36 = v21 + 13;
      v23 = v21[2] & 0xF;
      v37 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v37 = (unsigned __int8)v21[7] + 8;
      v16 = (unsigned __int64)&v21[v37];
      if ( (unsigned __int64)v36 <= v16 )
        v24 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v16 )
        v25 = 0;
      else
        v25 = *v36;
    }
    LOBYTE(v20) = 1;
LABEL_82:
    if ( (_BYTE)v20 )
      v26 = 1;
    goto LABEL_84;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v19 = &EventNonReadWriteRequestComplete;
    goto LABEL_90;
  }
LABEL_91:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
