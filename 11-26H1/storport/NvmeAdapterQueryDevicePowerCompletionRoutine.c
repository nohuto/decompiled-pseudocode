/*
 * XREFs of NvmeAdapterQueryDevicePowerCompletionRoutine @ 0x140125430
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterQueryDevicePowerCompletionRoutine(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeAdapter; // rax
  __int64 v7; // r9
  int v8; // ebx
  bool v9; // zf
  int Status; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  char v16; // r13
  _BYTE *v17; // r9
  unsigned __int8 v18; // bp
  char v19; // si
  char v20; // r11
  char v21; // r10
  char v22; // r14
  char *v23; // r14
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r10
  unsigned int v32; // eax
  char v33; // [rsp+60h] [rbp-68h]
  unsigned int v34; // [rsp+64h] [rbp-64h]
  PEX_RUNDOWN_REF_CACHE_AWARE *v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  NvmeAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeAdapter(DeviceObject);
  v8 = 0;
  v9 = StorEtwLoggingEnabled == 0;
  v35 = NvmeAdapter;
  Status = IoStatus->Status;
  *(_BYTE *)(v7 + 141) = -84;
  *(_DWORD *)(v7 + 48) = Status;
  if ( v9 )
    goto LABEL_67;
  v36 = 0LL;
  IoGetActivityIdIrp(v7, &v36);
  v12 = Context[23];
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_67;
    v14 = &EventNonReadWriteRequestComplete;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = (int *)Context[7];
        if ( v13 )
          v8 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v36, Context, v8, *((_DWORD *)Context + 12));
      }
      goto LABEL_67;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_67;
    v14 = &EventPnpRequestComplete;
LABEL_66:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v36, Context, *((_DWORD *)Context + 12));
    goto LABEL_67;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_67;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_67;
LABEL_41:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_67;
    v29 = *(_BYTE *)(v15 + 3);
    if ( v29 == 1 || !v17 || !v18 )
      goto LABEL_60;
    v30 = *v17 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_58;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_58;
      v31 = v17 + 13;
      v19 = v17[2] & 0xF;
      v32 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v32 = (unsigned __int8)v17[7] + 8;
      v11 = (unsigned __int64)&v17[v32];
      if ( (unsigned __int64)v31 <= v11 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v11 )
        v21 = 0;
      else
        v21 = *v31;
    }
    LOBYTE(v15) = 1;
LABEL_58:
    if ( (_BYTE)v15 )
      v22 = 1;
LABEL_60:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v11,
        v15,
        &v36,
        Context,
        *((_DWORD *)Context + 12),
        v29,
        v16,
        v19,
        v20,
        v21,
        Context);
    }
    goto LABEL_67;
  }
  v23 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_67;
  v24 = 0;
  v34 = *(_DWORD *)(v15 + 56);
  if ( !v34 )
    goto LABEL_67;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v25 )
        break;
    }
LABEL_32:
    if ( ++v24 >= v34 )
      goto LABEL_38;
  }
  v26 = (unsigned int)v11;
  v27 = *(_DWORD *)(v11 + v15) - 64;
  if ( v27 )
  {
    v11 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v23 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_37;
        }
      }
    }
    else
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v23 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_31;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_31:
    if ( v33 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v23 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_37:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_38:
  if ( v23 )
  {
    v28 = *v23;
    v22 = 0;
    goto LABEL_41;
  }
LABEL_67:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(v35[19]);
}
