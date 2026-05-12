/*
 * XREFs of CompletionFunction @ 0x140079310
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall CompletionFunction(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  char *DeviceExtension; // rsi
  int v7; // ebx
  bool v8; // zf
  NTSTATUS v9; // ebp
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r13
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // r14
  char v19; // bp
  char v20; // r11
  char *v21; // r11
  unsigned int v22; // r12d
  unsigned int *v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  unsigned __int64 v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  __int64 v34; // [rsp+20h] [rbp-A8h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  char v36; // [rsp+60h] [rbp-68h]
  char v37; // [rsp+61h] [rbp-67h]
  char v38; // [rsp+62h] [rbp-66h]
  NTSTATUS Status; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  GUID v41; // [rsp+70h] [rbp-58h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x38u, (__int64)&unk_14014C778, DeviceExtension, Context);
  }
  v7 = 0;
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 4960LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 902, 0, 1) == 1 )
  {
    sub_140021110(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
  }
  DeviceExtension[505] &= ~1u;
  v8 = byte_140168DAA == 0;
  Status = IoStatus->Status;
  v9 = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = v9;
  if ( v8 )
    goto LABEL_74;
  v41 = 0LL;
  IoGetActivityIdIrp(Context, &v41);
  v11 = *((_QWORD *)Context + 23);
  switch ( *(_BYTE *)v11 )
  {
    case 0xE:
      if ( (byte_1401694F2 & 8) == 0 )
        break;
      v13 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_20;
    case 0xF:
      if ( byte_1401694F1 >= 0 )
        break;
      v14 = *(_QWORD *)(v11 + 8);
      v15 = 0;
      v16 = 0LL;
      v36 = 0;
      v17 = 0;
      v37 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      if ( *(_BYTE *)(v14 + 2) != 40 )
      {
        v26 = *(_BYTE *)(v14 + 72);
        v16 = *(_BYTE **)(v14 + 32);
        v17 = *(_BYTE *)(v14 + 11);
        v15 = *(_BYTE *)(v14 + 4);
        if ( !*(_BYTE *)(v14 + 2) )
          goto LABEL_51;
        goto LABEL_73;
      }
      v21 = 0LL;
      v38 = 0;
      if ( *(_DWORD *)(v14 + 20) )
        goto LABEL_73;
      v22 = 0;
      v40 = *(_DWORD *)(v14 + 56);
      if ( !v40 )
        goto LABEL_48;
      v23 = (unsigned int *)(v14 + 120);
      while ( 1 )
      {
        v24 = *v23;
        if ( (unsigned int)v24 >= 0x80 )
        {
          v25 = *(unsigned int *)(v14 + 16);
          if ( (unsigned int)v24 < (unsigned int)v25 )
          {
            if ( *(_DWORD *)(v24 + v14) == 64 )
            {
              v10 = v24 + 40;
              if ( v24 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v24 + v14 + 10) )
                  v21 = (char *)(v24 + v14 + 24);
                v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_46:
                v17 = *(_BYTE *)(v24 + v14 + 9);
                v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_47:
                v19 = 0;
LABEL_48:
                if ( v21 )
                {
                  v26 = *v21;
                  v20 = 0;
LABEL_51:
                  LOBYTE(v10) = v26 - 8;
                  if ( (v10 & 0x5D) == 0 )
                  {
                    v27 = *(_BYTE *)(v14 + 3);
                    if ( v27 == 1 || !v16 || !v17 )
                      goto LABEL_71;
                    LOBYTE(v14) = 0;
                    v10 = (unsigned __int64)&v16[v17];
                    v28 = v16 + 8;
                    if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v28 <= v10 )
                      {
                        LOBYTE(v14) = 1;
                        v19 = v16[2];
                        v18 = v16[1] & 0xF;
                        v20 = v16[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v28 <= v10 )
                      {
                        v18 = v16[2] & 0xF;
                        v29 = v17;
                        if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
                          v29 = (unsigned __int8)v16[7] + 8;
                        v10 = (unsigned __int64)(v16 + 13);
                        v14 = (unsigned __int64)&v16[v29];
                        if ( (unsigned __int64)(v16 + 13) > v14 )
                          v36 = 0;
                        else
                          v36 = v16[12];
                        if ( (unsigned __int64)(v16 + 14) > v14 )
                          v37 = 0;
                        else
                          v37 = *(_BYTE *)v10;
                        LOBYTE(v14) = 1;
                      }
                      v20 = v37;
                      v19 = v36;
                    }
                    if ( (_BYTE)v14 )
                    {
                      LOBYTE(v7) = v19;
                      v30 = v20;
                    }
                    else
                    {
LABEL_71:
                      v18 = 0;
                      v30 = 0;
                    }
                    LODWORD(v34) = *((_DWORD *)Context + 12);
                    sub_140052E64(v10, v14, &v41, Context, v34, v27, v15, v18, v7, v30, Context);
                  }
                }
LABEL_73:
                v9 = Status;
                goto LABEL_74;
              }
            }
            else
            {
              v10 = (unsigned int)(*(_DWORD *)(v24 + v14) - 65);
              if ( *(_DWORD *)(v24 + v14) == 65 )
              {
                v10 = v24 + 56;
                if ( v24 + 56 <= v25 )
                {
                  v38 = 1;
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE *)(v24 + v14 + 8);
                  v16 = *(_BYTE **)(v24 + v14 + 16);
                  v17 = *(_BYTE *)(v24 + v14 + 9);
                }
              }
              else if ( *(_DWORD *)(v24 + v14) == 66 )
              {
                v10 = v24 + 40;
                if ( v24 + 40 <= v25 )
                {
                  if ( *(_DWORD *)(v24 + v14 + 12) )
                    v21 = (char *)(v24 + v14 + 32);
                  v16 = *(_BYTE **)(v24 + v14 + 24);
                  goto LABEL_46;
                }
              }
            }
            if ( v38 )
              goto LABEL_47;
          }
        }
        ++v22;
        ++v23;
        if ( v22 >= v40 )
          goto LABEL_47;
      }
    case 0x1B:
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v12 = (int *)*((_QWORD *)Context + 7);
          if ( v12 )
            v7 = *v12;
          LODWORD(v34) = v7;
          sub_140056AB0(v10, v11, &v41, Context, v34, *((_DWORD *)Context + 12));
        }
        break;
      }
      if ( (byte_1401694F2 & 0x20) != 0 )
      {
        v13 = &stru_140149FE8;
LABEL_20:
        LODWORD(v34) = *((_DWORD *)Context + 12);
        sub_140052F3C(v10, v13, &v41, Context, v34);
      }
      break;
  }
LABEL_74:
  IofCompleteRequest((PIRP)Context, 0);
  v31 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v32 = *(_DWORD *)(v31 + *((_QWORD *)DeviceExtension + 5));
  while ( (v32 & 1) == 0 )
  {
    v33 = v32;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v31 + *((_QWORD *)DeviceExtension + 5)), v32 - 2, v32);
    if ( v33 == v32 )
      goto LABEL_82;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
LABEL_82:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    LODWORD(v35) = v9;
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x39u, (__int64)&unk_14014C778, DeviceExtension, Context, v35);
  }
}
