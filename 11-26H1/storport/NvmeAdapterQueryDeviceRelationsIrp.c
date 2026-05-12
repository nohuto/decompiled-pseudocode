/*
 * XREFs of NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400D1C28 (McTemplateK0qjzdq_EtwWriteTransfer.c)
 *     NvmeAdapterBuildFabricsNVMeBusRelations @ 0x1400D312C (NvmeAdapterBuildFabricsNVMeBusRelations.c)
 *     NvmeAdapterBuildPCIeNVMeBusRelations @ 0x1400D3324 (NvmeAdapterBuildPCIeNVMeBusRelations.c)
 *     NvmeAdapterBuildStorMQNVMeBusRelations @ 0x1400D345C (NvmeAdapterBuildStorMQNVMeBusRelations.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

NTSTATUS __fastcall NvmeAdapterQueryDeviceRelationsIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  int v7; // r12d
  void *v8; // r14
  int v9; // r15d
  __int64 v10; // rcx
  int v12; // eax
  void *v13; // rcx
  void *Pool; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // r9
  unsigned __int8 v24; // r14
  char v25; // si
  char v26; // r11
  char v27; // r10
  char v28; // r12
  char *v29; // r12
  int v30; // ecx
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r13
  char v36; // cl
  char v37; // r8
  char v38; // al
  char *v39; // r10
  unsigned int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-59h]
  __int64 v42; // [rsp+28h] [rbp-51h]
  __int64 v43; // [rsp+30h] [rbp-49h]
  __int64 v44; // [rsp+38h] [rbp-41h]
  char v45; // [rsp+60h] [rbp-19h]
  char v46; // [rsp+61h] [rbp-18h]
  void *Src; // [rsp+68h] [rbp-11h] BYREF
  int v48; // [rsp+70h] [rbp-9h]
  GUID v49; // [rsp+78h] [rbp-1h] BYREF
  GUID v50; // [rsp+88h] [rbp+Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  Src = 0LL;
  v50 = 0LL;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v9 = -1056964602;
  if ( !*(_DWORD *)(v3 + 8) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v12 = NvmeAdapterBuildPCIeNVMeBusRelations(a1, &Src);
    }
    else if ( *(_QWORD *)(a1 + 608) )
    {
      v12 = NvmeAdapterBuildFabricsNVMeBusRelations(a1, &Src);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
        goto LABEL_17;
      v12 = NvmeAdapterBuildStorMQNVMeBusRelations(a1, &Src);
    }
    v8 = Src;
    v9 = v12;
    if ( Src )
    {
      v13 = *(void **)(a1 + 1016);
      v7 = *(_DWORD *)Src;
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x52446152u);
        *(_QWORD *)(a1 + 1016) = 0LL;
      }
      Pool = (void *)RaidAllocatePool(64LL, (unsigned int)(8 * v7 + 8), 1380213074LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 1016) = Pool;
      if ( Pool )
        memmove(Pool, v8, (unsigned int)(8 * v7 + 8));
    }
LABEL_17:
    if ( (byte_140173443 & 0x40) != 0 )
      McTemplateK0qjzdq_EtwWriteTransfer(
        a1 + 1048,
        &EventNVMeAdapterQDR,
        a3,
        *(_DWORD *)(a1 + 56),
        a1 + 1048,
        *(const wchar_t **)(a1 + 1032),
        v9,
        v7);
    *(_QWORD *)(a2 + 56) = v8;
    *(_DWORD *)(a2 + 48) = v9;
    if ( v9 >= 0 )
    {
      if ( StorEtwLoggingEnabled )
      {
        IoGetActivityIdIrp(a2, &v50);
        if ( (byte_140173442 & 0x20) != 0 )
        {
          LODWORD(v41) = v9;
          McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v50, a2, v41);
        }
      }
      v16 = *(_QWORD *)(a2 + 184);
      *(_OWORD *)(v16 - 72) = *(_OWORD *)v16;
      *(_OWORD *)(v16 - 56) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)(v16 - 40) = *(_OWORD *)(v16 + 32);
      *(_QWORD *)(v16 - 24) = *(_QWORD *)(v16 + 48);
      *(_BYTE *)(v16 - 69) = 0;
      return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    }
    v17 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v17 )
      goto LABEL_90;
    v49 = 0LL;
    IoGetActivityIdIrp(a2, &v49);
    v19 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v19 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_89;
      }
LABEL_90:
      IofCompleteRequest((PIRP)a2, 0);
      return v9;
    }
    if ( *(_BYTE *)v19 != 15 )
    {
      if ( *(_BYTE *)v19 == 27 )
      {
        if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v20 = *(int **)(a2 + 56);
            if ( v20 )
              v4 = *v20;
            LODWORD(v42) = *(_DWORD *)(a2 + 48);
            LODWORD(v41) = v4;
            McTemplateK0pqd_EtwWriteTransfer(v18, v19, &v49, a2, v41, v42);
          }
          goto LABEL_90;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v21 = &EventPnpRequestComplete;
LABEL_89:
          LODWORD(v41) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v18, v21, &v49, a2, v41);
          goto LABEL_90;
        }
      }
      goto LABEL_90;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_90;
    v22 = *(_QWORD *)(v19 + 8);
    v23 = 0LL;
    v45 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( *(_BYTE *)(v22 + 2) == 40 )
    {
      v29 = 0LL;
      v46 = 0;
      if ( *(_DWORD *)(v22 + 20) )
        goto LABEL_90;
      v30 = *(_DWORD *)(v22 + 56);
      v31 = 0LL;
      v48 = 0;
      LODWORD(Src) = v30;
      if ( !v30 )
        goto LABEL_90;
      do
      {
        v18 = *(unsigned int *)(v22 + 4 * v31 + 120);
        if ( (unsigned int)v18 >= 0x80 )
        {
          v32 = *(unsigned int *)(v22 + 16);
          if ( (unsigned int)v18 < (unsigned int)v32 )
          {
            v33 = (unsigned int)v18;
            v34 = *(_DWORD *)(v18 + v22) - 64;
            if ( v34 )
            {
              v18 = (unsigned int)(v34 - 1);
              if ( (_DWORD)v18 )
              {
                if ( (_DWORD)v18 == 1 )
                {
                  v18 = v33 + 40;
                  if ( v33 + 40 <= v32 )
                  {
                    if ( *(_DWORD *)(v33 + v22 + 12) )
                      v29 = (char *)(v33 + v22 + 32);
                    v23 = *(_BYTE **)(v33 + v22 + 24);
LABEL_49:
                    v35 = *(_BYTE *)(v33 + v22 + 8);
                    v24 = *(_BYTE *)(v33 + v22 + 9);
                    goto LABEL_58;
                  }
                }
              }
              else
              {
                v18 = v33 + 56;
                if ( v33 + 56 <= v32 )
                {
                  v46 = 1;
                  if ( *(_BYTE *)(v33 + v22 + 10) )
                    v29 = (char *)(v33 + v22 + 24);
                  v23 = *(_BYTE **)(v33 + v22 + 16);
                  v24 = *(_BYTE *)(v33 + v22 + 9);
                  v45 = *(_BYTE *)(v33 + v22 + 8);
                }
              }
            }
            else
            {
              v18 = v33 + 40;
              if ( v33 + 40 <= v32 )
              {
                if ( *(_BYTE *)(v33 + v22 + 10) )
                  v29 = (char *)(v33 + v22 + 24);
                v23 = *(_BYTE **)(v33 + v22 + 16);
                goto LABEL_49;
              }
            }
            if ( v46 )
              break;
          }
        }
        v31 = (unsigned int)(v48 + 1);
        v48 = v31;
      }
      while ( (unsigned int)v31 < (unsigned int)Src );
      v35 = v45;
LABEL_58:
      if ( !v29 )
        goto LABEL_90;
      v36 = *v29;
      v28 = 0;
    }
    else
    {
      v36 = *(_BYTE *)(v22 + 72);
      v23 = *(_BYTE **)(v22 + 32);
      v24 = *(_BYTE *)(v22 + 11);
      v35 = *(_BYTE *)(v22 + 4);
      if ( *(_BYTE *)(v22 + 2) )
        goto LABEL_90;
    }
    LOBYTE(v18) = v36 - 8;
    if ( (v18 & 0x5D) != 0 )
      goto LABEL_90;
    v37 = *(_BYTE *)(v22 + 3);
    if ( v37 == 1 || !v23 || !v24 )
    {
LABEL_83:
      if ( byte_140173441 < 0 )
      {
        if ( !v28 )
        {
          v27 = 0;
          v26 = 0;
          v25 = 0;
        }
        LOBYTE(v44) = v25;
        LOBYTE(v43) = v35;
        LOBYTE(v42) = v37;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v49, a2, v41, v42, v43, v44, v26, v27, a2);
      }
      goto LABEL_90;
    }
    v38 = *v23 & 0x7F;
    if ( v38 == 114 || v38 == 115 )
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_81;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      v18 = (unsigned __int64)&v23[v24];
      LOBYTE(v22) = 0;
      if ( (unsigned __int64)(v23 + 8) > v18 )
        goto LABEL_81;
      v39 = v23 + 13;
      v25 = v23[2] & 0xF;
      v40 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v40 = (unsigned __int8)v23[7] + 8;
      v18 = (unsigned __int64)&v23[v40];
      if ( (unsigned __int64)v39 <= v18 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) > v18 )
        v27 = 0;
      else
        v27 = *v39;
    }
    LOBYTE(v22) = 1;
LABEL_81:
    if ( (_BYTE)v22 )
      v28 = 1;
    goto LABEL_83;
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v50);
    if ( (byte_140173442 & 0x20) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v10, &EventPnpRequestComplete, &v50, a2, *(_DWORD *)(a2 + 48));
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
