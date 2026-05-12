/*
 * XREFs of NvmePnpAsyncStartCompleteWorker @ 0x1400E2A20
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400D1C28 (McTemplateK0qjzdq_EtwWriteTransfer.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmePnpAsyncStartCompleteWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rsi
  __int64 v4; // rdi
  int started; // ebp
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r13
  _BYTE *v15; // r9
  unsigned __int8 v16; // bp
  char v17; // r11
  char v18; // si
  char v19; // r10
  char v20; // r14
  char *v21; // r14
  unsigned int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  char v35; // [rsp+60h] [rbp-58h]
  unsigned int v36; // [rsp+64h] [rbp-54h]
  GUID v37; // [rsp+68h] [rbp-50h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (__int64)Context[1];
  NvmeAdapterAcquireRemoveLock((__int64)DeviceExtension);
  started = NvmeAdapterStartDevice((__int64)DeviceExtension, v4);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 19));
  v7 = 0;
  if ( started < 0 && (byte_14017344A & 1) != 0 )
    McTemplateK0qjzdq_EtwWriteTransfer(
      v6,
      &EventNVMeAdapterStartFailure,
      (__int64)DeviceExtension + 1048,
      *((_DWORD *)DeviceExtension + 14),
      (__int64)DeviceExtension + 1048,
      *((const wchar_t **)DeviceExtension + 129),
      started,
      *((_DWORD *)DeviceExtension + 257));
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = started;
  if ( v8 )
    goto LABEL_70;
  v37 = 0LL;
  IoGetActivityIdIrp(v4, &v37);
  v10 = *(_QWORD *)(v4 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_70;
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(v4 + 56);
        if ( v11 )
          v7 = *v11;
        LODWORD(v32) = *(_DWORD *)(v4 + 48);
        LODWORD(v31) = v7;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v37, v4, v31, v32);
      }
      goto LABEL_70;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_70;
    v12 = &EventPnpRequestComplete;
LABEL_69:
    LODWORD(v31) = *(_DWORD *)(v4 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v37, v4, v31);
    goto LABEL_70;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_70;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_70;
LABEL_44:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_70;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v15 || !v16 )
      goto LABEL_63;
    v28 = *v15 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_61;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_61;
      v29 = v15 + 13;
      v17 = v15[2] & 0xF;
      v30 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v30 = (unsigned __int8)v15[7] + 8;
      v9 = (unsigned __int64)&v15[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v9 )
        v19 = 0;
      else
        v19 = *v29;
    }
    LOBYTE(v13) = 1;
LABEL_61:
    if ( (_BYTE)v13 )
      v20 = 1;
LABEL_63:
    if ( byte_140173441 < 0 )
    {
      if ( !v20 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      LOBYTE(v34) = v17;
      LOBYTE(v33) = v14;
      LOBYTE(v32) = v27;
      LODWORD(v31) = *(_DWORD *)(v4 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v37, v4, v31, v32, v33, v34, v18, v19, v4);
    }
    goto LABEL_70;
  }
  v21 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_70;
  v22 = 0;
  v36 = *(_DWORD *)(v13 + 56);
  if ( !v36 )
    goto LABEL_70;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_35:
    if ( ++v22 >= v36 )
      goto LABEL_41;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v21 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v21 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_34;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_34:
    if ( v35 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v21 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_40:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_41:
  if ( v21 )
  {
    v26 = *v21;
    v20 = 0;
    goto LABEL_44;
  }
LABEL_70:
  IofCompleteRequest((PIRP)v4, 0);
}
