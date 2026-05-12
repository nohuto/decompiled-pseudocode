/*
 * XREFs of NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletion @ 0x140124D20 (NvmeAdapterPowerUpDeviceCompletion.c)
 *     NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine @ 0x1401253C0 (NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine.c)
 * Callees:
 *     NvmeNamespaceIdleState @ 0x140031970 (NvmeNamespaceIdleState.c)
 *     StorSetDevicePowerState @ 0x140049CC0 (StorSetDevicePowerState.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterRestart @ 0x1400DC7F4 (NvmeAdapterRestart.c)
 *     NvmeAdapterUnlock @ 0x1400E0C44 (NvmeAdapterUnlock.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140126DA8 (NvmeAdapterStorMQPowerUpDeviceLastStepA.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepB @ 0x140126E90 (NvmeAdapterStorMQPowerUpDeviceLastStepB.c)
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x140128C38 (NvmeNamespaceProcessSetDevicePowerIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterPowerUpDeviceCompletionLastStep(__int64 a1, __int64 a2)
{
  int *v2; // r14
  int v3; // eax
  POWER_STATE v6; // ebx
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int *v11; // rax
  __int64 v12; // rcx
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // r15
  char v18; // bl
  char v19; // r11
  char v20; // r12
  char *v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r13
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r11
  unsigned int v31; // eax
  PSLIST_ENTRY v32; // rbx
  _SLIST_ENTRY *Next; // rcx
  char v34; // al
  __int64 v35; // rdx
  PSLIST_ENTRY v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  char v39; // [rsp+60h] [rbp-19h]
  char v40; // [rsp+61h] [rbp-18h]
  int v41; // [rsp+64h] [rbp-15h]
  unsigned int v42; // [rsp+68h] [rbp-11h]
  int v43; // [rsp+6Ch] [rbp-Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-9h] BYREF
  GUID v45; // [rsp+88h] [rbp+Fh] BYREF

  v2 = (int *)(a2 + 48);
  v3 = *(_DWORD *)(a1 + 416);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v3 & 0x40) != 0 && *v2 >= 0 )
    NvmeAdapterStorMQPowerUpDeviceLastStepA();
  NvmeAdapterUnlock(a1);
  NvmeAdapterRestart(a1);
  v6.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a2 + 184) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 120LL), &LockHandle);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 160) + 68LL) = v6;
  StorSetDevicePowerState(*(struct _DEVICE_OBJECT **)(a1 + 8), v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x200) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 600);
    *(_DWORD *)&v45.Data2 = 0;
    v45.Data1 = *(_DWORD *)(v7 + 12);
    *(_QWORD *)v45.Data4 = *(_QWORD *)v7;
    IoReportInterruptActive(&v45);
  }
  v8 = StorEtwLoggingEnabled == 0;
  v43 = *v2;
  *v2 = *v2;
  *(_BYTE *)(a2 + 141) = -84;
  if ( !v8 )
  {
    v45 = 0LL;
    IoGetActivityIdIrp(a2, &v45);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_71;
      v13 = &EventNonReadWriteRequestComplete;
      goto LABEL_19;
    }
    if ( *(_BYTE *)v10 != 15 )
    {
      if ( *(_BYTE *)v10 != 27 )
        goto LABEL_71;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v11 = *(unsigned int **)(a2 + 56);
          if ( v11 )
            v12 = *v11;
          else
            v12 = 0LL;
          McTemplateK0pqd_EtwWriteTransfer(v12, v10, &v45, a2, v12, *v2);
        }
        goto LABEL_71;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_71;
      v13 = &EventPnpRequestComplete;
LABEL_19:
      McTemplateK0pd_EtwWriteTransfer(v9, v13, &v45, a2, *v2);
      goto LABEL_71;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_71;
    v14 = *(_QWORD *)(v10 + 8);
    v39 = 0;
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v14 + 2) != 40 )
    {
      v27 = *(_BYTE *)(v14 + 72);
      v15 = *(_BYTE **)(v14 + 32);
      v16 = *(_BYTE *)(v14 + 11);
      v26 = *(_BYTE *)(v14 + 4);
      if ( *(_BYTE *)(v14 + 2) )
        goto LABEL_71;
LABEL_48:
      LOBYTE(v9) = v27 - 8;
      if ( (v9 & 0x5D) != 0 )
        goto LABEL_71;
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v15 || !v16 )
        goto LABEL_67;
      v29 = *v15 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v9 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v9 )
          goto LABEL_65;
        v18 = v15[2];
        v17 = v15[1] & 0xF;
        v19 = v15[3];
      }
      else
      {
        v9 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v9 )
          goto LABEL_65;
        v30 = v15 + 13;
        v17 = v15[2] & 0xF;
        v31 = v16;
        if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
          v31 = (unsigned __int8)v15[7] + 8;
        v9 = (unsigned __int64)&v15[v31];
        if ( (unsigned __int64)v30 <= v9 )
          v18 = v15[12];
        if ( (unsigned __int64)(v15 + 14) > v9 )
          v19 = 0;
        else
          v19 = *v30;
      }
      LOBYTE(v14) = 1;
LABEL_65:
      if ( (_BYTE)v14 )
        v20 = 1;
LABEL_67:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v19 = 0;
          v18 = 0;
          v17 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v14, &v45, a2, *v2, v28, v26, v17, v18, v19, a2);
      }
      goto LABEL_71;
    }
    v21 = 0LL;
    v40 = 0;
    if ( !*(_DWORD *)(v14 + 20) )
    {
      v22 = 0LL;
      v41 = 0;
      v42 = *(_DWORD *)(v14 + 56);
      if ( v42 )
      {
        do
        {
          v9 = *(unsigned int *)(v14 + 4 * v22 + 120);
          if ( (unsigned int)v9 >= 0x80 )
          {
            v23 = *(unsigned int *)(v14 + 16);
            if ( (unsigned int)v9 < (unsigned int)v23 )
            {
              v24 = (unsigned int)v9;
              v25 = *(_DWORD *)(v9 + v14) - 64;
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
                      if ( *(_DWORD *)(v24 + v14 + 12) )
                        v21 = (char *)(v24 + v14 + 32);
                      v15 = *(_BYTE **)(v24 + v14 + 24);
LABEL_33:
                      v26 = *(_BYTE *)(v24 + v14 + 8);
                      v16 = *(_BYTE *)(v24 + v14 + 9);
                      goto LABEL_42;
                    }
                  }
                }
                else
                {
                  v9 = v24 + 56;
                  if ( v24 + 56 <= v23 )
                  {
                    v40 = 1;
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v15 = *(_BYTE **)(v24 + v14 + 16);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    v39 = *(_BYTE *)(v24 + v14 + 8);
                  }
                }
              }
              else
              {
                v9 = v24 + 40;
                if ( v24 + 40 <= v23 )
                {
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  goto LABEL_33;
                }
              }
              if ( v40 )
                break;
            }
          }
          v22 = (unsigned int)(v41 + 1);
          v41 = v22;
        }
        while ( (unsigned int)v22 < v42 );
        v26 = v39;
LABEL_42:
        if ( v21 )
        {
          v27 = *v21;
          v20 = 0;
          goto LABEL_48;
        }
      }
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v43 >= 0 )
  {
    while ( 1 )
    {
      v36 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 160) + 96LL));
      if ( !v36 )
        break;
      v32 = v36 - 9;
      Next = v36[-1].Next;
      v34 = BYTE2(Next[3].Next);
      if ( (v34 & 2) != 0 )
      {
        v35 = *((_QWORD *)&Next[3].Next + 1);
        BYTE2(Next[3].Next) = v34 & 0xFD;
        LOBYTE(v37) = 1;
        *((_QWORD *)&v32[8].Next[3].Next + 1) = 0LL;
        NvmeNamespaceProcessSetDevicePowerIrp(v32, v35, v37);
        ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)&v32[7].Next + 1));
      }
      else if ( (v34 & 1) != 0 )
      {
        BYTE2(Next[3].Next) = v34 & 0xFE;
        NvmeNamespaceIdleState(v32, 0, LOWORD(v32[8].Next[3].Next));
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v38 = *(_QWORD *)(a1 + 1152);
      if ( !_InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v38 + 1288) + 40LL) + 192LL),
              1,
              0) )
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v38 + 1288) + 40LL) + 128LL),
          (LARGE_INTEGER)-50000000LL,
          0x7D0u,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(*(_QWORD *)(v38 + 1288) + 40LL) + 64LL));
    }
    else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      NvmeAdapterStorMQPowerUpDeviceLastStepB(a1);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
}
