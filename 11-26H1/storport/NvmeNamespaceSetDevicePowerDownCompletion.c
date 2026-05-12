/*
 * XREFs of NvmeNamespaceSetDevicePowerDownCompletion @ 0x1401295D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeNamespaceSetDevicePowerDownCompletion(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int v6; // ebx
  _DWORD *v7; // rsi
  bool v8; // zf
  int Status; // ecx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  char v15; // r13
  _BYTE *v16; // r9
  unsigned __int8 v17; // bp
  char v18; // si
  char v19; // r11
  char v20; // r10
  char v21; // r14
  char *v22; // r14
  unsigned int v23; // r12d
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  char v32; // [rsp+60h] [rbp-68h]
  unsigned int v33; // [rsp+64h] [rbp-64h]
  _DWORD *NvmeNamespace; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v6 = 0;
  NvmeNamespace = GetNvmeNamespace(DeviceObject);
  v7 = NvmeNamespace + 32;
  if ( **(_BYTE **)(*(_QWORD *)(*((_QWORD *)NvmeNamespace + 2) + 128LL) + 160LL) == 1
    && _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)v7 + 96LL), 0, 1) == 1 )
  {
    PoFxIdleComponent(
      **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NvmeNamespace + 2) + 128LL) + 160LL) + 8LL),
      0LL,
      0LL);
  }
  *(_DWORD *)(*(_QWORD *)v7 + 80LL) &= ~4u;
  v8 = StorEtwLoggingEnabled == 0;
  Status = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = Status;
  if ( v8 )
    goto LABEL_70;
  v35 = 0LL;
  IoGetActivityIdIrp(Context, &v35);
  v11 = *((_QWORD *)Context + 23);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_70;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = (int *)*((_QWORD *)Context + 7);
        if ( v12 )
          v6 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v35, Context, v6, *((_DWORD *)Context + 12));
      }
      goto LABEL_70;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_70;
    v13 = &EventPnpRequestComplete;
LABEL_69:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v35, Context, *((_DWORD *)Context + 12));
    goto LABEL_70;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_70;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_70;
LABEL_44:
    LOBYTE(v10) = v27 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_70;
    v28 = *(_BYTE *)(v14 + 3);
    if ( v28 == 1 || !v16 || !v17 )
      goto LABEL_63;
    v29 = *v16 & 0x7F;
    if ( v29 == 114 || v29 == 115 )
    {
      v10 = (unsigned __int64)&v16[v17];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v16 + 8) > v10 )
        goto LABEL_61;
      v19 = v16[2];
      v18 = v16[1] & 0xF;
      v20 = v16[3];
    }
    else
    {
      v10 = (unsigned __int64)&v16[v17];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v16 + 8) > v10 )
        goto LABEL_61;
      v30 = v16 + 13;
      v18 = v16[2] & 0xF;
      v31 = v17;
      if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
        v31 = (unsigned __int8)v16[7] + 8;
      v10 = (unsigned __int64)&v16[v31];
      if ( (unsigned __int64)v30 <= v10 )
        v19 = v16[12];
      if ( (unsigned __int64)(v16 + 14) > v10 )
        v20 = 0;
      else
        v20 = *v30;
    }
    LOBYTE(v14) = 1;
LABEL_61:
    if ( (_BYTE)v14 )
      v21 = 1;
LABEL_63:
    if ( byte_140173441 < 0 )
    {
      if ( !v21 )
      {
        v20 = 0;
        v19 = 0;
        v18 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v10,
        v14,
        &v35,
        Context,
        *((_DWORD *)Context + 12),
        v28,
        v15,
        v18,
        v19,
        v20,
        Context);
    }
    goto LABEL_70;
  }
  v22 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_70;
  v23 = 0;
  v33 = *(_DWORD *)(v14 + 56);
  if ( !v33 )
    goto LABEL_70;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v14 + 4LL * v23 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v24 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v10 < (unsigned int)v24 )
        break;
    }
LABEL_35:
    if ( ++v23 >= v33 )
      goto LABEL_41;
  }
  v25 = (unsigned int)v10;
  v26 = *(_DWORD *)(v10 + v14) - 64;
  if ( v26 )
  {
    v10 = (unsigned int)(v26 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v14 + 12) )
            v22 = (char *)(v25 + v14 + 32);
          v16 = *(_BYTE **)(v25 + v14 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v10 = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v25 + v14 + 10) )
          v22 = (char *)(v25 + v14 + 24);
        v15 = *(_BYTE *)(v25 + v14 + 8);
        v16 = *(_BYTE **)(v25 + v14 + 16);
        v17 = *(_BYTE *)(v25 + v14 + 9);
      }
    }
    goto LABEL_34;
  }
  v10 = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_34:
    if ( v32 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v25 + v14 + 10) )
    v22 = (char *)(v25 + v14 + 24);
  v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_40:
  v17 = *(_BYTE *)(v25 + v14 + 9);
  v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_41:
  if ( v22 )
  {
    v27 = *v22;
    v21 = 0;
    goto LABEL_44;
  }
LABEL_70:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)NvmeNamespace + 15));
}
