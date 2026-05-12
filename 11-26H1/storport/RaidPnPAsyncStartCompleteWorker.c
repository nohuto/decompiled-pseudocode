/*
 * XREFs of RaidPnPAsyncStartCompleteWorker @ 0x14006D350
 * Callers:
 *     <none>
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     StorLogStartAdapterFailure @ 0x140097CA8 (StorLogStartAdapterFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidPnPAsyncStartCompleteWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rsi
  __int64 v4; // rdi
  int started; // ebp
  int v6; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // bp
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r14
  char *v20; // r14
  unsigned int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  char v27; // al
  char *v28; // r10
  unsigned int v29; // eax
  char v30; // [rsp+60h] [rbp-58h]
  unsigned int v31; // [rsp+64h] [rbp-54h]
  GUID v32; // [rsp+68h] [rbp-50h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (__int64)Context[1];
  RaidAcquireAdapterRemoveLock((__int64)DeviceExtension);
  started = RaidAdapterStartDevice((char *)DeviceExtension, v4);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 42));
  v6 = 0;
  if ( started < 0 )
    StorLogStartAdapterFailure(DeviceExtension, (unsigned int)started);
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = started;
  if ( v7 )
    goto LABEL_69;
  v32 = 0LL;
  IoGetActivityIdIrp(v4, &v32);
  v9 = *(_QWORD *)(v4 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_69;
    v11 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v10 = *(int **)(v4 + 56);
        if ( v10 )
          v6 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v32, v4, v6, *(_DWORD *)(v4 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_69;
    v11 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v32, v4, *(_DWORD *)(v4 + 48));
    goto LABEL_69;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_69;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_69;
LABEL_43:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) != 0 )
      goto LABEL_69;
    v26 = *(_BYTE *)(v12 + 3);
    if ( v26 == 1 || !v14 || !v15 )
      goto LABEL_62;
    v27 = *v14 & 0x7F;
    if ( v27 == 114 || v27 == 115 )
    {
      v8 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_60;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v8 = (unsigned __int64)&v14[v15];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_60;
      v28 = v14 + 13;
      v16 = v14[2] & 0xF;
      v29 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v29 = (unsigned __int8)v14[7] + 8;
      v8 = (unsigned __int64)&v14[v29];
      if ( (unsigned __int64)v28 <= v8 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v8 )
        v18 = 0;
      else
        v18 = *v28;
    }
    LOBYTE(v12) = 1;
LABEL_60:
    if ( (_BYTE)v12 )
      v19 = 1;
LABEL_62:
    if ( byte_140173441 < 0 )
    {
      if ( !v19 )
      {
        v18 = 0;
        v17 = 0;
        v16 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v32, v4, *(_DWORD *)(v4 + 48), v26, v13, v16, v17, v18, v4);
    }
    goto LABEL_69;
  }
  v20 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_69;
  v21 = 0;
  v31 = *(_DWORD *)(v12 + 56);
  if ( !v31 )
    goto LABEL_69;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v8 < (unsigned int)v22 )
        break;
    }
LABEL_34:
    if ( ++v21 >= v31 )
      goto LABEL_40;
  }
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
        {
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v20 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_39;
        }
      }
    }
    else
    {
      v8 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v30 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v20 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_33;
  }
  v8 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_33:
    if ( v30 )
      goto LABEL_40;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v20 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_39:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_40:
  if ( v20 )
  {
    v25 = *v20;
    v19 = 0;
    goto LABEL_43;
  }
LABEL_69:
  IofCompleteRequest((PIRP)v4, 0);
}
