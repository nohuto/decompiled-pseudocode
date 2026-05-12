/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x140080D20
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  char *DeviceExtension; // rsi
  int v7; // ebx
  bool v8; // zf
  int v9; // ebp
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // r14
  char v18; // bp
  char v19; // r11
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
  char *v30; // r11
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  __int64 v35; // [rsp+20h] [rbp-A8h]
  __int64 v36; // [rsp+28h] [rbp-A0h]
  char v37; // [rsp+60h] [rbp-68h]
  char v38; // [rsp+61h] [rbp-67h]
  int Status; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  GUID v41; // [rsp+70h] [rbp-58h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x38u,
      (__int64)&WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      DeviceExtension,
      Context);
  }
  v7 = 0;
  if ( *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 5024LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 904, 0, 1) == 1 )
  {
    RaidAdapterPoFxIdleComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
  }
  DeviceExtension[505] &= ~1u;
  v8 = StorEtwLoggingEnabled == 0;
  Status = IoStatus->Status;
  v9 = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = v9;
  if ( v8 )
    goto LABEL_73;
  v41 = 0LL;
  IoGetActivityIdIrp(Context, &v41);
  v11 = *((_QWORD *)Context + 23);
  switch ( *(_BYTE *)v11 )
  {
    case 0xE:
      if ( (byte_140173442 & 8) == 0 )
        break;
      v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_20;
    case 0xF:
      if ( byte_140173441 >= 0 )
        break;
      v14 = *(_QWORD *)(v11 + 8);
      v15 = 0LL;
      v37 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      if ( *(_BYTE *)(v14 + 2) == 40 )
      {
        v21 = 0LL;
        v38 = 0;
        if ( *(_DWORD *)(v14 + 20) )
          goto LABEL_72;
        v22 = 0;
        v40 = *(_DWORD *)(v14 + 56);
        if ( !v40 )
          goto LABEL_72;
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
LABEL_34:
                      v26 = *(_BYTE *)(v24 + v14 + 8);
                      v16 = *(_BYTE *)(v24 + v14 + 9);
                      goto LABEL_43;
                    }
                  }
                }
                else
                {
                  v10 = v24 + 56;
                  if ( v24 + 56 <= v23 )
                  {
                    v38 = 1;
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v15 = *(_BYTE **)(v24 + v14 + 16);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    v37 = *(_BYTE *)(v24 + v14 + 8);
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
                  goto LABEL_34;
                }
              }
              if ( v38 )
                break;
            }
          }
          ++v22;
        }
        while ( v22 < v40 );
        v26 = v37;
LABEL_43:
        if ( !v21 )
          goto LABEL_72;
        v27 = *v21;
        v20 = 0;
      }
      else
      {
        v27 = *(_BYTE *)(v14 + 72);
        v15 = *(_BYTE **)(v14 + 32);
        v16 = *(_BYTE *)(v14 + 11);
        v26 = *(_BYTE *)(v14 + 4);
        if ( *(_BYTE *)(v14 + 2) )
          goto LABEL_72;
      }
      LOBYTE(v10) = v27 - 8;
      if ( (v10 & 0x5D) == 0 )
      {
        v28 = *(_BYTE *)(v14 + 3);
        if ( v28 == 1 || !v15 || !v16 )
        {
LABEL_68:
          if ( byte_140173441 < 0 )
          {
            if ( !v20 )
            {
              v19 = 0;
              v18 = 0;
              v17 = 0;
            }
            LODWORD(v35) = *((_DWORD *)Context + 12);
            McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v41, Context, v35, v28, v26, v17, v18, v19, Context);
          }
          goto LABEL_72;
        }
        v29 = *v15 & 0x7F;
        if ( v29 == 114 || v29 == 115 )
        {
          v10 = (unsigned __int64)&v15[v16];
          LOBYTE(v14) = 0;
          if ( (unsigned __int64)(v15 + 8) > v10 )
            goto LABEL_66;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
        else
        {
          v10 = (unsigned __int64)&v15[v16];
          LOBYTE(v14) = 0;
          if ( (unsigned __int64)(v15 + 8) > v10 )
            goto LABEL_66;
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
LABEL_66:
        if ( (_BYTE)v14 )
          v20 = 1;
        goto LABEL_68;
      }
LABEL_72:
      v9 = Status;
      break;
    case 0x1B:
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v12 = (int *)*((_QWORD *)Context + 7);
          if ( v12 )
            v7 = *v12;
          LODWORD(v35) = v7;
          McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v41, Context, v35, *((_DWORD *)Context + 12));
        }
        break;
      }
      if ( (byte_140173442 & 0x20) != 0 )
      {
        v13 = &EventPnpRequestComplete;
LABEL_20:
        LODWORD(v35) = *((_DWORD *)Context + 12);
        McTemplateK0pd_EtwWriteTransfer(v10, v13, &v41, Context, v35);
      }
      break;
  }
LABEL_73:
  IofCompleteRequest((PIRP)Context, 0);
  v32 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v33 = *(_DWORD *)(v32 + *((_QWORD *)DeviceExtension + 5));
  while ( (v33 & 1) == 0 )
  {
    v34 = v33;
    v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v32 + *((_QWORD *)DeviceExtension + 5)), v33 - 2, v33);
    if ( v34 == v33 )
      goto LABEL_81;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
LABEL_81:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v36) = v9;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x39u,
      (__int64)&WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      DeviceExtension,
      Context,
      v36);
  }
}
