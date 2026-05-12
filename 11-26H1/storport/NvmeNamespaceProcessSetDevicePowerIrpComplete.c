/*
 * XREFs of NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x140128C7C
 * Callers:
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x140128C38 (NvmeNamespaceProcessSetDevicePowerIrp.c)
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     StorRestartDeviceIoQueue @ 0x140031C58 (StorRestartDeviceIoQueue.c)
 *     StorSetDevicePowerState @ 0x140049CC0 (StorSetDevicePowerState.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x140124014 (NvmeAdapterPoFxSetDeviceIdleTimeout.c)
 *     NvmeNamespacePoFxD0Completion @ 0x140127E60 (NvmeNamespacePoFxD0Completion.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceProcessSetDevicePowerIrpComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // edi
  _QWORD *v6; // r14
  POWER_STATE *v7; // rax
  POWER_STATE v8; // ebx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // r13
  _BYTE *v23; // r9
  unsigned __int8 v24; // bp
  char v25; // r10
  char v26; // bl
  char v27; // r11
  char v28; // r14
  char *v29; // r14
  unsigned int v30; // r12d
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  int v33; // ecx
  char v34; // cl
  char v35; // r8
  char v36; // al
  char *v37; // r11
  unsigned int v38; // eax
  char v40; // [rsp+60h] [rbp-78h]
  unsigned int v41; // [rsp+64h] [rbp-74h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  GUID v43; // [rsp+80h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = *(_QWORD **)(v3 + 128);
  v7 = *(POWER_STATE **)(a2 + 184);
  *(_DWORD *)(a2 + 48) = 0;
  v8.SystemState = v7[6].SystemState;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 128) + 88LL), &LockHandle);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 128) + 72LL) = v8;
  StorSetDevicePowerState(*(struct _DEVICE_OBJECT **)(a1 + 8), v8);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL);
  if ( v9 == 1 )
  {
    _interlockedbittestandreset(*(volatile signed __int32 **)(a1 + 256), 2u);
    StorRestartDeviceIoQueue(*(_QWORD *)(a1 + 256));
    if ( !NvmeNamespaceCheckAndAcquirePoFx(a1) )
      goto LABEL_12;
    NvmeNamespacePoFxD0Completion(v11, v10, v12, a1);
    _InterlockedDecrement((volatile signed __int32 *)(v6[20] + 116LL));
    if ( (*(_DWORD *)(v6[20] + 176LL) & 0x20) == 0 )
      goto LABEL_11;
    v14 = -1;
    goto LABEL_10;
  }
  if ( v9 == 4 && NvmeNamespaceCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6[20] + 116LL));
    v15 = v6[20];
    if ( (*(_DWORD *)(v15 + 176) & 0x20) == 0 || *(_DWORD *)(v15 + 116) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 656LL) )
      goto LABEL_11;
    v14 = 0;
LABEL_10:
    NvmeAdapterPoFxSetDeviceIdleTimeout(v6, v14, v13, 1);
LABEL_11:
    NvmeNamespaceReleasePoFx(a1);
  }
LABEL_12:
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v16 )
    goto LABEL_78;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_78;
    v20 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_78;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v5 = *v19;
        McTemplateK0pqd_EtwWriteTransfer(v17, v18, &v43, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_78;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_78;
    v20 = &EventPnpRequestComplete;
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v17, v20, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_78;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_78;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_78;
LABEL_52:
    LOBYTE(v17) = v34 - 8;
    if ( (v17 & 0x5D) != 0 )
      goto LABEL_78;
    v35 = *(_BYTE *)(v21 + 3);
    if ( v35 == 1 || !v23 || !v24 )
      goto LABEL_71;
    v36 = *v23 & 0x7F;
    if ( v36 == 114 || v36 == 115 )
    {
      v17 = (unsigned __int64)&v23[v24];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v23 + 8) > v17 )
        goto LABEL_69;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      v17 = (unsigned __int64)&v23[v24];
      LOBYTE(v21) = 0;
      if ( (unsigned __int64)(v23 + 8) > v17 )
        goto LABEL_69;
      v37 = v23 + 13;
      v25 = v23[2] & 0xF;
      v38 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v38 = (unsigned __int8)v23[7] + 8;
      v17 = (unsigned __int64)&v23[v38];
      if ( (unsigned __int64)v37 <= v17 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) > v17 )
        v27 = 0;
      else
        v27 = *v37;
    }
    LOBYTE(v21) = 1;
LABEL_69:
    if ( (_BYTE)v21 )
      v28 = 1;
LABEL_71:
    if ( byte_140173441 < 0 )
    {
      if ( !v28 )
      {
        v27 = 0;
        v26 = 0;
        v25 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v43, a2, *(_DWORD *)(a2 + 48), v35, v22, v25, v26, v27, a2);
    }
    goto LABEL_78;
  }
  v29 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_78;
  v30 = 0;
  v41 = *(_DWORD *)(v21 + 56);
  if ( !v41 )
    goto LABEL_78;
  while ( 1 )
  {
    v17 = *(unsigned int *)(v21 + 4LL * v30 + 120);
    if ( (unsigned int)v17 >= 0x80 )
    {
      v31 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v17 < (unsigned int)v31 )
        break;
    }
LABEL_43:
    if ( ++v30 >= v41 )
      goto LABEL_49;
  }
  v32 = (unsigned int)v17;
  v33 = *(_DWORD *)(v17 + v21) - 64;
  if ( v33 )
  {
    v17 = (unsigned int)(v33 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        v17 = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v21 + 12) )
            v29 = (char *)(v32 + v21 + 32);
          v23 = *(_BYTE **)(v32 + v21 + 24);
          goto LABEL_48;
        }
      }
    }
    else
    {
      v17 = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v32 + v21 + 10) )
          v29 = (char *)(v32 + v21 + 24);
        v22 = *(_BYTE *)(v32 + v21 + 8);
        v23 = *(_BYTE **)(v32 + v21 + 16);
        v24 = *(_BYTE *)(v32 + v21 + 9);
      }
    }
    goto LABEL_42;
  }
  v17 = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_42:
    if ( v40 )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v32 + v21 + 10) )
    v29 = (char *)(v32 + v21 + 24);
  v23 = *(_BYTE **)(v32 + v21 + 16);
LABEL_48:
  v24 = *(_BYTE *)(v32 + v21 + 9);
  v22 = *(_BYTE *)(v32 + v21 + 8);
LABEL_49:
  if ( v29 )
  {
    v34 = *v29;
    v28 = 0;
    goto LABEL_52;
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
