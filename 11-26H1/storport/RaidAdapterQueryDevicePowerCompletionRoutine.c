/*
 * XREFs of RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140045360
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

void __fastcall RaidAdapterQueryDevicePowerCompletionRoutine(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *RaidAdapter; // rax
  __int64 v7; // r9
  int v8; // ebx
  bool v9; // zf
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  void *v14; // rdx
  __int64 v15; // rdx
  _BYTE *v16; // r9
  unsigned __int8 v17; // r11
  char v18; // bp
  char v19; // si
  char v20; // r10
  char v21; // r14
  char *v22; // r14
  char v23; // r13
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  int v27; // ecx
  char v28; // r15
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  char v34; // [rsp+60h] [rbp-68h]
  int Status; // [rsp+64h] [rbp-64h]
  unsigned int v36; // [rsp+68h] [rbp-60h]
  PEX_RUNDOWN_REF_CACHE_AWARE *v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+78h] [rbp-50h] BYREF

  RaidAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetRaidAdapter(DeviceObject);
  v37 = RaidAdapter;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      37LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      RaidAdapter,
      v7);
  }
  LOBYTE(v8) = 0;
  v9 = StorEtwLoggingEnabled == 0;
  Status = IoStatus->Status;
  v10 = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = v10;
  if ( !v9 )
  {
    v38 = 0LL;
    IoGetActivityIdIrp(Context, &v38);
    v12 = *((_QWORD *)Context + 23);
    if ( *(_BYTE *)v12 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_70;
      v14 = &EventNonReadWriteRequestComplete;
      goto LABEL_17;
    }
    if ( *(_BYTE *)v12 != 15 )
    {
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_70;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v13 = (int *)*((_QWORD *)Context + 7);
          if ( v13 )
            v8 = *v13;
          McTemplateK0pqd_EtwWriteTransfer(v11, v12, (unsigned int)&v38, (_DWORD)Context, v8, *((_DWORD *)Context + 12));
        }
        goto LABEL_70;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_70;
      v14 = &EventPnpRequestComplete;
LABEL_17:
      McTemplateK0pd_EtwWriteTransfer(v11, v14, &v38, Context, *((_DWORD *)Context + 12));
      goto LABEL_70;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_70;
    v15 = *(_QWORD *)(v12 + 8);
    v16 = 0LL;
    v34 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    if ( *(_BYTE *)(v15 + 2) == 40 )
    {
      v22 = 0LL;
      v23 = 0;
      if ( *(_DWORD *)(v15 + 20) )
        goto LABEL_69;
      v24 = 0;
      v36 = *(_DWORD *)(v15 + 56);
      if ( !v36 )
        goto LABEL_69;
      do
      {
        v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v25 = *(unsigned int *)(v15 + 16);
          if ( (unsigned int)v11 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v11;
            v27 = *(_DWORD *)(v11 + v15) - 64;
            if ( v27 )
            {
              LODWORD(v11) = v27 - 1;
              if ( (_DWORD)v11 )
              {
                if ( (_DWORD)v11 == 1 )
                {
                  LODWORD(v11) = v26 + 40;
                  if ( v26 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v26 + v15 + 12) )
                      v22 = (char *)(v26 + v15 + 32);
                    v16 = *(_BYTE **)(v26 + v15 + 24);
LABEL_31:
                    v28 = *(_BYTE *)(v26 + v15 + 8);
                    v17 = *(_BYTE *)(v26 + v15 + 9);
                    goto LABEL_40;
                  }
                }
              }
              else
              {
                LODWORD(v11) = v26 + 56;
                if ( v26 + 56 <= v25 )
                {
                  v23 = 1;
                  if ( *(_BYTE *)(v26 + v15 + 10) )
                    v22 = (char *)(v26 + v15 + 24);
                  v16 = *(_BYTE **)(v26 + v15 + 16);
                  v17 = *(_BYTE *)(v26 + v15 + 9);
                  v34 = *(_BYTE *)(v26 + v15 + 8);
                }
              }
            }
            else
            {
              LODWORD(v11) = v26 + 40;
              if ( v26 + 40 <= v25 )
              {
                if ( *(_BYTE *)(v26 + v15 + 10) )
                  v22 = (char *)(v26 + v15 + 24);
                v16 = *(_BYTE **)(v26 + v15 + 16);
                goto LABEL_31;
              }
            }
            if ( v23 )
              break;
          }
        }
        ++v24;
      }
      while ( v24 < v36 );
      v28 = v34;
LABEL_40:
      if ( !v22 )
        goto LABEL_69;
      v29 = *v22;
      v21 = 0;
    }
    else
    {
      v29 = *(_BYTE *)(v15 + 72);
      v16 = *(_BYTE **)(v15 + 32);
      v17 = *(_BYTE *)(v15 + 11);
      v28 = *(_BYTE *)(v15 + 4);
      if ( *(_BYTE *)(v15 + 2) )
        goto LABEL_69;
    }
    LOBYTE(v11) = v29 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v15 + 3);
      if ( v30 == 1 || !v16 || !v17 )
      {
LABEL_65:
        if ( byte_140173441 < 0 )
        {
          if ( !v21 )
          {
            v20 = 0;
            v19 = 0;
            v18 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v11,
            v15,
            (unsigned int)&v38,
            (_DWORD)Context,
            *((_DWORD *)Context + 12),
            v30,
            v28,
            v18,
            v19,
            v20,
            (char)Context);
        }
        goto LABEL_69;
      }
      v31 = *v16 & 0x7F;
      if ( v31 == 114 || v31 == 115 )
      {
        v11 = (unsigned __int64)&v16[v17];
        LOBYTE(v15) = 0;
        if ( (unsigned __int64)(v16 + 8) > v11 )
          goto LABEL_63;
        v19 = v16[2];
        v18 = v16[1] & 0xF;
        v20 = v16[3];
      }
      else
      {
        v11 = (unsigned __int64)&v16[v17];
        LOBYTE(v15) = 0;
        if ( (unsigned __int64)(v16 + 8) > v11 )
          goto LABEL_63;
        v32 = v16 + 13;
        v18 = v16[2] & 0xF;
        v33 = v17;
        if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
          v33 = (unsigned __int8)v16[7] + 8;
        v11 = (unsigned __int64)&v16[v33];
        if ( (unsigned __int64)v32 <= v11 )
          v19 = v16[12];
        if ( (unsigned __int64)(v16 + 14) > v11 )
          v20 = 0;
        else
          v20 = *v32;
      }
      LOBYTE(v15) = 1;
LABEL_63:
      if ( (_BYTE)v15 )
        v21 = 1;
      goto LABEL_65;
    }
LABEL_69:
    v10 = Status;
  }
LABEL_70:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(v37[42]);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      38LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      v37,
      Context,
      v10);
  }
}
