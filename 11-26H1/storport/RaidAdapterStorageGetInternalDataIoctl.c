/*
 * XREFs of RaidAdapterStorageGetInternalDataIoctl @ 0x1401864B4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     ExtensionSendStorportData @ 0x140074E98 (ExtensionSendStorportData.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageGetInternalDataIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v5; // edi
  _DWORD *v6; // r13
  __int64 *v7; // rsi
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rdi
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r15
  char v19; // si
  char v20; // r11
  char v21; // r10
  char v22; // r12
  char *v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r13
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  char v35; // [rsp+60h] [rbp-29h]
  char v36; // [rsp+61h] [rbp-28h]
  int v37; // [rsp+64h] [rbp-25h]
  unsigned int v38; // [rsp+68h] [rbp-21h]
  GUID v39; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  v7 = (__int64 *)(a2 + 184);
  if ( !v6 )
    goto LABEL_17;
  if ( *(_DWORD *)(*v7 + 16) < 0x1Cu )
  {
    v5 = -1073741820;
    goto LABEL_18;
  }
  if ( *v6 == 28 && v6[1] == 28 && (v8 = v6[3]) != 0 && v8 < 3 && (v9 = v6[4]) != 0 && v9 < 2 )
  {
    if ( v8 == 1 )
    {
      v5 = ExtensionSendStorportData((__int64)v6, 2LL);
    }
    else if ( v8 == 2 )
    {
      v10 = a1 + 376;
      if ( RaidIsAdapterControlSupported(a1 + 376, 21) )
        v5 = RaCallMiniportAdapterControl(v10);
      else
        v5 = -1073741637;
      v7 = (__int64 *)(a2 + 184);
    }
  }
  else
  {
LABEL_17:
    v5 = -1073741811;
  }
LABEL_18:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v11 )
    goto LABEL_84;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v13 = *v7;
  if ( *(_BYTE *)*v7 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_84;
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_83;
  }
  if ( *(_BYTE *)*v7 != 15 )
  {
    if ( *(_BYTE *)*v7 != 27 )
      goto LABEL_84;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_84;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_84;
    v15 = &EventPnpRequestComplete;
LABEL_83:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_84;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_84;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0LL;
  v35 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v17 = *(_BYTE **)(v16 + 32);
    v18 = *(_BYTE *)(v16 + 11);
    v28 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_84;
LABEL_58:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_84;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v17 || !v18 )
      goto LABEL_77;
    v31 = *v17 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_75;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v12 = (unsigned __int64)&v17[v18];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v17 + 8) > v12 )
        goto LABEL_75;
      v32 = v17 + 13;
      v19 = v17[2] & 0xF;
      v33 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v33 = (unsigned __int8)v17[7] + 8;
      v12 = (unsigned __int64)&v17[v33];
      if ( (unsigned __int64)v32 <= v12 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v12 )
        v21 = 0;
      else
        v21 = *v32;
    }
    LOBYTE(v16) = 1;
LABEL_75:
    if ( (_BYTE)v16 )
      v22 = 1;
LABEL_77:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v39, a2, *(_DWORD *)(a2 + 48), v30, v28, v19, v20, v21, a2);
    }
    goto LABEL_84;
  }
  v23 = 0LL;
  v36 = 0;
  if ( !*(_DWORD *)(v16 + 20) )
  {
    v24 = 0LL;
    v37 = 0;
    v38 = *(_DWORD *)(v16 + 56);
    if ( v38 )
    {
      do
      {
        v12 = *(unsigned int *)(v16 + 4 * v24 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v25 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v12 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v12;
            v27 = *(_DWORD *)(v12 + v16) - 64;
            if ( v27 )
            {
              v12 = (unsigned int)(v27 - 1);
              if ( (_DWORD)v12 )
              {
                if ( (_DWORD)v12 == 1 )
                {
                  v12 = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v26 + v16 + 12) )
                      v23 = (char *)(v26 + v16 + 32);
                    v17 = *(_BYTE **)(v26 + v16 + 24);
LABEL_43:
                    v28 = *(_BYTE *)(v26 + v16 + 8);
                    v18 = *(_BYTE *)(v26 + v16 + 9);
                    goto LABEL_52;
                  }
                }
              }
              else
              {
                v12 = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v36 = 1;
                  if ( *(_BYTE *)(v26 + v16 + 10) )
                    v23 = (char *)(v26 + v16 + 24);
                  v17 = *(_BYTE **)(v26 + v16 + 16);
                  v18 = *(_BYTE *)(v26 + v16 + 9);
                  v35 = *(_BYTE *)(v26 + v16 + 8);
                }
              }
            }
            else
            {
              v12 = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v26 + v16 + 10) )
                  v23 = (char *)(v26 + v16 + 24);
                v17 = *(_BYTE **)(v26 + v16 + 16);
                goto LABEL_43;
              }
            }
            if ( v36 )
              break;
          }
        }
        v24 = (unsigned int)(v37 + 1);
        v37 = v24;
      }
      while ( (unsigned int)v24 < v38 );
      v28 = v35;
LABEL_52:
      if ( v23 )
      {
        v29 = *v23;
        v22 = 0;
        goto LABEL_58;
      }
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
