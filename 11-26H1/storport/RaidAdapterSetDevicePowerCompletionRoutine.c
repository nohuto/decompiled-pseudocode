/*
 * XREFs of RaidAdapterSetDevicePowerCompletionRoutine @ 0x14000EF90
 * Callers:
 *     <none>
 * Callees:
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidAdapterSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 RaidAdapter; // rax
  __int64 v7; // r14
  int v8; // r8d
  int v9; // ebx
  bool v10; // zf
  int v11; // esi
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  void *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r11
  char v19; // bp
  char v20; // si
  char v21; // r10
  char v22; // r15
  char *v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r12
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  char v34; // [rsp+60h] [rbp-68h]
  char v35; // [rsp+61h] [rbp-67h]
  int Status; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  __int128 v38; // [rsp+70h] [rbp-58h] BYREF

  RaidAdapter = GetRaidAdapter(DeviceObject, MinorFunction, PowerState);
  v7 = RaidAdapter;
  if ( v8 == 1 )
  {
    *(_BYTE *)(RaidAdapter + 107) &= ~2u;
    return;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      41LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      RaidAdapter,
      Context);
  }
  *(_BYTE *)(v7 + 107) &= ~4u;
  LOBYTE(v9) = 0;
  v10 = StorEtwLoggingEnabled == 0;
  Status = IoStatus->Status;
  v11 = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = v11;
  if ( v10 )
    goto LABEL_72;
  v38 = 0LL;
  IoGetActivityIdIrp(Context, &v38);
  v13 = *((_QWORD *)Context + 23);
  switch ( *(_BYTE *)v13 )
  {
    case 0xE:
      if ( (byte_140173442 & 8) == 0 )
        break;
      v15 = &EventNonReadWriteRequestComplete;
      goto LABEL_19;
    case 0xF:
      if ( byte_140173441 >= 0 )
        break;
      v16 = *(_QWORD *)(v13 + 8);
      v17 = 0LL;
      v34 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      if ( *(_BYTE *)(v16 + 2) == 40 )
      {
        v23 = 0LL;
        v35 = 0;
        if ( *(_DWORD *)(v16 + 20) )
          goto LABEL_71;
        v24 = 0;
        v37 = *(_DWORD *)(v16 + 56);
        if ( !v37 )
          goto LABEL_71;
        do
        {
          v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
          if ( (unsigned int)v12 >= 0x80 )
          {
            v25 = *(unsigned int *)(v16 + 16);
            if ( (unsigned int)v12 < (unsigned int)v25 )
            {
              v26 = (unsigned int)v12;
              v27 = *(_DWORD *)(v12 + v16) - 64;
              if ( v27 )
              {
                LODWORD(v12) = v27 - 1;
                if ( (_DWORD)v12 )
                {
                  if ( (_DWORD)v12 == 1 )
                  {
                    LODWORD(v12) = v26 + 40;
                    if ( v26 + 40 <= v25 )
                    {
                      if ( *(_DWORD *)(v26 + v16 + 12) )
                        v23 = (char *)(v26 + v16 + 32);
                      v17 = *(_BYTE **)(v26 + v16 + 24);
LABEL_33:
                      v28 = *(_BYTE *)(v26 + v16 + 8);
                      v18 = *(_BYTE *)(v26 + v16 + 9);
                      goto LABEL_42;
                    }
                  }
                }
                else
                {
                  LODWORD(v12) = v26 + 56;
                  if ( v26 + 56 <= v25 )
                  {
                    v35 = 1;
                    if ( *(_BYTE *)(v26 + v16 + 10) )
                      v23 = (char *)(v26 + v16 + 24);
                    v17 = *(_BYTE **)(v26 + v16 + 16);
                    v18 = *(_BYTE *)(v26 + v16 + 9);
                    v34 = *(_BYTE *)(v26 + v16 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v12) = v26 + 40;
                if ( v26 + 40 <= v25 )
                {
                  if ( *(_BYTE *)(v26 + v16 + 10) )
                    v23 = (char *)(v26 + v16 + 24);
                  v17 = *(_BYTE **)(v26 + v16 + 16);
                  goto LABEL_33;
                }
              }
              if ( v35 )
                break;
            }
          }
          ++v24;
        }
        while ( v24 < v37 );
        v28 = v34;
LABEL_42:
        if ( !v23 )
          goto LABEL_71;
        v29 = *v23;
        v22 = 0;
      }
      else
      {
        v29 = *(_BYTE *)(v16 + 72);
        v17 = *(_BYTE **)(v16 + 32);
        v18 = *(_BYTE *)(v16 + 11);
        v28 = *(_BYTE *)(v16 + 4);
        if ( *(_BYTE *)(v16 + 2) )
          goto LABEL_71;
      }
      LOBYTE(v12) = v29 - 8;
      if ( (v12 & 0x5D) == 0 )
      {
        v30 = *(_BYTE *)(v16 + 3);
        if ( v30 == 1 || !v17 || !v18 )
        {
LABEL_67:
          if ( byte_140173441 < 0 )
          {
            if ( !v22 )
            {
              v21 = 0;
              v20 = 0;
              v19 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v12,
              v16,
              (unsigned int)&v38,
              (_DWORD)Context,
              *((_DWORD *)Context + 12),
              v30,
              v28,
              v19,
              v20,
              v21,
              (char)Context);
          }
          goto LABEL_71;
        }
        v31 = *v17 & 0x7F;
        if ( v31 == 114 || v31 == 115 )
        {
          v12 = (unsigned __int64)&v17[v18];
          LOBYTE(v16) = 0;
          if ( (unsigned __int64)(v17 + 8) > v12 )
            goto LABEL_65;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
        else
        {
          v12 = (unsigned __int64)&v17[v18];
          LOBYTE(v16) = 0;
          if ( (unsigned __int64)(v17 + 8) > v12 )
            goto LABEL_65;
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
LABEL_65:
        if ( (_BYTE)v16 )
          v22 = 1;
        goto LABEL_67;
      }
LABEL_71:
      v11 = Status;
      break;
    case 0x1B:
      if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v14 = (int *)*((_QWORD *)Context + 7);
          if ( v14 )
            v9 = *v14;
          McTemplateK0pqd_EtwWriteTransfer(v12, v13, (unsigned int)&v38, (_DWORD)Context, v9, *((_DWORD *)Context + 12));
        }
        break;
      }
      if ( (byte_140173442 & 0x20) != 0 )
      {
        v15 = &EventPnpRequestComplete;
LABEL_19:
        McTemplateK0pd_EtwWriteTransfer(v12, v15, &v38, Context, *((_DWORD *)Context + 12));
      }
      break;
  }
LABEL_72:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 336));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      42LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      v7,
      Context,
      v11);
  }
}
