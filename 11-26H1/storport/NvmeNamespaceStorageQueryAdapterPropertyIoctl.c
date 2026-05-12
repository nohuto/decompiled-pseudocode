/*
 * XREFs of NvmeNamespaceStorageQueryAdapterPropertyIoctl @ 0x1401BACC8
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeNamespaceStorageQueryAdapterPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  PIRP Irp; // rax
  int v8; // ebx
  IRP *v9; // rsi
  int v10; // r14d
  IRP *v11; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r13
  _BYTE *v21; // r9
  unsigned __int8 v22; // bp
  char v23; // r11
  char v24; // si
  char v25; // r10
  char v26; // r14
  char *v27; // r14
  unsigned int v28; // r12d
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // al
  char v34; // r8
  char *v35; // r10
  unsigned int v36; // eax
  char v38; // [rsp+60h] [rbp-68h]
  NTSTATUS v39; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  GUID v41; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  if ( *(_DWORD *)(v2 + 8) < 0x1Eu )
  {
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v2 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 8), (PIRP)a2);
  }
  else
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v6 + 8) + 76LL) + 1, 0);
    v8 = 0;
    v9 = Irp;
    if ( Irp )
    {
      v11 = Irp;
      Irp->Tail.Overlay.Thread = *(_ETHREAD **)(a2 + 152);
      Irp->IoStatus.Status = -1073741637;
      Irp->AssociatedIrp.MasterIrp = *(_IRP **)(a2 + 24);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)v2;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(v2 + 16);
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(v2 + 32);
      CurrentStackLocation[-1].FileObject = *(_FILE_OBJECT **)(v2 + 48);
      v39 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v6 + 8), v11);
      v10 = v39;
      if ( v39 >= 0 )
      {
        v13 = *(_DWORD *)(v5 + 8);
        if ( v13 >= *(_DWORD *)(*(_QWORD *)(a1 + 16) + 620LL) )
          v13 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 620LL);
        *(_DWORD *)(v5 + 8) = v13;
        *(_DWORD *)(a2 + 48) = v9->IoStatus.Status;
        *(_QWORD *)(a2 + 56) = v9->IoStatus.Information;
      }
      IoFreeIrp(v9);
    }
    else
    {
      v10 = -1073741801;
      v39 = -1073741801;
    }
    v14 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v10;
    if ( v14 )
      goto LABEL_75;
    v41 = 0LL;
    IoGetActivityIdIrp(a2, &v41);
    v16 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v16 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_75;
      v18 = &EventNonReadWriteRequestComplete;
      goto LABEL_74;
    }
    if ( *(_BYTE *)v16 != 15 )
    {
      if ( *(_BYTE *)v16 != 27 )
        goto LABEL_75;
      if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v17 = *(int **)(a2 + 56);
          if ( v17 )
            v8 = *v17;
          McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v41, a2, v8, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_75;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_75;
      v18 = &EventPnpRequestComplete;
LABEL_74:
      McTemplateK0pd_EtwWriteTransfer(v15, v18, &v41, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_75;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_75;
    v19 = *(_QWORD *)(v16 + 8);
    v20 = 0;
    v21 = 0LL;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( *(_BYTE *)(v19 + 2) == 40 )
    {
      v27 = 0LL;
      v38 = 0;
      if ( *(_DWORD *)(v19 + 20) )
        goto LABEL_75;
      v28 = 0;
      v40 = *(_DWORD *)(v19 + 56);
      if ( !v40 )
        goto LABEL_75;
      while ( 1 )
      {
        v15 = *(unsigned int *)(v19 + 4LL * v28 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v29 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v15 < (unsigned int)v29 )
          {
            v30 = (unsigned int)v15;
            v31 = *(_DWORD *)(v15 + v19) - 64;
            if ( v31 )
            {
              v15 = (unsigned int)(v31 - 1);
              if ( (_DWORD)v15 )
              {
                if ( (_DWORD)v15 == 1 )
                {
                  v15 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_DWORD *)(v30 + v19 + 12) )
                      v27 = (char *)(v30 + v19 + 32);
                    v21 = *(_BYTE **)(v30 + v19 + 24);
                    goto LABEL_45;
                  }
                }
              }
              else
              {
                v15 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v38 = 1;
                  if ( *(_BYTE *)(v30 + v19 + 10) )
                    v27 = (char *)(v30 + v19 + 24);
                  v20 = *(_BYTE *)(v30 + v19 + 8);
                  v21 = *(_BYTE **)(v30 + v19 + 16);
                  v22 = *(_BYTE *)(v30 + v19 + 9);
                }
              }
            }
            else
            {
              v15 = v30 + 40;
              if ( v30 + 40 <= v29 )
              {
                if ( *(_BYTE *)(v30 + v19 + 10) )
                  v27 = (char *)(v30 + v19 + 24);
                v21 = *(_BYTE **)(v30 + v19 + 16);
LABEL_45:
                v22 = *(_BYTE *)(v30 + v19 + 9);
                v20 = *(_BYTE *)(v30 + v19 + 8);
LABEL_46:
                if ( v27 )
                {
                  v32 = *v27;
                  v26 = 0;
                  goto LABEL_49;
                }
                goto LABEL_75;
              }
            }
            if ( v38 )
              goto LABEL_46;
          }
        }
        if ( ++v28 >= v40 )
          goto LABEL_46;
      }
    }
    v32 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_75;
LABEL_49:
    LOBYTE(v15) = v32 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v19 + 3) == 1 || !v21 || !v22 )
      {
LABEL_68:
        if ( byte_140173441 < 0 )
        {
          if ( !v26 )
          {
            v25 = 0;
            v24 = 0;
            v23 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v15,
            v19,
            &v41,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v19 + 3),
            v20,
            v23,
            v24,
            v25,
            a2);
        }
        goto LABEL_75;
      }
      v33 = *v21 & 0x7F;
      if ( v33 == 114 || v33 == 115 )
      {
        v15 = (unsigned __int64)&v21[v22];
        v34 = 0;
        if ( (unsigned __int64)(v21 + 8) > v15 )
          goto LABEL_66;
        v24 = v21[2];
        v23 = v21[1] & 0xF;
        v25 = v21[3];
      }
      else
      {
        v15 = (unsigned __int64)&v21[v22];
        v34 = 0;
        if ( (unsigned __int64)(v21 + 8) > v15 )
          goto LABEL_66;
        v35 = v21 + 13;
        v23 = v21[2] & 0xF;
        v36 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v36 = (unsigned __int8)v21[7] + 8;
        v15 = (unsigned __int64)&v21[v36];
        if ( (unsigned __int64)v35 <= v15 )
          v24 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v15 )
          v25 = 0;
        else
          v25 = *v35;
      }
      v34 = 1;
LABEL_66:
      if ( v34 )
        v26 = 1;
      goto LABEL_68;
    }
LABEL_75:
    IofCompleteRequest((PIRP)a2, 0);
    return v39;
  }
}
