/*
 * XREFs of NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorAllocateStorMQSrb @ 0x140082C34 (StorAllocateStorMQSrb.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400D30CC (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterMiniportPassthroughRequestIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v4; // ebx
  __int64 StorMQSrb; // rax
  __int64 v9; // rsi
  int v10; // r14d
  unsigned int v11; // r8d
  unsigned int i; // ecx
  __int64 v13; // rdx
  unsigned int *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v21; // rdx
  void *v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  int v28; // eax
  bool v29; // zf
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  _BYTE *v35; // r9
  unsigned __int8 v36; // bp
  char v37; // r10
  char v38; // si
  char v39; // r11
  char v40; // r15
  char *v41; // r15
  unsigned int v42; // r13d
  unsigned __int64 v43; // r12
  __int64 v44; // r8
  int v45; // ecx
  char v46; // r12
  char v47; // cl
  char v48; // r8
  char v49; // al
  char *v50; // r11
  unsigned int v51; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  char v54; // [rsp+60h] [rbp-58h]
  char v55; // [rsp+61h] [rbp-57h]
  unsigned int v56; // [rsp+64h] [rbp-54h]
  unsigned int v57; // [rsp+64h] [rbp-54h]
  GUID v58; // [rsp+68h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a3 + 184);
  v4 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  v56 = 0;
  if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    StorMQSrb = StorAllocateStorMQSrb(*(_QWORD *)(a1 + 8), 45);
    v9 = StorMQSrb;
    if ( StorMQSrb )
    {
      if ( *(_BYTE *)(StorMQSrb + 2) == 40 )
      {
        v11 = *(_DWORD *)(StorMQSrb + 56);
        if ( v11 )
        {
          for ( i = 0; i < v11; ++i )
          {
            v13 = *(unsigned int *)(StorMQSrb + 4LL * i + 120);
            if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(StorMQSrb + 16) )
            {
              v14 = (unsigned int *)(StorMQSrb + v13);
              if ( *(_DWORD *)(StorMQSrb + v13) == 69 )
                goto LABEL_13;
            }
          }
        }
      }
      v14 = 0LL;
LABEL_13:
      v15 = 0LL;
      v14[2] = *(_DWORD *)(v3 + 16);
      *(_QWORD *)(v14 + 3) = *(unsigned int *)(v3 + 8);
      if ( *(_BYTE *)(StorMQSrb + 2) == 40 )
      {
        v16 = *(unsigned int *)(StorMQSrb + 52);
        if ( (_DWORD)v16 )
          v15 = v9 + v16;
      }
      *(_WORD *)(v15 + 2) = *(_WORD *)(a1 + 56);
      if ( a2 )
        v17 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1648LL) + 64LL;
      else
        v17 = 0LL;
      *(_QWORD *)(v15 + 8) = v17;
      if ( a2 )
        v18 = *(_DWORD *)(a2 + 56);
      else
        v18 = 0;
      *(_DWORD *)(v15 + 16) = v18;
      v19 = 316LL;
      if ( *(_DWORD *)a1 != 1314275652 )
        v19 = 524LL;
      ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(
                                524LL,
                                ((*(_DWORD *)(v19 + a1) + 7) & 0xFFFFFFF8) + 1200);
      v22 = (void *)ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v23 = ContiguousIoResources + 48;
        RaidZeroXrb(ContiguousIoResources + 48, v21, 0, 0LL);
        v24 = *(_QWORD *)(a3 + 24);
        *(_BYTE *)(v23 + 17) |= 0x20u;
        *(_QWORD *)(v23 + 184) = v24;
        *(_QWORD *)(v23 + 168) = v9;
        *(_QWORD *)(v23 + 160) = a3;
        *(_QWORD *)(v23 + 216) = a1;
        if ( a2 )
          v25 = *(_QWORD *)(a2 + 16);
        else
          v25 = 0LL;
        *(_QWORD *)(v23 + 784) = v25;
        *(_QWORD *)(v9 + 96) = v23;
        *(_QWORD *)(v9 + 64) = *(_QWORD *)(a3 + 24);
        v26 = v14[3];
        v27 = v14[2];
        *(_DWORD *)(v9 + 24) = 0;
        if ( v27 <= v26 )
          v27 = v26;
        *(_DWORD *)(v9 + 40) = 10;
        *(_DWORD *)(v9 + 60) = v27;
        RaSrbSetMiniportContext((int *)a1, v9, (__int64)v22 + 1200);
        KeInitializeEvent((PRKEVENT)(v23 + 664), NotificationEvent, 0);
        *(_QWORD *)(v23 + 656) = RaidXrbSignalCompletion;
        if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
          v28 = NvmeAdapterRaiseIrqlAndExecuteXrb(a1, v23);
        else
          v28 = NvmeAdapterExecuteXrb(a1, v23);
        v10 = v28;
        if ( v28 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v23 + 664), Executive, 0, 0, 0LL);
          v10 = RaidSrbStatusToNtStatus(*(_BYTE *)(v9 + 3));
          if ( v10 >= 0 )
            v56 = v14[4];
        }
        MmFreeContiguousMemory(v22);
      }
      else
      {
        v10 = -1073741801;
      }
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_QWORD *)(v9 + 104) = 0LL;
      ExFreePoolWithTag((PVOID)v9, 0x72536152u);
    }
    else
    {
      v10 = -1073741801;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  v29 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a3 + 56) = v56;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v10;
  if ( !v29 )
  {
    v58 = 0LL;
    IoGetActivityIdIrp(a3, &v58);
    v31 = *(_QWORD *)(a3 + 184);
    if ( *(_BYTE *)v31 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_106;
      v33 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_105;
    }
    if ( *(_BYTE *)v31 != 15 )
    {
      if ( *(_BYTE *)v31 != 27 )
        goto LABEL_106;
      if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v32 = *(int **)(a3 + 56);
          if ( v32 )
            v4 = *v32;
          LODWORD(Timeout) = v4;
          McTemplateK0pqd_EtwWriteTransfer(v30, v31, &v58, a3, Timeout, *(_DWORD *)(a3 + 48));
        }
        goto LABEL_106;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_106;
      v33 = &EventPnpRequestComplete;
LABEL_105:
      LODWORD(Timeout) = *(_DWORD *)(a3 + 48);
      McTemplateK0pd_EtwWriteTransfer(v30, v33, &v58, a3, Timeout);
      goto LABEL_106;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_106;
    v34 = *(_QWORD *)(v31 + 8);
    v35 = 0LL;
    v54 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    if ( *(_BYTE *)(v34 + 2) != 40 )
    {
      v47 = *(_BYTE *)(v34 + 72);
      v35 = *(_BYTE **)(v34 + 32);
      v36 = *(_BYTE *)(v34 + 11);
      v46 = *(_BYTE *)(v34 + 4);
      if ( *(_BYTE *)(v34 + 2) )
        goto LABEL_106;
LABEL_80:
      LOBYTE(v30) = v47 - 8;
      if ( (v30 & 0x5D) != 0 )
        goto LABEL_106;
      v48 = *(_BYTE *)(v34 + 3);
      if ( v48 == 1 || !v35 || !v36 )
        goto LABEL_99;
      v49 = *v35 & 0x7F;
      if ( v49 == 114 || v49 == 115 )
      {
        v30 = (unsigned __int64)&v35[v36];
        LOBYTE(v34) = 0;
        if ( (unsigned __int64)(v35 + 8) > v30 )
          goto LABEL_97;
        v38 = v35[2];
        v37 = v35[1] & 0xF;
        v39 = v35[3];
      }
      else
      {
        v30 = (unsigned __int64)&v35[v36];
        LOBYTE(v34) = 0;
        if ( (unsigned __int64)(v35 + 8) > v30 )
          goto LABEL_97;
        v50 = v35 + 13;
        v37 = v35[2] & 0xF;
        v51 = v36;
        if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
          v51 = (unsigned __int8)v35[7] + 8;
        v30 = (unsigned __int64)&v35[v51];
        if ( (unsigned __int64)v50 <= v30 )
          v38 = v35[12];
        if ( (unsigned __int64)(v35 + 14) > v30 )
          v39 = 0;
        else
          v39 = *v50;
      }
      LOBYTE(v34) = 1;
LABEL_97:
      if ( (_BYTE)v34 )
        v40 = 1;
LABEL_99:
      if ( byte_140173441 < 0 )
      {
        if ( !v40 )
        {
          v39 = 0;
          v38 = 0;
          v37 = 0;
        }
        LODWORD(Timeout) = *(_DWORD *)(a3 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v30, v34, &v58, a3, Timeout, v48, v46, v37, v38, v39, a3);
      }
      goto LABEL_106;
    }
    v41 = 0LL;
    v55 = 0;
    if ( !*(_DWORD *)(v34 + 20) )
    {
      v42 = 0;
      v57 = *(_DWORD *)(v34 + 56);
      if ( v57 )
      {
        do
        {
          v30 = *(unsigned int *)(v34 + 4LL * v42 + 120);
          if ( (unsigned int)v30 >= 0x80 )
          {
            v43 = *(unsigned int *)(v34 + 16);
            if ( (unsigned int)v30 < (unsigned int)v43 )
            {
              v44 = (unsigned int)v30;
              v45 = *(_DWORD *)(v30 + v34) - 64;
              if ( v45 )
              {
                v30 = (unsigned int)(v45 - 1);
                if ( (_DWORD)v30 )
                {
                  if ( (_DWORD)v30 == 1 )
                  {
                    v30 = v44 + 40;
                    if ( v44 + 40 <= v43 )
                    {
                      if ( *(_DWORD *)(v44 + v34 + 12) )
                        v41 = (char *)(v44 + v34 + 32);
                      v35 = *(_BYTE **)(v44 + v34 + 24);
LABEL_65:
                      v46 = *(_BYTE *)(v44 + v34 + 8);
                      v36 = *(_BYTE *)(v44 + v34 + 9);
                      goto LABEL_74;
                    }
                  }
                }
                else
                {
                  v30 = v44 + 56;
                  if ( v44 + 56 <= v43 )
                  {
                    v55 = 1;
                    if ( *(_BYTE *)(v44 + v34 + 10) )
                      v41 = (char *)(v44 + v34 + 24);
                    v35 = *(_BYTE **)(v44 + v34 + 16);
                    v36 = *(_BYTE *)(v44 + v34 + 9);
                    v54 = *(_BYTE *)(v44 + v34 + 8);
                  }
                }
              }
              else
              {
                v30 = v44 + 40;
                if ( v44 + 40 <= v43 )
                {
                  if ( *(_BYTE *)(v44 + v34 + 10) )
                    v41 = (char *)(v44 + v34 + 24);
                  v35 = *(_BYTE **)(v44 + v34 + 16);
                  goto LABEL_65;
                }
              }
              if ( v55 )
                break;
            }
          }
          ++v42;
        }
        while ( v42 < v57 );
        v46 = v54;
LABEL_74:
        if ( v41 )
        {
          v47 = *v41;
          v40 = 0;
          goto LABEL_80;
        }
      }
    }
  }
LABEL_106:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)v10;
}
