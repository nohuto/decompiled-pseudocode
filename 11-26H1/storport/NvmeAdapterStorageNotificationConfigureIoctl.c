/*
 * XREFs of NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019F2EC
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     StorCancelStorageNotificationIrp @ 0x1401AF900 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401AF9BC (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401AFAA4 (StorDisableStorageNotification.c)
 *     StorEnableStorageNotification @ 0x1401AFB74 (StorEnableStorageNotification.c)
 */

__int64 __fastcall NvmeAdapterStorageNotificationConfigureIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // eax
  unsigned __int8 v8; // al
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char v18; // di
  char v19; // r10
  char v20; // r15
  char *v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  char v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+61h] [rbp-57h]
  unsigned int v35; // [rsp+64h] [rbp-54h]
  GUID v36; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 24);
  v36 = 0LL;
  if ( v4 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x40u && *(_WORD *)v4 == 1 && *(_WORD *)(v4 + 2) == 64 )
  {
    v5 = *(_QWORD *)(v4 + 40) - *(_QWORD *)&v36.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 48) - *(_QWORD *)v36.Data4;
    if ( v5 && *(_DWORD *)(v4 + 12) == 2 )
    {
      if ( *(_DWORD *)(v4 + 8) != 1 )
      {
        switch ( *(_DWORD *)(v4 + 8) )
        {
          case 2:
            v7 = StorDisableStorageNotification(*(_QWORD *)(a1 + 8));
            break;
          case 3:
            v7 = StorCancelStorageNotificationIrp(*(_QWORD *)(a1 + 8));
            break;
          case 4:
            v7 = StorDeleteStorageNotification(*(_QWORD *)(a1 + 8));
            break;
          default:
            v6 = -1073741808;
            goto LABEL_24;
        }
        goto LABEL_15;
      }
      if ( *(_QWORD *)(v4 + 32) || *(_QWORD *)(v4 + 24) )
      {
        v8 = *(_BYTE *)(v4 + 16);
        if ( v8 )
        {
          if ( v8 <= 0x80u )
          {
            v7 = StorEnableStorageNotification(*(PDEVICE_OBJECT *)(a1 + 8));
LABEL_15:
            v6 = v7;
            goto LABEL_24;
          }
        }
      }
    }
  }
  v6 = -1073741811;
LABEL_24:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v9 )
    goto LABEL_90;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_90;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_89;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_90;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v2 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v36, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_90;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_90;
    v13 = &EventPnpRequestComplete;
LABEL_89:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_90;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_90;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0LL;
  v33 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 72);
    v15 = *(_BYTE **)(v14 + 32);
    v16 = *(_BYTE *)(v14 + 11);
    v26 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_90;
LABEL_64:
    LOBYTE(v10) = v27 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_90;
    v28 = *(_BYTE *)(v14 + 3);
    if ( v28 == 1 || !v15 || !v16 )
      goto LABEL_83;
    v29 = *v15 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_81;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v10 = (unsigned __int64)&v15[v16];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v15 + 8) > v10 )
        goto LABEL_81;
      v30 = v15 + 13;
      v17 = v15[2] & 0xF;
      v31 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v31 = (unsigned __int8)v15[7] + 8;
      v10 = (unsigned __int64)&v15[v31];
      if ( (unsigned __int64)v30 <= v10 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v10 )
        v19 = 0;
      else
        v19 = *v30;
    }
    LOBYTE(v14) = 1;
LABEL_81:
    if ( (_BYTE)v14 )
      v20 = 1;
LABEL_83:
    if ( byte_140173441 < 0 )
    {
      if ( !v20 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v36, a2, *(_DWORD *)(a2 + 48), v28, v26, v17, v18, v19, a2);
    }
    goto LABEL_90;
  }
  v21 = 0LL;
  v34 = 0;
  if ( !*(_DWORD *)(v14 + 20) )
  {
    v22 = 0;
    v35 = *(_DWORD *)(v14 + 56);
    if ( v35 )
    {
      do
      {
        v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v23 = *(unsigned int *)(v14 + 16);
          if ( (unsigned int)v10 < (unsigned int)v23 )
          {
            v24 = (unsigned int)v10;
            v25 = *(_DWORD *)(v10 + v14) - 64;
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
                    if ( *(_DWORD *)(v24 + v14 + 12) )
                      v21 = (char *)(v24 + v14 + 32);
                    v15 = *(_BYTE **)(v24 + v14 + 24);
LABEL_49:
                    v26 = *(_BYTE *)(v24 + v14 + 8);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    goto LABEL_58;
                  }
                }
              }
              else
              {
                v10 = v24 + 56;
                if ( v24 + 56 <= v23 )
                {
                  v34 = 1;
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  v16 = *(_BYTE *)(v24 + v14 + 9);
                  v33 = *(_BYTE *)(v24 + v14 + 8);
                }
              }
            }
            else
            {
              v10 = v24 + 40;
              if ( v24 + 40 <= v23 )
              {
                if ( *(_BYTE *)(v24 + v14 + 10) )
                  v21 = (char *)(v24 + v14 + 24);
                v15 = *(_BYTE **)(v24 + v14 + 16);
                goto LABEL_49;
              }
            }
            if ( v34 )
              break;
          }
        }
        ++v22;
      }
      while ( v22 < v35 );
      v26 = v33;
LABEL_58:
      if ( v21 )
      {
        v27 = *v21;
        v20 = 0;
        goto LABEL_64;
      }
    }
  }
LABEL_90:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
