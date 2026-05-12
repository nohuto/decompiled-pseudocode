/*
 * XREFs of RaUnitDeviceEnumeratedIrp @ 0x140188FD4
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeviceEnumeratedIrp(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  NTSTATUS v4; // eax
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
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
  char v26; // cl
  int v27; // ebx
  __int64 v28; // rdx
  int *v29; // rax
  const EVENT_DESCRIPTOR *v30; // rdx
  unsigned int v31; // r13d
  unsigned __int64 v32; // r12
  int v33; // ecx
  char v34; // r8
  char v35; // al
  char *v36; // r10
  unsigned int v37; // eax
  __int64 Type; // [rsp+20h] [rbp-49h]
  __int64 Size; // [rsp+28h] [rbp-41h]
  PVOID Data; // [rsp+30h] [rbp-39h]
  char v42; // [rsp+60h] [rbp-9h]
  char v43; // [rsp+61h] [rbp-8h]
  char v44; // [rsp+61h] [rbp-8h]
  NTSTATUS v45; // [rsp+64h] [rbp-5h]
  char v46[4]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp+3h]
  GUID v48; // [rsp+70h] [rbp+7h] BYREF

  if ( (*(_DWORD *)(a1 + 1952) & 0x20) == 0 )
  {
    v45 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 48) = v45;
    v27 = 0;
    v6 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v6 )
      goto LABEL_102;
    v48 = 0LL;
    IoGetActivityIdIrp(a2, &v48);
    v28 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v28 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_102;
        v30 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_102;
        v12 = *(_QWORD *)(v28 + 8);
        v13 = 0LL;
        v42 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = *(unsigned __int8 *)(v12 + 2);
        if ( (_BYTE)v19 == 40 )
        {
          v20 = 0LL;
          v44 = 0;
          if ( *(_DWORD *)(v12 + 20) )
            goto LABEL_102;
          v31 = 0;
          v47 = *(_DWORD *)(v12 + 56);
          if ( !v47 )
            goto LABEL_102;
          do
          {
            v8 = *(unsigned int *)(v12 + 4LL * v31 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v32 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v8 < (unsigned int)v32 )
              {
                v23 = (unsigned int)v8;
                v33 = *(_DWORD *)(v8 + v12) - 64;
                if ( v33 )
                {
                  v8 = (unsigned int)(v33 - 1);
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = v23 + 40;
                      if ( v23 + 40 <= v32 )
                      {
LABEL_25:
                        if ( *(_DWORD *)(v23 + v12 + 12) )
                          v20 = (char *)(v23 + v12 + 32);
                        v13 = *(_BYTE **)(v23 + v12 + 24);
LABEL_28:
                        v25 = *(_BYTE *)(v23 + v12 + 8);
                        v14 = *(_BYTE *)(v23 + v12 + 9);
                        goto LABEL_37;
                      }
                    }
                  }
                  else
                  {
                    v8 = v23 + 56;
                    if ( v23 + 56 <= v32 )
                    {
                      v44 = 1;
                      if ( *(_BYTE *)(v23 + v12 + 10) )
                        v20 = (char *)(v23 + v12 + 24);
                      v13 = *(_BYTE **)(v23 + v12 + 16);
                      v14 = *(_BYTE *)(v23 + v12 + 9);
                      v42 = *(_BYTE *)(v23 + v12 + 8);
                    }
                  }
                }
                else
                {
                  v8 = v23 + 40;
                  if ( v23 + 40 <= v32 )
                  {
LABEL_72:
                    if ( *(_BYTE *)(v23 + v12 + 10) )
                      v20 = (char *)(v23 + v12 + 24);
                    v13 = *(_BYTE **)(v23 + v12 + 16);
                    goto LABEL_28;
                  }
                }
                if ( v44 )
                  break;
              }
            }
            ++v31;
          }
          while ( v31 < v47 );
LABEL_36:
          v25 = v42;
LABEL_37:
          if ( !v20 )
            goto LABEL_102;
          v26 = *v20;
          v18 = 0;
LABEL_76:
          LOBYTE(v8) = v26 - 8;
          if ( (v8 & 0x5D) == 0 )
          {
            v34 = *(_BYTE *)(v12 + 3);
            if ( v34 == 1 || !v13 || !v14 )
            {
LABEL_95:
              if ( byte_140173441 < 0 )
              {
                if ( !v18 )
                {
                  v17 = 0;
                  v16 = 0;
                  v15 = 0;
                }
                LOBYTE(Data) = v25;
                LOBYTE(Size) = v34;
                LODWORD(Type) = *(_DWORD *)(a2 + 48);
                McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v48, a2, Type, Size, Data, v15, v16, v17, a2);
              }
              goto LABEL_102;
            }
            v35 = *v13 & 0x7F;
            if ( v35 == 114 || v35 == 115 )
            {
              v8 = (unsigned __int64)&v13[v14];
              LOBYTE(v12) = 0;
              if ( (unsigned __int64)(v13 + 8) > v8 )
                goto LABEL_93;
              v17 = v13[3];
              v15 = v13[1] & 0xF;
              v16 = v13[2];
            }
            else
            {
              v8 = (unsigned __int64)&v13[v14];
              LOBYTE(v12) = 0;
              if ( (unsigned __int64)(v13 + 8) > v8 )
                goto LABEL_93;
              v36 = v13 + 13;
              v15 = v13[2] & 0xF;
              v37 = v14;
              if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
                v37 = (unsigned __int8)v13[7] + 8;
              v8 = (unsigned __int64)&v13[v37];
              if ( (unsigned __int64)v36 <= v8 )
                v16 = v13[12];
              if ( (unsigned __int64)(v13 + 14) > v8 )
                v17 = 0;
              else
                v17 = *v36;
            }
            LOBYTE(v12) = 1;
LABEL_93:
            if ( (_BYTE)v12 )
              v18 = 1;
            goto LABEL_95;
          }
LABEL_102:
          v7 = v45;
          goto LABEL_103;
        }
LABEL_75:
        v25 = *(_BYTE *)(v12 + 4);
        v14 = *(_BYTE *)(v12 + 11);
        v13 = *(_BYTE **)(v12 + 32);
        v26 = *(_BYTE *)(v12 + 72);
        if ( v19 )
          goto LABEL_102;
        goto LABEL_76;
      case 0x1B:
        if ( *(_BYTE *)(v28 + 1) == 7 && !*(_DWORD *)(v28 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v29 = *(int **)(a2 + 56);
            if ( v29 )
              v27 = *v29;
            McTemplateK0pqd_EtwWriteTransfer(v8, v28, &v48, a2, v27, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_102;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_102;
        v30 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_102;
    }
    McTemplateK0pd_EtwWriteTransfer(v8, v30, &v48, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_102;
  }
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v46[0] = -1;
  v4 = IoSetDevicePropertyData(v3, &DEVPKEY_Storage_No_Partitions, 0, 0, 0x11u, 1u, v46);
  v5 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v6 = StorEtwLoggingEnabled == 0;
  v7 = v4;
  v45 = v4;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v6 )
    goto LABEL_103;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_103;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v9 == 15 )
  {
    if ( byte_140173441 >= 0 )
      goto LABEL_103;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = 0LL;
    v42 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = *(unsigned __int8 *)(v12 + 2);
    if ( (_BYTE)v19 == 40 )
    {
      v20 = 0LL;
      v43 = 0;
      if ( !*(_DWORD *)(v12 + 20) )
      {
        v21 = 0;
        v47 = *(_DWORD *)(v12 + 56);
        if ( v47 )
        {
          while ( 1 )
          {
            v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v22 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v8 < (unsigned int)v22 )
              {
                v23 = (unsigned int)v8;
                v24 = *(_DWORD *)(v8 + v12) - 64;
                if ( v24 )
                {
                  v8 = (unsigned int)(v24 - 1);
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = v23 + 40;
                      if ( v23 + 40 <= v22 )
                        goto LABEL_25;
                    }
                  }
                  else
                  {
                    v8 = v23 + 56;
                    if ( v23 + 56 <= v22 )
                    {
                      v43 = 1;
                      if ( *(_BYTE *)(v23 + v12 + 10) )
                        v20 = (char *)(v23 + v12 + 24);
                      v13 = *(_BYTE **)(v23 + v12 + 16);
                      v14 = *(_BYTE *)(v23 + v12 + 9);
                      v42 = *(_BYTE *)(v23 + v12 + 8);
                    }
                  }
                }
                else
                {
                  v8 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                    goto LABEL_72;
                }
                if ( v43 )
                  goto LABEL_36;
              }
            }
            if ( ++v21 >= v47 )
              goto LABEL_36;
          }
        }
      }
      goto LABEL_102;
    }
    goto LABEL_75;
  }
  if ( *(_BYTE *)v9 != 27 )
    goto LABEL_103;
  if ( *(_BYTE *)(v9 + 1) != 7 || *(_DWORD *)(v9 + 8) )
  {
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_103;
    v11 = &EventPnpRequestComplete;
LABEL_14:
    LODWORD(Type) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v48, a2, Type);
    goto LABEL_103;
  }
  if ( (byte_140173442 & 0x40) != 0 )
  {
    v10 = *(int **)(a2 + 56);
    if ( v10 )
      v5 = *v10;
    LODWORD(Size) = *(_DWORD *)(a2 + 48);
    LODWORD(Type) = v5;
    McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v48, a2, Type, Size);
  }
LABEL_103:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
