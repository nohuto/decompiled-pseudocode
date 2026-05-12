/*
 * XREFs of NvmeAdapterGetControllers @ 0x14019A7FC
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetControllers(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v3; // ebx
  IRP *v4; // rdi
  unsigned int v5; // r15d
  _IRP *MasterIrp; // rax
  __int64 v7; // r13
  _IRP *v8; // r14
  unsigned int v9; // eax
  _QWORD *v10; // r12
  _MDL **p_MdlAddress; // rsi
  _QWORD *v12; // r13
  unsigned __int64 v13; // rbp
  int *v14; // rax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 Size; // rax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  _BYTE *v25; // r9
  unsigned __int8 v26; // bp
  char v27; // r11
  char v28; // si
  char v29; // r10
  char v30; // r14
  char *v31; // r14
  unsigned int v32; // r13d
  unsigned __int64 v33; // r12
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r12
  char v37; // cl
  char v38; // al
  char v39; // r8
  char *v40; // r10
  unsigned int v41; // eax
  int Status; // [rsp+20h] [rbp-B8h]
  char v44; // [rsp+60h] [rbp-78h]
  char v45; // [rsp+60h] [rbp-78h]
  char v46; // [rsp+61h] [rbp-77h]
  unsigned int v47; // [rsp+64h] [rbp-74h]
  GUID v50; // [rsp+80h] [rbp-58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Information = 0LL;
  v4 = a2;
  v5 = 0;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp
      && CurrentStackLocation->Parameters.Create.Options >= 0x10
      && MasterIrp->Type == 1
      && MasterIrp->Size >= 0x10u )
    {
      v44 = *(_BYTE *)(&MasterIrp->Size + 1) & 1;
      if ( CurrentStackLocation->Parameters.Read.Length >= 8 )
      {
        *(_QWORD *)&v50.Data1 = NvmeAdapterFindSubsystemPort(a1, (__int64)MasterIrp->MdlAddress ^ a1, 0, 0LL);
        v7 = *(_QWORD *)&v50.Data1;
        if ( *(_QWORD *)&v50.Data1 )
        {
          v8 = v4->AssociatedIrp.MasterIrp;
          memset_0(v8, 0, CurrentStackLocation->Parameters.Read.Length);
          v8->Type = 1;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(v7 + 632), 1u);
          v9 = (unsigned __int16)(32 * *(_WORD *)(v7 + 624) + 8);
          v8->Size = v9;
          if ( CurrentStackLocation->Parameters.Read.Length < v9 )
          {
            Size = 8LL;
          }
          else
          {
            v10 = *(_QWORD **)(v7 + 608);
            p_MdlAddress = &v8->MdlAddress;
            if ( v10 != (_QWORD *)(v7 + 608) )
            {
              v12 = (_QWORD *)(v7 + 608);
              do
              {
                v13 = (unsigned __int64)(v10 - 8);
                if ( (int)NvmeControllerAcquireRundown((__int64)(v10 - 8)) >= 0 )
                {
                  v14 = (int *)(v13 + 568);
                  if ( !v44 || *v14 == 2 )
                  {
                    *(_DWORD *)p_MdlAddress = 2097153;
                    v15 = *v14;
                    if ( *v14 == 2 )
                    {
                      *((_DWORD *)p_MdlAddress + 1) |= 1u;
                    }
                    else if ( v15 == 3 )
                    {
                      *((_DWORD *)p_MdlAddress + 1) |= 2u;
                    }
                    else if ( v15 == 4 )
                    {
                      v16 = *((_DWORD *)p_MdlAddress + 1);
                      if ( **(_DWORD **)(v13 + 1288) == 1 )
                        v17 = v16 | 0x10;
                      else
                        v17 = v16 | 4;
                      *((_DWORD *)p_MdlAddress + 1) = v17;
                    }
                    if ( (*(_BYTE *)(v13 + 136) & 4) != 0 )
                      *((_DWORD *)p_MdlAddress + 1) |= 8u;
                    p_MdlAddress[1] = (_MDL *)(v13 ^ a1);
                    *((_WORD *)p_MdlAddress + 8) = *(_WORD *)(v13 + 4);
                    *((_DWORD *)p_MdlAddress + 5) = *(_DWORD *)(v13 + 572);
                    if ( *(_DWORD *)(v13 + 572) == 1 )
                    {
                      *((_WORD *)p_MdlAddress + 12) = *(_WORD *)(v13 + 20);
                      *((_WORD *)p_MdlAddress + 13) = *(_WORD *)(v13 + 8);
                    }
                    ++*(_DWORD *)(&v8->Size + 1);
                    p_MdlAddress += 4;
                  }
                  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 552));
                }
                v10 = (_QWORD *)*v10;
              }
              while ( v10 != v12 );
              v4 = a2;
              v5 = 0;
              v7 = *(_QWORD *)&v50.Data1;
            }
            if ( *(_DWORD *)(&v8->Size + 1) < *(_DWORD *)(v7 + 624) )
              v8->Size = 32 * *(&v8->Size + 1) + 8;
            Size = v8->Size;
          }
          v4->IoStatus.Information = Size;
          ExReleaseResourceLite((PERESOURCE)(v7 + 632));
          KeLeaveCriticalRegion();
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 40));
        }
        else
        {
          v5 = -1073741275;
        }
      }
      else
      {
        v5 = -1073741789;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v4->Tail.CompletionKey + 21) = -84;
  v4->IoStatus.Status = v5;
  if ( !v19 )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(v4, &v50);
    v21 = (__int64)v4->Tail.Overlay.CurrentStackLocation;
    if ( *(_BYTE *)v21 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_107;
      Status = v4->IoStatus.Status;
      v23 = &EventNonReadWriteRequestComplete;
      goto LABEL_106;
    }
    if ( *(_BYTE *)v21 != 15 )
    {
      if ( *(_BYTE *)v21 != 27 )
        goto LABEL_107;
      if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          Information = (int *)v4->IoStatus.Information;
          if ( Information )
            v3 = *Information;
          McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v50, v4, v3, v4->IoStatus.Status);
        }
        goto LABEL_107;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_107;
      v23 = &EventPnpRequestComplete;
      Status = v4->IoStatus.Status;
LABEL_106:
      McTemplateK0pd_EtwWriteTransfer(v20, v23, &v50, v4, Status);
      goto LABEL_107;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_107;
    v24 = *(_QWORD *)(v21 + 8);
    v25 = 0LL;
    v46 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    if ( *(_BYTE *)(v24 + 2) != 40 )
    {
      v37 = *(_BYTE *)(v24 + 72);
      v25 = *(_BYTE **)(v24 + 32);
      v26 = *(_BYTE *)(v24 + 11);
      v36 = *(_BYTE *)(v24 + 4);
      if ( *(_BYTE *)(v24 + 2) )
        goto LABEL_107;
LABEL_81:
      LOBYTE(v20) = v37 - 8;
      if ( (v20 & 0x5D) != 0 )
        goto LABEL_107;
      if ( *(_BYTE *)(v24 + 3) == 1 || !v25 || !v26 )
        goto LABEL_100;
      v38 = *v25 & 0x7F;
      if ( v38 == 114 || v38 == 115 )
      {
        v20 = (unsigned __int64)&v25[v26];
        v39 = 0;
        if ( (unsigned __int64)(v25 + 8) > v20 )
          goto LABEL_98;
        v28 = v25[2];
        v27 = v25[1] & 0xF;
        v29 = v25[3];
      }
      else
      {
        v20 = (unsigned __int64)&v25[v26];
        v39 = 0;
        if ( (unsigned __int64)(v25 + 8) > v20 )
          goto LABEL_98;
        v40 = v25 + 13;
        v27 = v25[2] & 0xF;
        v41 = v26;
        if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
          v41 = (unsigned __int8)v25[7] + 8;
        v20 = (unsigned __int64)&v25[v41];
        if ( (unsigned __int64)v40 <= v20 )
          v28 = v25[12];
        if ( (unsigned __int64)(v25 + 14) > v20 )
          v29 = 0;
        else
          v29 = *v40;
      }
      v39 = 1;
LABEL_98:
      if ( v39 )
        v30 = 1;
LABEL_100:
      if ( byte_140173441 < 0 )
      {
        if ( !v30 )
        {
          v29 = 0;
          v28 = 0;
          v27 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v20,
          v24,
          &v50,
          v4,
          v4->IoStatus.Status,
          *(_BYTE *)(v24 + 3),
          v36,
          v27,
          v28,
          v29,
          v4);
      }
      goto LABEL_107;
    }
    v31 = 0LL;
    v45 = 0;
    if ( !*(_DWORD *)(v24 + 20) )
    {
      v32 = 0;
      v47 = *(_DWORD *)(v24 + 56);
      if ( v47 )
      {
        do
        {
          v20 = *(unsigned int *)(v24 + 4LL * v32 + 120);
          if ( (unsigned int)v20 >= 0x80 )
          {
            v33 = *(unsigned int *)(v24 + 16);
            if ( (unsigned int)v20 < (unsigned int)v33 )
            {
              v34 = (unsigned int)v20;
              v35 = *(_DWORD *)(v20 + v24) - 64;
              if ( v35 )
              {
                v20 = (unsigned int)(v35 - 1);
                if ( (_DWORD)v20 )
                {
                  if ( (_DWORD)v20 == 1 )
                  {
                    v20 = v34 + 40;
                    if ( v34 + 40 <= v33 )
                    {
                      if ( *(_DWORD *)(v34 + v24 + 12) )
                        v31 = (char *)(v34 + v24 + 32);
                      v25 = *(_BYTE **)(v34 + v24 + 24);
LABEL_66:
                      v36 = *(_BYTE *)(v34 + v24 + 8);
                      v26 = *(_BYTE *)(v34 + v24 + 9);
                      goto LABEL_75;
                    }
                  }
                }
                else
                {
                  v20 = v34 + 56;
                  if ( v34 + 56 <= v33 )
                  {
                    v45 = 1;
                    if ( *(_BYTE *)(v34 + v24 + 10) )
                      v31 = (char *)(v34 + v24 + 24);
                    v25 = *(_BYTE **)(v34 + v24 + 16);
                    v26 = *(_BYTE *)(v34 + v24 + 9);
                    v46 = *(_BYTE *)(v34 + v24 + 8);
                  }
                }
              }
              else
              {
                v20 = v34 + 40;
                if ( v34 + 40 <= v33 )
                {
                  if ( *(_BYTE *)(v34 + v24 + 10) )
                    v31 = (char *)(v34 + v24 + 24);
                  v25 = *(_BYTE **)(v34 + v24 + 16);
                  goto LABEL_66;
                }
              }
              if ( v45 )
                break;
            }
          }
          ++v32;
        }
        while ( v32 < v47 );
        v36 = v46;
LABEL_75:
        if ( v31 )
        {
          v37 = *v31;
          v30 = 0;
          goto LABEL_81;
        }
      }
    }
  }
LABEL_107:
  IofCompleteRequest(v4, 0);
  return v5;
}
